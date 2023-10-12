#ifndef __Burger_3_ACTION_HEADER__
#define __Burger_3_ACTION_HEADER__

#include "semo_common.h"
#include "semo_port.h"
#include "Burger_3_resource.h"

typedef enum _ACTION_TASK_ID {
    ID_ACTION_TASK_Burger_3_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl,
    ID_ACTION_TASK_Burger_3_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand,
    ID_ACTION_TASK_Burger_3_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand,
    ID_ACTION_TASK_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3,
    ID_ACTION_TASK_Burger_3_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3,
} ACTION_TASK_ID;

typedef enum _ACTION_TYPE_ID {
    ID_ACTION_TYPE_searchV3,
    ID_ACTION_TYPE_remoteControl,
    ID_ACTION_TYPE_getModeTransferCommand,
} ACTION_TYPE_ID;

typedef struct _ACTION_TASK {
    ACTION_TASK_ID action_task_id;
    ACTION_TYPE_ID action_type_id;
    semo_int32 task_id;
    char *task_name;
    SEMO_STATE state;
    semo_int8 return_immediate;
    semo_int32 resource_list_size;
    RESOURCE_ID *resource_list;
    semo_int32 input_list_size;
    PORT *input_port_list;
    semo_int32 output_list_size;
    PORT *output_port_list;
    semo_int8 is_group_action;
    semo_int32 group_action_id;
    PORT *group_port;
} ACTION_TASK;

extern ACTION_TASK action_task_list[5];

void action_init();
ACTION_TASK* get_action_task(semo_int32 list_size, ACTION_TASK_ID *candidiate_task_list);
void action_task_state_polling();
void stop_action_task(semo_int32 action_id);
void run_action_task(semo_int32 action_id);

#endif