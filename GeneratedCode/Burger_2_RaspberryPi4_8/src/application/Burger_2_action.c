#include "Burger_2_action.h"
#include "Burger_2_common.h"
#include "Burger_2_port.h"
#include "UFTask.h"
#include "UFTimer.h"
#include "UFControl.h"
#include "semo_logger.h"

#define LIBCALL(x, ...) LIBCALL_##x(__VA_ARGS__)
#define LIBCALL_group_action(f, ...) l_Burger_2_group_action_##f(__VA_ARGS__)                                                                                                                                     
#include "Burger_2_group_action.cicl.h"

// DEFINE ACTION RESOURCE LIST

// DEFINE ACTION TASK
ACTION_TASK action_task_list[5] = {
    {ID_ACTION_TASK_Burger_2_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl, // ACTION_TASK_ID action_task_id
     ID_ACTION_TYPE_remoteControl, // ACTION_TYPE_ID action_type_id
     0, // semo_int32 task_id
     "Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl", // char *task_name
     SEMO_RUN, // SEMO_STATE state
     FALSE, // semo_int8 return_immediate
     0, // semo_int32 resource_list_size 
     NULL, // RESOURCE_ID *resource_list
     0, // semo_int32 input_list_size
     NULL, // PORT *input_port_list
     0, // semo_int32 output_list_size
     NULL, // PORT *output_port_list
     FALSE, // semo_int8 is_group_action,
     0, // semo_int32 group_action_id,
     NULL}, // PORT *group_port
    {ID_ACTION_TASK_Burger_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand, // ACTION_TASK_ID action_task_id
     ID_ACTION_TYPE_getModeTransferCommand, // ACTION_TYPE_ID action_type_id
     1, // semo_int32 task_id
     "Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand", // char *task_name
     SEMO_RUN, // SEMO_STATE state
     FALSE, // semo_int8 return_immediate
     0, // semo_int32 resource_list_size 
     NULL, // RESOURCE_ID *resource_list
     0, // semo_int32 input_list_size
     NULL, // PORT *input_port_list
     1, // semo_int32 output_list_size
     output_port_of_Burger_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand, // PORT *output_port_list
     FALSE, // semo_int8 is_group_action,
     1, // semo_int32 group_action_id,
     NULL}, // PORT *group_port
    {ID_ACTION_TASK_Burger_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand, // ACTION_TASK_ID action_task_id
     ID_ACTION_TYPE_getModeTransferCommand, // ACTION_TYPE_ID action_type_id
     2, // semo_int32 task_id
     "Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand", // char *task_name
     SEMO_RUN, // SEMO_STATE state
     FALSE, // semo_int8 return_immediate
     0, // semo_int32 resource_list_size 
     NULL, // RESOURCE_ID *resource_list
     0, // semo_int32 input_list_size
     NULL, // PORT *input_port_list
     1, // semo_int32 output_list_size
     output_port_of_Burger_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand, // PORT *output_port_list
     FALSE, // semo_int8 is_group_action,
     2, // semo_int32 group_action_id,
     NULL}, // PORT *group_port
    {ID_ACTION_TASK_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // ACTION_TASK_ID action_task_id
     ID_ACTION_TYPE_searchV3, // ACTION_TYPE_ID action_type_id
     39, // semo_int32 task_id
     "Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // char *task_name
     SEMO_RUN, // SEMO_STATE state
     FALSE, // semo_int8 return_immediate
     0, // semo_int32 resource_list_size 
     NULL, // RESOURCE_ID *resource_list
     3, // semo_int32 input_list_size
     input_port_of_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // PORT *input_port_list
     1, // semo_int32 output_list_size
     output_port_of_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // PORT *output_port_list
     TRUE, // semo_int8 is_group_action,
     3, // semo_int32 group_action_id,
     &group_port_of_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3}, // PORT *group_port
    {ID_ACTION_TASK_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // ACTION_TASK_ID action_task_id
     ID_ACTION_TYPE_searchV3, // ACTION_TYPE_ID action_type_id
     43, // semo_int32 task_id
     "Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3", // char *task_name
     SEMO_RUN, // SEMO_STATE state
     FALSE, // semo_int8 return_immediate
     0, // semo_int32 resource_list_size 
     NULL, // RESOURCE_ID *resource_list
     3, // semo_int32 input_list_size
     input_port_of_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // PORT *input_port_list
     1, // semo_int32 output_list_size
     output_port_of_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3, // PORT *output_port_list
     TRUE, // semo_int8 is_group_action,
     4, // semo_int32 group_action_id,
     &group_port_of_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3}, // PORT *group_port
};

semo_int8 check_group_action_task(ACTION_TASK *action)
{
    semo_int64 cur_time = 0;
    UFTimer_GetCurrentTime(CONTROL_TASK_ID, &cur_time);
    if (action->state == SEMO_STOP)
    {
        LIBCALL(group_action, set_group_action_control, action->group_action_id, TRUE, cur_time);
        action->state = SEMO_READY;
    } 
    else if (action->state == SEMO_READY) 
    {
        LIBCALL(group_action, set_robot_id_control, action->group_action_id);
        return LIBCALL(group_action, get_group_action_control, action->group_action_id, cur_time);
    }
    return FALSE;
}

void run_action_task(semo_int32 action_task_id)
{
    if (action_task_list[action_task_id].state != SEMO_RUN)
    {
        int dataLen = 0;
        ACTION_TASK *action = action_task_list + action_task_id;
        int run = TRUE;
        if (action->state == SEMO_STOP)
        {
            SEMO_LOG_DEBUG("run action task id %d name %s", action_task_id, action->task_name);
        }
        for (int port_index = 0 ; port_index < action->input_list_size ; port_index++)
        {
            fill_buffer_from_elements(action->input_port_list[port_index].variable);
            UFPort_WriteToBuffer(action->input_port_list[port_index].port_id, (unsigned char*) action->input_port_list[port_index].variable->buffer, action->input_port_list[port_index].variable->size, 0, &dataLen);
        }
        for (int resource_index = 0 ; resource_index < action->resource_list_size ; resource_index++)
        {
            resource_list[action->resource_list[resource_index]].action_id_list[resource_list[action->resource_list[resource_index]].reference_count] = action->action_task_id;
            resource_list[action->resource_list[resource_index]].reference_count += 1;
        } 
        if (action->is_group_action == TRUE)
        {
            run = check_group_action_task(action);
        }
        if (run == TRUE)
        {
            action->state = SEMO_RUN;
            UFControl_RunTask(CONTROL_TASK_ID, action->task_name);
        }
    }
}

void wrapup_group_action(ACTION_TASK *action)
{
    semo_int64 cur_time = 0;
    LIBCALL(group_action, set_group_action_control, action->group_action_id, FALSE, cur_time);
}

void stop_action_task(semo_int32 action_task_id)
{
    if (action_task_list[action_task_id].state != SEMO_STOP)
    {
        int dataLen = 0;
        ACTION_TASK *action = action_task_list + action_task_id;
        SEMO_LOG_DEBUG("stop action task %d name %s", action_task_id, action->task_name);
        UFControl_StopTask(CONTROL_TASK_ID, action->task_name, FALSE);
        for (int port_index = 0 ; port_index < action->output_list_size ; port_index++)
        {
            uem_result result = UFPort_GetNumOfAvailableData(action->output_port_list[port_index].port_id, 0, &dataLen);
            ERRIFGOTO(result, _EXIT);
            if (dataLen > 0)
            {
                UFPort_ReadFromQueue(action->output_port_list[port_index].port_id, (unsigned char*) action->output_port_list[port_index].variable->buffer, action->output_port_list[port_index].variable->size, 0, &dataLen);
                fill_elements_from_buffer(action->output_port_list[port_index].variable);
            }
        }
        for (int resource_index = 0 ; resource_index < action->resource_list_size ; resource_index++)
        {
            int removed = FALSE;
            for (int resource_action_index = 0 ; resource_action_index < resource_list[action->resource_list[resource_index]].reference_count ; resource_action_index++) 
            {
                if (removed == TRUE) 
                {
                    resource_list[action->resource_list[resource_index]].action_id_list[resource_action_index-1] = resource_list[action->resource_list[resource_index]].action_id_list[resource_action_index];
                }
                if (resource_list[action->resource_list[resource_index]].action_id_list[resource_action_index] == action->action_task_id)
                {
                    removed = TRUE;
                }
            }
            resource_list[action->resource_list[resource_index]].reference_count -= 1;
        } 
        if (action->is_group_action == TRUE)
        {
            wrapup_group_action(action);
        }
        action->state = SEMO_STOP;
    }
_EXIT:
    return;
}

void action_init()
{
    SEMO_LOG_INFO("action init");
    for (int i = 0 ; i < 5 ; i++)
    {
        stop_action_task(i);
    }
}

ACTION_TASK* get_action_task(semo_int32 list_size, ACTION_TASK_ID *candidate_task_list)
{
    return action_task_list + candidate_task_list[0];
}

void action_task_state_polling()
{
    for (int i = 0 ; i < 5 ; i++)
    {
        if (action_task_list[i].state == SEMO_WRAPUP)
        {
            stop_action_task(action_task_list[i].action_task_id);
        }
        else if (action_task_list[i].state == SEMO_RUN)
        {
            ETaskState state;
            UFTask_GetState(CONTROL_TASK_ID, action_task_list[i].task_name, &state);
            if (state == STATE_END )
            {
                action_task_list[i].state = SEMO_WRAPUP;
            }
            else if (state == STATE_STOP)
            {
                action_task_list[i].state = SEMO_STOP;
            }
        }
    }
}