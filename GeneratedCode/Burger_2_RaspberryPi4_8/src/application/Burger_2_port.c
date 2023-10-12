#include "Burger_2_port.h"
#include "Burger_2_common.h"
#include "Burger_2_variable.h"
#include "Burger_2_group.h"
#include "Burger_2_team.h"
#include "semo_logger.h"

// ACTION TASK PORT DEFINE

PORT output_port_of_Burger_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand[1] = {
    {"Burger_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command", -1, &variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_cmd},
};
PORT output_port_of_Burger_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand[1] = {
    {"Burger_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_command", -1, &variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_cmd},
};
PORT input_port_of_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[3] = {
    {"Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area", -1, &variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_area},
    {"Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1", -1, &variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target1},
    {"Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2", -1, &variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target2},
};
PORT output_port_of_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[1] = {
    {"Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound", -1, &variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_isFound},
};
PORT group_port_of_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3 = {
    "Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group", -1, &variable_group
};
PORT input_port_of_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[3] = {
    {"Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_area", -1, &variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_area},
    {"Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target1", -1, &variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target1},
    {"Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_target2", -1, &variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target2},
};
PORT output_port_of_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[1] = {
    {"Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_isFound", -1, &variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_isFound},
};
PORT group_port_of_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3 = {
    "Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_group", -1, &variable_group
};

static PORT port_of_Burger_2_listen_ControlRobot_groupA_FINISH = {"Burger_2_listen_ControlRobot_groupA_FINISH", -1, NULL};
static PORT port_of_Burger_2_listen_ControlRobot_groupB_FINISH = {"Burger_2_listen_ControlRobot_groupB_FINISH", -1, NULL};
static PORT port_of_Burger_2_report_ControlRobot_groupA_FINISH = {"Burger_2_report_ControlRobot_groupA_FINISH", -1, NULL};
static PORT port_of_Burger_2_report_ControlRobot_groupB_FINISH = {"Burger_2_report_ControlRobot_groupB_FINISH", -1, NULL};


COMM_PORT throw_out_port_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_2 = {&port_of_Burger_2_report_ControlRobot_groupA_FINISH, NULL, 0};
COMM_PORT throw_out_port_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_2 = {&port_of_Burger_2_report_ControlRobot_groupB_FINISH, NULL, 0};

COMM_PORT throw_in_port_list[2] = {
{&port_of_Burger_2_listen_ControlRobot_groupA_FINISH, NULL, ID_GROUP_Robot_groupA},
{&port_of_Burger_2_listen_ControlRobot_groupB_FINISH, NULL, ID_GROUP_Robot_groupB},
};
semo_int32 throw_in_port_list_size = 2;

PORT port_of_leader = {"Burger_2_leader_group_state", -1, &variable_leader};

PORT port_of_grouping_mode = {"Burger_2_GA_DTA_mode", -1, &variable_grouping_mode};
PORT port_of_grouping_result = {"Burger_2_GA_DTA_result", -1, &variable_grouping_result};

COMM_PORT* get_team_port(COMM_PORT* port_list, semo_int32 port_list_size, semo_int32 team_id)
{
    for (semo_int32 i = 0; i < port_list_size; i++) 
    {
        if (port_list[i].team_id == team_id) 
        {
            return &port_list[i];
        }
    }
    return NULL;
}

static void action_port_init() {
    for (int i = 0 ; i < 1 ; i++)
    {
        UFPort_Initialize(CONTROL_TASK_ID, output_port_of_Burger_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand[i].port_name, &(output_port_of_Burger_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand[i].port_id));
    }
    for (int i = 0 ; i < 1 ; i++)
    {
        UFPort_Initialize(CONTROL_TASK_ID, output_port_of_Burger_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand[i].port_name, &(output_port_of_Burger_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand[i].port_id));
    }
    for (int i = 0 ; i < 3 ; i++)
    {
        UFPort_Initialize(CONTROL_TASK_ID, input_port_of_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[i].port_name, &(input_port_of_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[i].port_id));
    }
    for (int i = 0 ; i < 1 ; i++)
    {
        UFPort_Initialize(CONTROL_TASK_ID, output_port_of_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[i].port_name, &(output_port_of_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[i].port_id));
    }
    UFPort_Initialize(CONTROL_TASK_ID, group_port_of_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3.port_name, &(group_port_of_Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3.port_id));
    for (int i = 0 ; i < 3 ; i++)
    {
        UFPort_Initialize(CONTROL_TASK_ID, input_port_of_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[i].port_name, &(input_port_of_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[i].port_id));
    }
    for (int i = 0 ; i < 1 ; i++)
    {
        UFPort_Initialize(CONTROL_TASK_ID, output_port_of_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[i].port_name, &(output_port_of_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3[i].port_id));
    }
    UFPort_Initialize(CONTROL_TASK_ID, group_port_of_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3.port_name, &(group_port_of_Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3.port_id));
}

static void comm_port_init() {
    UFPort_Initialize(CONTROL_TASK_ID, port_of_Burger_2_listen_ControlRobot_groupA_FINISH.port_name, &(port_of_Burger_2_listen_ControlRobot_groupA_FINISH.port_id));
    UFPort_Initialize(CONTROL_TASK_ID, port_of_Burger_2_listen_ControlRobot_groupB_FINISH.port_name, &(port_of_Burger_2_listen_ControlRobot_groupB_FINISH.port_id));
    UFPort_Initialize(CONTROL_TASK_ID, port_of_Burger_2_report_ControlRobot_groupA_FINISH.port_name, &(port_of_Burger_2_report_ControlRobot_groupA_FINISH.port_id));
    UFPort_Initialize(CONTROL_TASK_ID, port_of_Burger_2_report_ControlRobot_groupB_FINISH.port_name, &(port_of_Burger_2_report_ControlRobot_groupB_FINISH.port_id));
}

static void additional_port_init() {
    UFPort_Initialize(CONTROL_TASK_ID, port_of_leader.port_name, &(port_of_leader.port_id));
    UFPort_Initialize(CONTROL_TASK_ID, port_of_grouping_mode.port_name, &(port_of_grouping_mode.port_id));
    UFPort_Initialize(CONTROL_TASK_ID, port_of_grouping_result.port_name, &(port_of_grouping_result.port_id));
}

void port_init() {
    SEMO_LOG_INFO("port init");
    action_port_init();
    comm_port_init();
    additional_port_init();
}