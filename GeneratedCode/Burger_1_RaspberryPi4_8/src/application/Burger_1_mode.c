#include "Burger_1_mode.h"
#include "Burger_1_port.h"
#include "semo_logger.h"

static VARIABLE_MAP variable_map_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN[] = {
    {&variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_area, &variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_area},
};
static VARIABLE_MAP variable_map_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN[] = {
    {&variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_area, &variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_area},
};

// DEFINE MODE SERVICE LIST
static SERVICE_ID service_list_of_Robot_REMOTE_CONTROL[2] = {
    ID_SERVICE_Robot_REMOTE_CONTROL_RemoteControl,
    ID_SERVICE_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator,
};
static SERVICE_ID service_list_of_Robot_SEARCH_GROUPING[1] = {
    ID_SERVICE_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator,
};
static SERVICE_ID service_list_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN[1] = {
    ID_SERVICE_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search,
};
static SERVICE_ID service_list_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN[1] = {
    ID_SERVICE_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search,
};

// DEFINE MODE
MODE mode_list[5] = {
    {
        ID_MODE_Robot_REMOTE_CONTROL, // MODE_ID mode_id
        SEMO_STOP, // SEMO_STATE state
        FALSE, // semo_int8 need_select_group
        -1, // GROUP_ID selected_group
        0, // semo_int32 variable_map_list_size
        NULL, // VARIABLE_MAP *variable_map_list
        2, // semo_int32 service_list_size
        service_list_of_Robot_REMOTE_CONTROL, // SERVICE_ID *service_list
        ID_GROUP_Robot // GROUP_ID group
    },
    {
        ID_MODE_Robot_SEARCH_GROUPING, // MODE_ID mode_id
        SEMO_STOP, // SEMO_STATE state
        TRUE, // semo_int8 need_select_group
        -1, // GROUP_ID selected_group
        0, // semo_int32 variable_map_list_size
        NULL, // VARIABLE_MAP *variable_map_list
        1, // semo_int32 service_list_size
        service_list_of_Robot_SEARCH_GROUPING, // SERVICE_ID *service_list
        ID_GROUP_Robot // GROUP_ID group
    },
    {
        ID_MODE_Robot_groupA_SEARCHIN_MODE_SEARCHIN, // MODE_ID mode_id
        SEMO_STOP, // SEMO_STATE state
        FALSE, // semo_int8 need_select_group
        -1, // GROUP_ID selected_group
        1, // semo_int32 variable_map_list_size
        variable_map_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN, // VARIABLE_MAP *variable_map_list
        1, // semo_int32 service_list_size
        service_list_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN, // SERVICE_ID *service_list
        ID_GROUP_Robot_groupA // GROUP_ID group
    },
    {
        ID_MODE_Robot_groupB_SEARCHIN_MODE_SEARCHIN, // MODE_ID mode_id
        SEMO_STOP, // SEMO_STATE state
        FALSE, // semo_int8 need_select_group
        -1, // GROUP_ID selected_group
        1, // semo_int32 variable_map_list_size
        variable_map_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN, // VARIABLE_MAP *variable_map_list
        1, // semo_int32 service_list_size
        service_list_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN, // SERVICE_ID *service_list
        ID_GROUP_Robot_groupB // GROUP_ID group
    },
    {
        ID_MODE_Robot_FINISH, // MODE_ID mode_id
        SEMO_STOP, // SEMO_STATE state
        FALSE, // semo_int8 need_select_group
        -1, // GROUP_ID selected_group
        0, // semo_int32 variable_map_list_size
        NULL, // VARIABLE_MAP *variable_map_list
        0, // semo_int32 service_list_size
        NULL, // SERVICE_ID *service_list
        ID_GROUP_Robot // GROUP_ID group
    },
};

void stop_mode(MODE_ID mode_id)
{
    SEMO_LOG_INFO("stop mode %d", mode_id);
    mode_list[mode_id].state = SEMO_STOP;
    for (int i = 0 ; i < mode_list[mode_id].service_list_size; i++)
    {
        stop_service(mode_list[mode_id].service_list[i]);
    }
    if (mode_list[mode_id].need_select_group == TRUE) {
        stop_selecting_group(mode_id, &mode_list[mode_id].selected_group);
    }
    set_group_state(mode_list[mode_id].group, SEMO_DECREASE);
    if (get_group_state(mode_list[mode_id].group) == 0) 
    {
        int dataLen;
        ((semo_int32 *)port_of_leader.variable->buffer)[0] = mode_list[mode_id].group;
        ((semo_int32 *)port_of_leader.variable->buffer)[1] = FALSE;
        UFPort_WriteToQueue(port_of_leader.port_id, (unsigned char *) port_of_leader.variable->buffer, port_of_leader.variable->size, 0, &dataLen);
    }
}

void run_mode(MODE_ID mode_id)
{
    int dataLen;
    SEMO_LOG_INFO("run mode %d", mode_id);
    mode_list[mode_id].state = SEMO_RUN;
    for (int i = 0 ; i < mode_list[mode_id].variable_map_list_size ; i++)
    {
        copy_variable(mode_list[mode_id].variable_map_list[i].src, mode_list[mode_id].variable_map_list[i].dst);
    }
    for (int i = 0 ; i < mode_list[mode_id].service_list_size; i++)
    {
        run_service(mode_list[mode_id].service_list[i], mode_list[mode_id].group);
    }
    if (mode_list[mode_id].need_select_group == TRUE) {
        register_group_selection(mode_id, &mode_list[mode_id].selected_group);
    }
    set_group_state(mode_list[mode_id].group, SEMO_INCREASE);
}
