/*
 * UKLoopTaskController.c
 *
 *  Created on: 2019. 7. 15.
 *      Author: jej
 */


#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <uem_common.h>

#include <uem_data.h>

#include <UKChannel_internal.h>
#include <UKTask_internal.h>
#include <UKModelController.h>
#include <UKCPUGeneralTaskManager.h>

struct _STaskHandleAndTaskGraph {
	STaskGraph *pstTaskGraph;
	void *pTaskHandle;
};

static uem_result updateLoopCurrentIterationFromHistory(STaskGraph *pstGraph, OUT uem_bool *pbUpdated)
{
	uem_result result = ERR_UEM_UNKNOWN;
	SLoopInfo *pstLoopInfo = NULL;
	int nLoop = 0;
	int nHistoryEnd;
	int nCheckNum = 0;
	SLoopController *pstLoopController = NULL;
	uem_bool bUpdated = FALSE;

	pstLoopController = (SLoopController *) pstGraph->pController;

	pstLoopInfo = pstLoopController->pstLoopInfo;

	nHistoryEnd = pstLoopInfo->nCurHistoryStartIndex + pstLoopInfo->nCurHistoryLen - 1;

	if(nHistoryEnd >= LOOP_HISTORY_ARRAY_SIZE)
	{
		nHistoryEnd = nHistoryEnd - LOOP_HISTORY_ARRAY_SIZE;
	}

	for(nLoop = nHistoryEnd; nCheckNum < pstLoopInfo->nCurHistoryLen ; nLoop--)
	{
		if (pstLoopController->stCommon.nCurrentIteration < pstLoopInfo->astLoopIteration[nLoop].nNextIteration) {

			pstLoopController->stCommon.nCurrentIteration = pstLoopInfo->astLoopIteration[nLoop].nNextIteration;
			bUpdated = TRUE;
			break;
		}
		else if(pstLoopController->stCommon.nCurrentIteration >= pstLoopInfo->astLoopIteration[nLoop].nNextIteration)
		{
			break;
		}

		if (nLoop <= 0) {
			nLoop = LOOP_HISTORY_ARRAY_SIZE;
		}
		nCheckNum++;
	}

	*pbUpdated = bUpdated;

	result = ERR_UEM_NOERROR;
_EXIT:
	return result;
}


static uem_result updateLoopIterationHistory(STaskGraph *pstGraph, STask *pstCurrentTask)
{
	uem_result result = ERR_UEM_UNKNOWN;
	SLoopInfo *pstLoopInfo = NULL;
	int nHistoryEnd;
	int nLoopCount = 0;
	int nCurIteration = 0;
	int nTargetIteration = 0;

	SLoopController *pstController = NULL;

	pstController = (SLoopController *) pstGraph->pController;

	pstLoopInfo = pstController->pstLoopInfo;
	nCurIteration = pstController->stCommon.nCurrentIteration;
	nTargetIteration = pstCurrentTask->nTargetIteration;
	nLoopCount = pstLoopInfo->nLoopCount;

	if (pstLoopInfo->nCurHistoryLen < LOOP_HISTORY_ARRAY_SIZE) {
		pstLoopInfo->nCurHistoryLen++;
	}
	else {
		pstLoopInfo->nCurHistoryStartIndex++;
		if (pstLoopInfo->nCurHistoryStartIndex >= LOOP_HISTORY_ARRAY_SIZE) {
			pstLoopInfo->nCurHistoryStartIndex = 0;
		}
	}

	nHistoryEnd = pstLoopInfo->nCurHistoryStartIndex + pstLoopInfo->nCurHistoryLen - 1;
	if (nHistoryEnd >= LOOP_HISTORY_ARRAY_SIZE) {
		nHistoryEnd -= LOOP_HISTORY_ARRAY_SIZE;
	}

	pstLoopInfo->astLoopIteration[nHistoryEnd].nPrevIteration = nCurIteration;
	pstLoopInfo->astLoopIteration[nHistoryEnd].nNextIteration = nCurIteration - (nCurIteration % nLoopCount) + nLoopCount;

	if(nTargetIteration > 0 && pstLoopInfo->astLoopIteration[nHistoryEnd].nNextIteration > nTargetIteration)
	{
		pstLoopInfo->astLoopIteration[nHistoryEnd].nNextIteration = nTargetIteration;
	}

	if(pstLoopInfo->astLoopIteration[nHistoryEnd].nPrevIteration > pstLoopInfo->astLoopIteration[nHistoryEnd].nNextIteration)
	{
		ERRASSIGNGOTO(result, ERR_UEM_ILLEGAL_DATA, _EXIT);
	}
	result = ERR_UEM_NOERROR;
_EXIT:
	return result;
}

static uem_result setLoopTaskCurrentIteration(STask *pstTask, void *pUserData)
{
	uem_result result = ERR_UEM_UNKNOWN;
	SLoopInfo *pstLoopInfo = NULL;
	int nLoop = 0;
	int nHistoryEnd;
	int nCheckNum = 0;
	STask *pstParentLoopTask = NULL;
	int nNumOfDataToPop = 0;
	SLoopController *pstLoopController = NULL;
	int nParentBaseIteration = 0;
	int nConvertedIteration = 0;

	pstParentLoopTask = (STask *) pUserData;

	pstLoopController = (SLoopController *) pstParentLoopTask->pstSubGraph->pController;

	result = UKTask_UpdateAllSubGraphCurrentIteration(pstParentLoopTask->pstSubGraph, pstTask, pstLoopController->stCommon.nCurrentIteration / pstLoopController->pstLoopInfo->nLoopCount);
	ERRIFGOTO(result, _EXIT);

	result = UCThreadMutex_Lock(pstTask->hMutex);
	ERRIFGOTO(result, _EXIT);

	result = UKTask_ConvertIterationToUpperTaskGraphBase(pstTask, pstParentLoopTask->pstSubGraph, &nParentBaseIteration);
	ERRIFGOTO(result, _EXIT);

	pstLoopInfo = pstLoopController->pstLoopInfo;

	nHistoryEnd = pstLoopInfo->nCurHistoryStartIndex + pstLoopInfo->nCurHistoryLen - 1;

	if(nHistoryEnd >= LOOP_HISTORY_ARRAY_SIZE)
	{
		nHistoryEnd = nHistoryEnd - LOOP_HISTORY_ARRAY_SIZE;
	}

	for(nLoop = nHistoryEnd; nCheckNum < pstLoopInfo->nCurHistoryLen ; nLoop--)
	{
		//UEM_DEBUG_PRINT("Parent task: %s, child task: %s pstLoopInfo->astLoopIteration[%d]: prev: %d, next: %d, nCurrentIteration: %d, converted iter: %d\n", pstParentLoopTask->pszTaskName, pstTask->pszTaskName, nLoop, pstLoopInfo->astLoopIteration[nLoop].nPrevIteration, pstLoopInfo->astLoopIteration[nLoop].nNextIteration, pstTask->nCurIteration, nParentBaseIteration);
		if (nParentBaseIteration > pstLoopInfo->astLoopIteration[nLoop].nPrevIteration  &&
			nParentBaseIteration < pstLoopInfo->astLoopIteration[nLoop].nNextIteration) {

			result = UKTask_GetIterationNumberBasedOnTargetParentTaskId(pstTask, pstLoopInfo->astLoopIteration[nLoop].nNextIteration/ pstLoopInfo->nLoopCount, pstParentLoopTask->nTaskId, &nConvertedIteration);
			ERRIFGOTO(result, _EXIT);

			nNumOfDataToPop = nConvertedIteration - pstTask->nCurIteration;

			if(pstTask->nCurIteration < nConvertedIteration)
			{
				pstTask->nCurIteration = nConvertedIteration;
			}
		
			break;
		}
		else if(nParentBaseIteration >= pstLoopInfo->astLoopIteration[nLoop].nNextIteration)
		{
			break;
		}

		if (nLoop <= 0) {
			nLoop = LOOP_HISTORY_ARRAY_SIZE;
		}
		nCheckNum++;
	}

	result = UCThreadMutex_Unlock(pstTask->hMutex);
	ERRIFGOTO(result, _EXIT);

	if(nNumOfDataToPop > 0)
	{
		result = UKChannel_PopLoopTaskBroadcastingDataFromQueueByTaskId(pstParentLoopTask->nTaskId, pstTask->nTaskId, nNumOfDataToPop);
		ERRIFGOTO(result, _EXIT);
	}

	result = ERR_UEM_NOERROR;
_EXIT:
	return result;
}


static uem_result setLoopTaskCurrentIterationIfSuspended(STask *pstTask, void *pUserData)
{
	uem_result result = ERR_UEM_UNKNOWN;
	ECPUTaskState enState;
	HCPUGeneralTaskManager hManager = NULL;
	struct _STaskHandleAndTaskGraph *pstUserData;
	HThreadMutex hTaskGraphLock = NULL;

	pstUserData = (struct _STaskHandleAndTaskGraph *) pUserData;

	result = UKCPUGeneralTaskManagerCB_GetManagerHandle(pstUserData->pTaskHandle, &hManager);
	ERRIFGOTO(result, _EXIT);

	result = UKCPUGeneralTaskManagerCB_GetTaskGraphLock(pstUserData->pTaskHandle, &hTaskGraphLock);
	ERRIFGOTO(result, _EXIT);

	result = UKCPUGeneralTaskManager_GetTaskState(hManager, pstTask, &enState);
	ERRIFGOTO(result, _EXIT);

	if(enState == TASK_STATE_SUSPEND)
	{
		result = setLoopTaskCurrentIteration(pstTask, pstUserData->pstTaskGraph->pstParentTask);
		ERRIFGOTO(result, _EXIT);
	}

	result = ERR_UEM_NOERROR;
_EXIT:
	return result;
}

static uem_result changeOwnTaskState(void *pCurrentTaskHandle, ECPUTaskState enTaskStateToChange)
{
	uem_result result = ERR_UEM_UNKNOWN;
	ECPUTaskState enState;

	result = UKCPUGeneralTaskManagerCB_GetCurrentTaskState(pCurrentTaskHandle, &enState);
	ERRIFGOTO(result, _EXIT);

	if(enState == TASK_STATE_SUSPEND)
	{
		result = UKCPUGeneralTaskManagerCB_ChangeTaskState(pCurrentTaskHandle, enTaskStateToChange);
		ERRIFGOTO(result, _EXIT);

		result = UKCPUGeneralTaskManagerCB_ActivateTask(pCurrentTaskHandle);
		ERRIFGOTO(result, _EXIT);
	}

	result = ERR_UEM_NOERROR;
_EXIT:
	return result;
}


static uem_result changeOtherTaskState(HCPUGeneralTaskManager hManager, STask *pstTask, HThreadMutex hTaskGraphLock,
										ECPUTaskState enTaskStateToChange)
{
	uem_result result = ERR_UEM_UNKNOWN;
	ECPUTaskState enState;

	result = UKCPUGeneralTaskManager_GetTaskState(hManager, pstTask, &enState);
	ERRIFGOTO(result, _EXIT);

	if(enState == TASK_STATE_SUSPEND)
	{
		result = UKCPUGeneralTaskManager_RequestTaskState(hManager, pstTask, enTaskStateToChange);
		ERRIFGOTO(result, _EXIT);
	}

	result = ERR_UEM_NOERROR;
_EXIT:
	return result;
}


static uem_result traverseAndSetEventToStopTask(STask *pstTask, void *pUserData)
{
	uem_result result = ERR_UEM_UNKNOWN;
	HCPUGeneralTaskManager hManager = NULL;
	struct _STaskHandleAndTaskGraph *pstUserData;
	STask *pstCallerTask = NULL;
	HThreadMutex hTaskGraphLock = NULL;

	pstUserData = (struct _STaskHandleAndTaskGraph *) pUserData;

	result = UKCPUGeneralTaskManagerCB_GetManagerHandle(pstUserData->pTaskHandle, &hManager);
	ERRIFGOTO(result, _EXIT);

	result = UKCPUGeneralTaskManagerCB_GetCurrentTaskStructure(pstUserData->pTaskHandle, &pstCallerTask);
	ERRIFGOTO(result, _EXIT);

	result = UKCPUGeneralTaskManagerCB_GetTaskGraphLock(pstUserData->pTaskHandle, &hTaskGraphLock);
	ERRIFGOTO(result, _EXIT);

	if(pstTask->nTargetIteration > 0 && pstTask->nCurIteration >= pstTask->nTargetIteration)
	{
		if(pstCallerTask->nTaskId == pstTask->nTaskId)
		{
			result = changeOwnTaskState(pstUserData->pTaskHandle, TASK_STATE_STOPPING);
			ERRIFGOTO(result, _EXIT);
		}
		else
		{
			result = changeOtherTaskState(hManager, pstTask, hTaskGraphLock, TASK_STATE_STOPPING);
			ERRIFGOTO(result, _EXIT);
		}
	}

	result = ERR_UEM_NOERROR;
_EXIT:
	return result;
}



static uem_result traverseAndSetEventToTemporarySuspendedTask(STask *pstTask, void *pUserData)
{
	uem_result result = ERR_UEM_UNKNOWN;
	HCPUGeneralTaskManager hManager = NULL;
	struct _STaskHandleAndTaskGraph *pstUserData;
	STask *pstCallerTask = NULL;
	HThreadMutex hTaskGraphLock = NULL;
	uem_bool bControlled = FALSE;

	pstUserData = (struct _STaskHandleAndTaskGraph *) pUserData;

	result = UKCPUGeneralTaskManagerCB_GetCurrentTaskStructure(pstUserData->pTaskHandle, &pstCallerTask);
	ERRIFGOTO(result, _EXIT);

	result = UKCPUGeneralTaskManagerCB_GetManagerHandle(pstUserData->pTaskHandle, &hManager);
	ERRIFGOTO(result, _EXIT);

	result = UKCPUGeneralTaskManagerCB_GetTaskGraphLock(pstUserData->pTaskHandle, &hTaskGraphLock);
	ERRIFGOTO(result, _EXIT);

	if(pstCallerTask->nTaskId == pstTask->nTaskId)
	{
		result = changeOwnTaskState(pstUserData->pTaskHandle, TASK_STATE_RUNNING);
		ERRIFGOTO(result, _EXIT);
	}
	else
	{
		result =  UKTask_CheckTaskToBeControlled(pstUserData->pstTaskGraph, pstTask, &bControlled);
		ERRIFGOTO(result, _EXIT);

		if (bControlled == TRUE)
		{
			result = changeOtherTaskState(hManager, pstTask, hTaskGraphLock, TASK_STATE_RUNNING);
			ERRIFGOTO(result, _EXIT);
		}
		else
		{
			result = UKCPUGeneralTaskManager_RequestTaskState(hManager, pstTask, TASK_STATE_NONE);
			ERRIFGOTO(result, _EXIT);
		}
	}

	result = ERR_UEM_NOERROR;
_EXIT:
	return result;
}


static uem_result handleLoopTaskIteration(STaskGraph *pstGraph, void *pCurrentTaskHandle, void *pCurrentThreadHandle, uem_bool bUpdated, OUT uem_bool *pbActivated)
{
	uem_result result = ERR_UEM_UNKNOWN;
	STask *pstCurrentTask = NULL;
	STask *pstParentTask = NULL;
	int nLoopCount = 0;
	int nCurIteration = 0;
	struct _STaskHandleAndTaskGraph stUserData;
	ECPUTaskState enState;
	SLoopController *pstController = NULL;

	pstController = (SLoopController *) pstGraph->pController;
	pstParentTask = pstGraph->pstParentTask;

	result = UKCPUGeneralTaskManagerCB_GetCurrentTaskStructure(pCurrentTaskHandle, &pstCurrentTask);
	ERRIFGOTO(result, _EXIT);

	if(pstController->pstLoopInfo->enType == LOOP_TYPE_CONVERGENT && pstController->pstLoopInfo->nDesignatedTaskId == pstCurrentTask->nTaskId)
	{
		if(pstController->pstLoopInfo->bDesignatedTaskState == TRUE)
		{
			//stop loop task iteration
			//set iteration to target iteration
			result = UKCPUGeneralTaskManagerCB_ChangeTaskState(pCurrentTaskHandle, TASK_STATE_SUSPEND);
			ERRIFGOTO(result, _EXIT);
			
			if(bUpdated == FALSE)	
			{
				result = updateLoopIterationHistory(pstGraph, pstCurrentTask);
				ERRIFGOTO(result, _EXIT);

				nCurIteration = pstController->stCommon.nCurrentIteration;
				nLoopCount = pstController->pstLoopInfo->nLoopCount;

				pstController->stCommon.nCurrentIteration = nCurIteration - (nCurIteration % nLoopCount) + nLoopCount;
			}
			else
			{
			}

			stUserData.pTaskHandle = pCurrentTaskHandle;
			stUserData.pstTaskGraph = pstGraph;

//			setLoopTaskCurrentIterationIfSuspended
			result = UKCPUTaskCommon_TraverseSubGraphTasks(pstParentTask, setLoopTaskCurrentIterationIfSuspended, &stUserData);
			ERRIFGOTO(result, _EXIT);

			result = UKCPUTaskCommon_TraverseSubGraphTasks(pstParentTask, traverseAndSetEventToStopTask, &stUserData);
			ERRIFGOTO(result, _EXIT);

			pstController->pstLoopInfo->bDesignatedTaskState = FALSE;
		}
		else
		{
			//run next iteration
			if(bUpdated == FALSE)
			{
				pstController->stCommon.nCurrentIteration++;
			}
			//pstParentTask->pstLoopInfo->nCurrentIteration = pstGeneralTask->pstTask->nCurIteration + 1;
		}

		result = UKCPUGeneralTaskManagerCB_GetCurrentTaskState(pCurrentTaskHandle, &enState);
		ERRIFGOTO(result, _EXIT);

		if(enState != TASK_STATE_STOP && enState != TASK_STATE_STOPPING)
		{
			stUserData.pTaskHandle = pCurrentTaskHandle;
			stUserData.pstTaskGraph = pstGraph;

			result = UKCPUTaskCommon_TraverseSubGraphTasks(pstParentTask, traverseAndSetEventToTemporarySuspendedTask, &stUserData);
			ERRIFGOTO(result, _EXIT);

			*pbActivated = TRUE;
		}
		else if(enState == TASK_STATE_STOPPING)
		{
			*pbActivated = TRUE;
		}
	}

	result = ERR_UEM_NOERROR;

_EXIT:
	return result;
}


static uem_bool compareIterationtoAllParentLoopTask(STaskGraph *pstGraph, STask *pstTask, int nLoopIndex)
{
	STaskGraph *pstCurrentTaskGraph = NULL;
	uem_bool bNeedtoSuspend = FALSE;
	int nCurIteration = 0;
	SLoopController *pstController = NULL;
	uem_result result = ERR_UEM_UNKNOWN;
	int nTaskIterationNumber = 0;

	pstCurrentTaskGraph = pstTask->pstParentGraph;
	nCurIteration = pstTask->nCurIteration;

	result = UKTask_GetTaskIteration(pstTask, &nTaskIterationNumber);
	ERRIFGOTO(result, _EXIT);

	while(pstCurrentTaskGraph->pstParentTask != NULL)
	{
		if(pstCurrentTaskGraph->enControllerType == CONTROLLER_TYPE_DYNAMIC_CONVERGENT_LOOP ||
			pstCurrentTaskGraph->enControllerType == CONTROLLER_TYPE_DYNAMIC_DATA_LOOP)
		{
			pstController = (SLoopController *) pstCurrentTaskGraph->pController;

			if(pstCurrentTaskGraph->pstParentTask == pstGraph->pstParentTask)
			{
				if(pstController->stCommon.nCurrentIteration < nCurIteration ||
				pstController->stCommon.nCurrentIteration * nTaskIterationNumber < nLoopIndex)
				{
					bNeedtoSuspend = TRUE;
				}
				break;
			}

			nCurIteration = nCurIteration / pstController->pstLoopInfo->nLoopCount;
			nLoopIndex = nLoopIndex / pstController->pstLoopInfo->nLoopCount;
		}

		pstCurrentTaskGraph = pstCurrentTaskGraph->pstParentTask->pstParentGraph;
	}
_EXIT:
	return bNeedtoSuspend;
}


static uem_result updateTaskThreadIterationInConvergentLoop(STaskGraph *pstParentTaskGraph, void *pTaskHandle, void *pThreadHandle)
{
	uem_result result = ERR_UEM_UNKNOWN;
	STask *pstCurrentTask = NULL;
	int nCurIteration;
	int nCurLoopIndex = 0;
	STaskGraph *pstIntermediateGraph = NULL;
	SLoopController *pstController = NULL;
	SLoopController *pstIntermediateController = NULL;
	int nTaskIterationNumber = 0;

	pstController = (SLoopController *) pstParentTaskGraph->pController;

	result = UKCPUGeneralTaskManagerCB_GetCurrentTaskStructure(pTaskHandle, &pstCurrentTask);
	ERRIFGOTO(result, _EXIT);

	result = UCThreadMutex_Lock(pstCurrentTask->hMutex);
	ERRIFGOTO(result, _EXIT);

	result = UKCPUGeneralTaskManagerCB_GetLoopIndex(pTaskHandle, &nCurLoopIndex);
	ERRIFGOTO(result, _EXIT_LOCK);

	nCurIteration = pstController->stCommon.nCurrentIteration;
	pstIntermediateGraph = pstCurrentTask->pstParentGraph;

	while(pstIntermediateGraph->pstParentTask != NULL && pstParentTaskGraph != pstIntermediateGraph)
	{
		if(pstIntermediateGraph->enControllerType == CONTROLLER_TYPE_DYNAMIC_DATA_LOOP ||
			pstIntermediateGraph->enControllerType == CONTROLLER_TYPE_DYNAMIC_CONVERGENT_LOOP)
		{
			pstIntermediateController = (SLoopController *) pstIntermediateGraph->pController;
			nCurIteration = nCurIteration * pstIntermediateController->pstLoopInfo->nLoopCount;
		}

		pstIntermediateGraph = pstIntermediateGraph->pstParentTask->pstParentGraph;
	}

	result = UKTask_GetTaskIteration(pstCurrentTask, &nTaskIterationNumber);
	ERRIFGOTO(result, _EXIT_LOCK);

	if(nCurLoopIndex < nCurIteration * nTaskIterationNumber)
	{
		if(pstCurrentTask->nCurIteration * nTaskIterationNumber == nCurLoopIndex)
		{
			pstCurrentTask->nCurIteration = nCurIteration * nTaskIterationNumber;	
		}
		nCurLoopIndex = nCurIteration * nTaskIterationNumber;
	}

	result = UKCPUGeneralTaskManagerCB_SetLoopIndex(pTaskHandle, nCurLoopIndex);
	ERRIFGOTO(result, _EXIT_LOCK);

	result = ERR_UEM_NOERROR;
_EXIT_LOCK:
	UCThreadMutex_Unlock(pstCurrentTask->hMutex);
_EXIT:
	return result;
}

uem_result UKLoopModelController_HandleConvergentLoopDuringStopping(STaskGraph *pstGraph, void *pCurrentTaskHandle, void *pCurrentThreadHandle)
{
	uem_result result = ERR_UEM_UNKNOWN;
	STask *pstCurrentTask = NULL;
	STask *pstParentTask = NULL;
	int nLoopCount = 0;
	int nCurIteration = 0;
	SLoopController *pstController = NULL;

	pstController = (SLoopController *) pstGraph->pController;
	pstParentTask = pstGraph->pstParentTask;

	result = UKCPUGeneralTaskManagerCB_GetCurrentTaskStructure(pCurrentTaskHandle, &pstCurrentTask);
	ERRIFGOTO(result, _EXIT);

	if(pstController->pstLoopInfo->enType == LOOP_TYPE_CONVERGENT && pstController->pstLoopInfo->nDesignatedTaskId == pstCurrentTask->nTaskId)
	{
		if(pstController->pstLoopInfo->bDesignatedTaskState == TRUE)
		{
			result = updateLoopIterationHistory(pstGraph, pstCurrentTask);
			ERRIFGOTO(result, _EXIT);

			nCurIteration = pstController->stCommon.nCurrentIteration;
			nLoopCount = pstController->pstLoopInfo->nLoopCount;
			pstController->stCommon.nCurrentIteration = nCurIteration - (nCurIteration % nLoopCount) + nLoopCount;

			pstController->pstLoopInfo->bDesignatedTaskState = FALSE;
		}
		else
		{
			pstController->stCommon.nCurrentIteration++;
		}
	}

	result = setLoopTaskCurrentIteration(pstCurrentTask, pstParentTask);
	ERRIFGOTO(result, _EXIT);

	if(pstCurrentTask->nTargetIteration > 0 && pstCurrentTask->nCurIteration >= pstCurrentTask->nTargetIteration)
	{
		UEMASSIGNGOTO(result, ERR_UEM_ALREADY_DONE, _EXIT);
	}

	result = ERR_UEM_NOERROR;
_EXIT:
	return result;
}


uem_result UKLoopModelController_HandleConvergentLoop(STaskGraph *pstGraph, void *pCurrentTaskHandle, void *pCurrentThreadHandle)
{
	uem_result result = ERR_UEM_UNKNOWN;
	uem_bool bFunctionCalled = FALSE;
	STask *pstCurrentTask = NULL;
	int nLoopIndex = 0;
	ECPUTaskState enState;
	uem_bool bActivated = FALSE;
	uem_bool bUpdated = FALSE;
	//uem_bool bNeedSuspended = TRUE;

	result = UKCPUGeneralTaskManagerCB_GetCurrentTaskStructure(pCurrentTaskHandle, &pstCurrentTask);
	ERRIFGOTO(result, _EXIT);

	result = UKCPUGeneralTaskManagerCB_GetFunctionCalled(pCurrentThreadHandle, &bFunctionCalled);
	ERRIFGOTO(result, _EXIT);

	result = updateLoopCurrentIterationFromHistory(pstGraph,&bUpdated);
	ERRIFGOTO(result, _EXIT);

	if(bFunctionCalled == TRUE)
	{
		//handle Loop Task and change TaskState if necessary.
		result = handleLoopTaskIteration(pstGraph, pCurrentTaskHandle, pCurrentThreadHandle, bUpdated, &bActivated);
		ERRIFGOTO(result, _EXIT);
	}

	result = setLoopTaskCurrentIteration(pstCurrentTask, pstGraph->pstParentTask);
	ERRIFGOTO(result, _EXIT);

	result = UKCPUGeneralTaskManagerCB_GetLoopIndex(pCurrentTaskHandle, &nLoopIndex);
	ERRIFGOTO(result, _EXIT);

	if(pstCurrentTask->nTargetIteration > 0 && pstCurrentTask->nCurIteration >= pstCurrentTask->nTargetIteration)
	{
		result = UKCPUGeneralTaskManagerCB_ChangeTaskState(pCurrentTaskHandle, TASK_STATE_STOP);
		ERRIFGOTO(result, _EXIT);
	}
	else if(compareIterationtoAllParentLoopTask(pstGraph, pstCurrentTask, nLoopIndex) == TRUE)
	{
		result = UKCPUGeneralTaskManagerCB_ChangeTaskState(pCurrentTaskHandle, TASK_STATE_SUSPEND);
		ERRIFGOTO(result, _EXIT);
	}

	result = UKCPUGeneralTaskManagerCB_GetCurrentTaskState(pCurrentTaskHandle, &enState);
	ERRIFGOTO(result, _EXIT);

	if(enState == TASK_STATE_RUNNING &&
		(pstCurrentTask->enRunCondition != RUN_CONDITION_TIME_DRIVEN ||
		(pstCurrentTask->enRunCondition == RUN_CONDITION_TIME_DRIVEN && bFunctionCalled == TRUE)))
	{
		result = updateTaskThreadIterationInConvergentLoop(pstGraph, pCurrentTaskHandle, pCurrentThreadHandle);
		ERRIFGOTO(result, _EXIT);
	}

	if(bActivated == TRUE)
	{
		result = ERR_UEM_FOUND_DATA;
	}
	else
	{
		result = ERR_UEM_NOERROR;
	}

_EXIT:
	return result;
}

