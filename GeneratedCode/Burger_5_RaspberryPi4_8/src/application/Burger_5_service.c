#include "Burger_5_common.h"
#include "Burger_5_service.h"
#include "Burger_5_action.h"
#include "Burger_5_port.h"
#include "Burger_5_event.h"
#include "Burger_5_variable.h"
#include "Burger_5_timer.h"
#include "semo_logger.h"
#include "UFControl.h"

typedef void (*SERVICE_EXECUTION_FUNC)(int service_index);

typedef struct _ACTION_MAP {
    ACTION_TYPE_ID action_type_id;
    semo_int32 action_task_list_size;
    ACTION_TASK_ID *action_task_list;
} ACTION_MAP;

typedef struct _SERVICE {
    SERVICE_ID service_id;
    SEMO_STATE state;
    semo_int32 current_statement_id;
    semo_int32 action_list_size;
    ACTION_MAP *action_list;
    SERVICE_EXECUTION_FUNC execution_func;
    GROUP_ID group;
} SERVICE;

// DECLARE SERVICE EXECUTION FUNCTION
static void execute_service_Robot_REMOTE_CONTROL_RemoteControl();
static void execute_service_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator();
static void execute_service_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator();
static void execute_service_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search();
static void execute_service_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search();

// DEFINE ACTION TASK LIST FOR EACH SERVICE ACTION TYPE
static ACTION_TASK_ID action_task_list_Robot_REMOTE_CONTROL_RemoteControl_remoteControl[] = {
    ID_ACTION_TASK_Burger_5_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl,
};
static ACTION_TASK_ID action_task_list_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_getModeTransferCommand[] = {
    ID_ACTION_TASK_Burger_5_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand,
};
static ACTION_TASK_ID action_task_list_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_getModeTransferCommand[] = {
    ID_ACTION_TASK_Burger_5_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand,
};
static ACTION_TASK_ID action_task_list_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3[] = {
    ID_ACTION_TASK_Burger_5_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3,
};
static ACTION_TASK_ID action_task_list_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3[] = {
    ID_ACTION_TASK_Burger_5_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3,
};


// DEFINE SERVICE ACTION LIST
static ACTION_MAP action_list_of_Robot_REMOTE_CONTROL_RemoteControl[1] = {
    {ID_ACTION_TYPE_remoteControl, 1, action_task_list_Robot_REMOTE_CONTROL_RemoteControl_remoteControl},
};
static ACTION_MAP action_list_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator[1] = {
    {ID_ACTION_TYPE_getModeTransferCommand, 1, action_task_list_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_getModeTransferCommand},
};
static ACTION_MAP action_list_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator[1] = {
    {ID_ACTION_TYPE_getModeTransferCommand, 1, action_task_list_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_getModeTransferCommand},
};
static ACTION_MAP action_list_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search[1] = {
    {ID_ACTION_TYPE_searchV3, 1, action_task_list_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3},
};
static ACTION_MAP action_list_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search[1] = {
    {ID_ACTION_TYPE_searchV3, 1, action_task_list_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3},
};

// DEFINE SERVICE
static SERVICE service_list[5] = {
    {ID_SERVICE_Robot_REMOTE_CONTROL_RemoteControl, SEMO_STOP, 0, 1, 
    action_list_of_Robot_REMOTE_CONTROL_RemoteControl, execute_service_Robot_REMOTE_CONTROL_RemoteControl, -1},
    {ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator, SEMO_STOP, 0, 1, 
    action_list_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator, execute_service_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator, -1},
    {ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator, SEMO_STOP, 0, 1, 
    action_list_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator, execute_service_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator, -1},
    {ID_SERVICE_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search, SEMO_STOP, 0, 1, 
    action_list_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search, execute_service_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search, -1},
    {ID_SERVICE_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search, SEMO_STOP, 0, 1, 
    action_list_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search, execute_service_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search, -1},
};

// SERVICE STATE DEFINE
typedef enum _SERVICE_Robot_REMOTE_CONTROL_RemoteControl {
    ID_STATEMENT_Robot_REMOTE_CONTROL_RemoteControl_0,
    ID_STATEMENT_Robot_REMOTE_CONTROL_RemoteControl_1,
} SERVICE_Robot_REMOTE_CONTROL_RemoteControl;
typedef enum _SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator {
    ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_0,
    ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_1,
    ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_2,
    ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_3,
    ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_4,
    ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_5,
    ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_6,
    ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_7,
} SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator;
typedef enum _SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator {
    ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_0,
    ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_1,
    ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_2,
    ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_3,
    ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_4,
    ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_5,
    ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_6,
    ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_7,
} SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator;
typedef enum _SERVICE_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search {
    ID_STATEMENT_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_0,
    ID_STATEMENT_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1,
    ID_STATEMENT_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_2,
    ID_STATEMENT_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_3,
} SERVICE_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search;
typedef enum _SERVICE_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search {
    ID_STATEMENT_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_0,
    ID_STATEMENT_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1,
    ID_STATEMENT_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_2,
    ID_STATEMENT_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_3,
} SERVICE_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search;

void stop_service(SERVICE_ID service_id)
{
    SEMO_LOG_INFO("stop service %d", service_id);
    service_list[service_id].state = SEMO_STOP;
    for (int i = 0 ; i < service_list[service_id].action_list_size ; i++)
    {
        for (int j = 0 ; j < service_list[service_id].action_list[i].action_task_list_size ; j++)
        {
            semo_int32 action_task_id = service_list[service_id].action_list[i].action_task_list[j];
            if (action_task_list[action_task_id].state == SEMO_RUN)
            {
                stop_action_task(action_task_id);
            }
        }
    }
    remove_all_service_timer(service_id);
}

void run_service(SERVICE_ID service_id, GROUP_ID group)
{
    SEMO_LOG_INFO("run service %d", service_id);
    service_list[service_id].state = SEMO_RUN;
    service_list[service_id].current_statement_id = 0;
    service_list[service_id].group = group;
}

void service_init() {
    SEMO_LOG_INFO("service init");
    for(int i = 0 ; i < 5 ; i++)
    {
        service_list[i].state = SEMO_STOP;
        service_list[i].current_statement_id = 0;
    }
}

void execute_service() 
{
    for(int i = 0 ; i < 5 ; i++)
    {
        if (service_list[i].state == SEMO_RUN)
        {
            service_list[i].execution_func(i);
        }
    }
}

static ACTION_MAP* get_action_map(SERVICE *service, ACTION_TYPE_ID action_type_id)
{
    for (int i = 0 ; i < service->action_list_size ; i++)
    {
        if (service->action_list[i].action_type_id == action_type_id)
        {
            return &service->action_list[i];
        }
    }
    return NULL;
}

static void execute_service_Robot_REMOTE_CONTROL_RemoteControl(int service_index) {
	switch (service_list[ID_SERVICE_Robot_REMOTE_CONTROL_RemoteControl].current_statement_id)
	{
        case ID_STATEMENT_Robot_REMOTE_CONTROL_RemoteControl_0: 
        {
            ACTION_MAP *action_map = get_action_map(&service_list[service_index], ID_ACTION_TYPE_remoteControl);
            ACTION_TASK *action = get_action_task(action_map->action_task_list_size, action_map->action_task_list);
            uem_result result;  
            int dataLen;
            int dataNum = 0;
            
            if (action->state == SEMO_STOP || action->state == SEMO_READY) 
            {
                if (action->state == SEMO_STOP)
                {
                    semo_int8 resource_conflict = FALSE;
                    for(int resource_index = 0 ; resource_index < action->resource_list_size ; resource_index++)
                    {
                        RESOURCE *resource = resource_list + action->resource_list[resource_index];
                        if (resource->reference_count > 0 && resource->conflict == TRUE)
                        {
                            action_task_list[resource->action_id_list[0]].state = SEMO_WRAPUP;
                            resource_conflict = TRUE;
                        }
                    }
            	    if (resource_conflict == TRUE)
                    {
                    	break;
                    }
                    if (action->group_port != NULL) 
                    {
                        UFPort_WriteToBuffer(action->group_port->port_id, (unsigned char*) &service_list[service_index].group, sizeof(GROUP_ID), 0, &dataLen);
                    }
                }
                run_action_task(action->action_task_id);
            }
            if (action->return_immediate == TRUE || action->state == SEMO_WRAPUP || action->state == SEMO_STOP)
            {
                service_list[ID_SERVICE_Robot_REMOTE_CONTROL_RemoteControl].current_statement_id = ID_STATEMENT_Robot_REMOTE_CONTROL_RemoteControl_1;
                if(action->return_immediate != TRUE)
                {
                    stop_action_task(action->action_task_id);
                }
            }

			break;
		}
        case ID_STATEMENT_Robot_REMOTE_CONTROL_RemoteControl_1: 
        {

			break;
		}
	}
_EXIT:
    return;
}

static void execute_service_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator(int service_index) {
	switch (service_list[ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator].current_statement_id)
	{
        case ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_0: 
        {
            ACTION_MAP *action_map = get_action_map(&service_list[service_index], ID_ACTION_TYPE_getModeTransferCommand);
            ACTION_TASK *action = get_action_task(action_map->action_task_list_size, action_map->action_task_list);
            uem_result result;  
            int dataLen;
            int dataNum = 0;
            
            if (action->state == SEMO_STOP || action->state == SEMO_READY) 
            {
                if (action->state == SEMO_STOP)
                {
                    semo_int8 resource_conflict = FALSE;
                    for(int resource_index = 0 ; resource_index < action->resource_list_size ; resource_index++)
                    {
                        RESOURCE *resource = resource_list + action->resource_list[resource_index];
                        if (resource->reference_count > 0 && resource->conflict == TRUE)
                        {
                            action_task_list[resource->action_id_list[0]].state = SEMO_WRAPUP;
                            resource_conflict = TRUE;
                        }
                    }
            	    if (resource_conflict == TRUE)
                    {
                    	break;
                    }
                    if (action->group_port != NULL) 
                    {
                        UFPort_WriteToBuffer(action->group_port->port_id, (unsigned char*) &service_list[service_index].group, sizeof(GROUP_ID), 0, &dataLen);
                    }
                }
                run_action_task(action->action_task_id);
            }
        	result = UFPort_GetNumOfAvailableData(action->output_port_list[0].port_id, 0, &dataNum);
            ERRIFGOTO(result, _EXIT);
            if (action->return_immediate == TRUE || action->state == SEMO_WRAPUP || action->state == SEMO_STOP || dataNum > 0)
            {
                service_list[ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_1;
                if(action->return_immediate != TRUE)
                {
                    stop_action_task(action->action_task_id);
                }
            }

			break;
		}
        case ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_1: 
        {
            VARIABLE *leftVariable = &variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_cmd;
            VARIABLE *rightVariable = &variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_1_0;
            fill_buffer_from_elements(leftVariable);
            fill_buffer_from_elements(rightVariable);
	        if (compare_variable(leftVariable, rightVariable) == TRUE)
	        {
                service_list[ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_2;
            }
            else
            {
                service_list[ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_3;
            }

			break;
		}
        case ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_2: 
        {
            int dataLen;
            semo_int32 event = ID_EVENT_RC;
            event_list[event] = TRUE;
            event_occured = TRUE;
            SEMO_LOG_INFO("Event %d occured", event);
            service_list[ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_7;

			break;
		}
        case ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_3: 
        {
            VARIABLE *leftVariable = &variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_cmd;
            VARIABLE *rightVariable = &variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_3_0;
            fill_buffer_from_elements(leftVariable);
            fill_buffer_from_elements(rightVariable);
	        if (compare_variable(leftVariable, rightVariable) == TRUE)
	        {
                service_list[ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_4;
            }
            else
            {
                service_list[ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_5;
            }

			break;
		}
        case ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_4: 
        {
            int dataLen;
            semo_int32 event = ID_EVENT_START;
            event_list[event] = TRUE;
            event_occured = TRUE;
            SEMO_LOG_INFO("Event %d occured", event);
            service_list[ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_7;

			break;
		}
        case ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_5: 
        {
            VARIABLE *leftVariable = &variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_cmd;
            VARIABLE *rightVariable = &variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_5_0;
            fill_buffer_from_elements(leftVariable);
            fill_buffer_from_elements(rightVariable);
	        if (compare_variable(leftVariable, rightVariable) == TRUE)
	        {
                service_list[ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_6;
            }
            else
            {
                service_list[ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_7;
            }

			break;
		}
        case ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_6: 
        {
            int dataLen;
            semo_int32 event = ID_EVENT_FINISH;
            event_list[event] = TRUE;
            event_occured = TRUE;
            SEMO_LOG_INFO("Event %d occured", event);
            service_list[ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_7;

			break;
		}
        case ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_7: 
        {
	        	TIMER *timer = get_timer(ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator, ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_7);
	            if(timer == NULL || timer_check(timer) == TRUE) 
                {
                    remove_timer(timer);
                    new_timer(200, "MS", ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator, ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_7);
                    service_list[ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_0;
                }

			break;
		}
	}
_EXIT:
    return;
}

static void execute_service_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator(int service_index) {
	switch (service_list[ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator].current_statement_id)
	{
        case ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_0: 
        {
            ACTION_MAP *action_map = get_action_map(&service_list[service_index], ID_ACTION_TYPE_getModeTransferCommand);
            ACTION_TASK *action = get_action_task(action_map->action_task_list_size, action_map->action_task_list);
            uem_result result;  
            int dataLen;
            int dataNum = 0;
            
            if (action->state == SEMO_STOP || action->state == SEMO_READY) 
            {
                if (action->state == SEMO_STOP)
                {
                    semo_int8 resource_conflict = FALSE;
                    for(int resource_index = 0 ; resource_index < action->resource_list_size ; resource_index++)
                    {
                        RESOURCE *resource = resource_list + action->resource_list[resource_index];
                        if (resource->reference_count > 0 && resource->conflict == TRUE)
                        {
                            action_task_list[resource->action_id_list[0]].state = SEMO_WRAPUP;
                            resource_conflict = TRUE;
                        }
                    }
            	    if (resource_conflict == TRUE)
                    {
                    	break;
                    }
                    if (action->group_port != NULL) 
                    {
                        UFPort_WriteToBuffer(action->group_port->port_id, (unsigned char*) &service_list[service_index].group, sizeof(GROUP_ID), 0, &dataLen);
                    }
                }
                run_action_task(action->action_task_id);
            }
        	result = UFPort_GetNumOfAvailableData(action->output_port_list[0].port_id, 0, &dataNum);
            ERRIFGOTO(result, _EXIT);
            if (action->return_immediate == TRUE || action->state == SEMO_WRAPUP || action->state == SEMO_STOP || dataNum > 0)
            {
                service_list[ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_1;
                if(action->return_immediate != TRUE)
                {
                    stop_action_task(action->action_task_id);
                }
            }

			break;
		}
        case ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_1: 
        {
            VARIABLE *leftVariable = &variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_cmd;
            VARIABLE *rightVariable = &variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_1_0;
            fill_buffer_from_elements(leftVariable);
            fill_buffer_from_elements(rightVariable);
	        if (compare_variable(leftVariable, rightVariable) == TRUE)
	        {
                service_list[ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_2;
            }
            else
            {
                service_list[ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_3;
            }

			break;
		}
        case ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_2: 
        {
            int dataLen;
            semo_int32 event = ID_EVENT_RC;
            event_list[event] = TRUE;
            event_occured = TRUE;
            SEMO_LOG_INFO("Event %d occured", event);
            service_list[ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_7;

			break;
		}
        case ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_3: 
        {
            VARIABLE *leftVariable = &variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_cmd;
            VARIABLE *rightVariable = &variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_3_0;
            fill_buffer_from_elements(leftVariable);
            fill_buffer_from_elements(rightVariable);
	        if (compare_variable(leftVariable, rightVariable) == TRUE)
	        {
                service_list[ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_4;
            }
            else
            {
                service_list[ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_5;
            }

			break;
		}
        case ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_4: 
        {
            int dataLen;
            semo_int32 event = ID_EVENT_START;
            event_list[event] = TRUE;
            event_occured = TRUE;
            SEMO_LOG_INFO("Event %d occured", event);
            service_list[ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_7;

			break;
		}
        case ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_5: 
        {
            VARIABLE *leftVariable = &variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_cmd;
            VARIABLE *rightVariable = &variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_5_0;
            fill_buffer_from_elements(leftVariable);
            fill_buffer_from_elements(rightVariable);
	        if (compare_variable(leftVariable, rightVariable) == TRUE)
	        {
                service_list[ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_6;
            }
            else
            {
                service_list[ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_7;
            }

			break;
		}
        case ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_6: 
        {
            int dataLen;
            semo_int32 event = ID_EVENT_FINISH;
            event_list[event] = TRUE;
            event_occured = TRUE;
            SEMO_LOG_INFO("Event %d occured", event);
            service_list[ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_7;

			break;
		}
        case ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_7: 
        {
	        	TIMER *timer = get_timer(ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator, ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_7);
	            if(timer == NULL || timer_check(timer) == TRUE) 
                {
                    remove_timer(timer);
                    new_timer(200, "MS", ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator, ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_7);
                    service_list[ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator].current_statement_id = ID_STATEMENT_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_0;
                }

			break;
		}
	}
_EXIT:
    return;
}

static void execute_service_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search(int service_index) {
	switch (service_list[ID_SERVICE_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search].current_statement_id)
	{
        case ID_STATEMENT_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_0: 
        {
            ACTION_MAP *action_map = get_action_map(&service_list[service_index], ID_ACTION_TYPE_searchV3);
            ACTION_TASK *action = get_action_task(action_map->action_task_list_size, action_map->action_task_list);
            uem_result result;  
            int dataLen;
            int dataNum = 0;
            
            if (action->state == SEMO_STOP || action->state == SEMO_READY) 
            {
                if (action->state == SEMO_STOP)
                {
                    semo_int8 resource_conflict = FALSE;
                    for(int resource_index = 0 ; resource_index < action->resource_list_size ; resource_index++)
                    {
                        RESOURCE *resource = resource_list + action->resource_list[resource_index];
                        if (resource->reference_count > 0 && resource->conflict == TRUE)
                        {
                            action_task_list[resource->action_id_list[0]].state = SEMO_WRAPUP;
                            resource_conflict = TRUE;
                        }
                    }
            	    if (resource_conflict == TRUE)
                    {
                    	break;
                    }
                    if (action->group_port != NULL) 
                    {
                        UFPort_WriteToBuffer(action->group_port->port_id, (unsigned char*) &service_list[service_index].group, sizeof(GROUP_ID), 0, &dataLen);
                    }
                }
                run_action_task(action->action_task_id);
            }
        	result = UFPort_GetNumOfAvailableData(action->output_port_list[0].port_id, 0, &dataNum);
            ERRIFGOTO(result, _EXIT);
            if (action->return_immediate == TRUE || action->state == SEMO_WRAPUP || action->state == SEMO_STOP || dataNum > 0)
            {
                service_list[ID_SERVICE_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search].current_statement_id = ID_STATEMENT_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1;
                if(action->return_immediate != TRUE)
                {
                    stop_action_task(action->action_task_id);
                }
            }

			break;
		}
        case ID_STATEMENT_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1: 
        {
            VARIABLE *leftVariable = &variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_isFound;
            VARIABLE *rightVariable = &variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1_0;
            fill_buffer_from_elements(leftVariable);
            fill_buffer_from_elements(rightVariable);
	        if (compare_variable(leftVariable, rightVariable) == TRUE)
	        {
                service_list[ID_SERVICE_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search].current_statement_id = ID_STATEMENT_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_2;
            }
            else
            {
                service_list[ID_SERVICE_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search].current_statement_id = ID_STATEMENT_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_3;
            }

			break;
		}
        case ID_STATEMENT_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_2: 
        {
            int dataLen;
            semo_int32 event = ID_EVENT_FINISH;
            event_list[event] = TRUE;
            event_occured = TRUE;
            SEMO_LOG_INFO("Event %d occured", event);
            UFPort_WriteToQueue(throw_out_port_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_2.port->port_id, (unsigned char*) &event, sizeof(semo_int32), 0, &dataLen);
            service_list[ID_SERVICE_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search].current_statement_id = ID_STATEMENT_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_3;

			break;
		}
        case ID_STATEMENT_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_3: 
        {

			break;
		}
	}
_EXIT:
    return;
}

static void execute_service_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search(int service_index) {
	switch (service_list[ID_SERVICE_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search].current_statement_id)
	{
        case ID_STATEMENT_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_0: 
        {
            ACTION_MAP *action_map = get_action_map(&service_list[service_index], ID_ACTION_TYPE_searchV3);
            ACTION_TASK *action = get_action_task(action_map->action_task_list_size, action_map->action_task_list);
            uem_result result;  
            int dataLen;
            int dataNum = 0;
            
            if (action->state == SEMO_STOP || action->state == SEMO_READY) 
            {
                if (action->state == SEMO_STOP)
                {
                    semo_int8 resource_conflict = FALSE;
                    for(int resource_index = 0 ; resource_index < action->resource_list_size ; resource_index++)
                    {
                        RESOURCE *resource = resource_list + action->resource_list[resource_index];
                        if (resource->reference_count > 0 && resource->conflict == TRUE)
                        {
                            action_task_list[resource->action_id_list[0]].state = SEMO_WRAPUP;
                            resource_conflict = TRUE;
                        }
                    }
            	    if (resource_conflict == TRUE)
                    {
                    	break;
                    }
                    if (action->group_port != NULL) 
                    {
                        UFPort_WriteToBuffer(action->group_port->port_id, (unsigned char*) &service_list[service_index].group, sizeof(GROUP_ID), 0, &dataLen);
                    }
                }
                run_action_task(action->action_task_id);
            }
        	result = UFPort_GetNumOfAvailableData(action->output_port_list[0].port_id, 0, &dataNum);
            ERRIFGOTO(result, _EXIT);
            if (action->return_immediate == TRUE || action->state == SEMO_WRAPUP || action->state == SEMO_STOP || dataNum > 0)
            {
                service_list[ID_SERVICE_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search].current_statement_id = ID_STATEMENT_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1;
                if(action->return_immediate != TRUE)
                {
                    stop_action_task(action->action_task_id);
                }
            }

			break;
		}
        case ID_STATEMENT_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1: 
        {
            VARIABLE *leftVariable = &variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_isFound;
            VARIABLE *rightVariable = &variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1_0;
            fill_buffer_from_elements(leftVariable);
            fill_buffer_from_elements(rightVariable);
	        if (compare_variable(leftVariable, rightVariable) == TRUE)
	        {
                service_list[ID_SERVICE_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search].current_statement_id = ID_STATEMENT_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_2;
            }
            else
            {
                service_list[ID_SERVICE_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search].current_statement_id = ID_STATEMENT_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_3;
            }

			break;
		}
        case ID_STATEMENT_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_2: 
        {
            int dataLen;
            semo_int32 event = ID_EVENT_FINISH;
            event_list[event] = TRUE;
            event_occured = TRUE;
            SEMO_LOG_INFO("Event %d occured", event);
            UFPort_WriteToQueue(throw_out_port_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_2.port->port_id, (unsigned char*) &event, sizeof(semo_int32), 0, &dataLen);
            service_list[ID_SERVICE_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search].current_statement_id = ID_STATEMENT_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_3;

			break;
		}
        case ID_STATEMENT_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_3: 
        {

			break;
		}
	}
_EXIT:
    return;
}

