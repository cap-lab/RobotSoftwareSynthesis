#include "Burger_3_variable.h"
#include "Burger_3_team.h"
#include "semo_common.h"

// VARIABLE BUFFER DEFINE
VARIABLE_TYPE_area variable_buffer_of_Robot_groupA_SEARCHIN_area[1] = {SEMO_ENUM_R1};
VARIABLE_TYPE_area variable_buffer_of_Robot_groupB_SEARCHIN_area[1] = {SEMO_ENUM_R2};
VARIABLE_TYPE_area variable_buffer_of_Robot_SEARCH_GROUPING_Robot_groupA_SEARCHIN_0[1] = {SEMO_ENUM_R1};
VARIABLE_TYPE_area variable_buffer_of_Robot_SEARCH_GROUPING_Robot_groupB_SEARCHIN_0[1] = {SEMO_ENUM_R2};
VARIABLE_TYPE_area variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_area[1] = {SEMO_ENUM_R1};
VARIABLE_TYPE_target variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1[1] = {SEMO_ENUM_YELLOW};
VARIABLE_TYPE_target variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_2[1] = {SEMO_ENUM_RED};
VARIABLE_TYPE_area variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_area[1] = {SEMO_ENUM_R2};
VARIABLE_TYPE_target variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1[1] = {SEMO_ENUM_YELLOW};
VARIABLE_TYPE_target variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_2[1] = {SEMO_ENUM_RED};
VARIABLE_TYPE_cmd variable_buffer_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_cmd[1];
VARIABLE_TYPE_cmd variable_buffer_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_1_0[1] = {SEMO_ENUM_RC};
VARIABLE_TYPE_cmd variable_buffer_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_3_0[1] = {SEMO_ENUM_START};
VARIABLE_TYPE_cmd variable_buffer_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_5_0[1] = {SEMO_ENUM_FINISH};
VARIABLE_TYPE_cmd variable_buffer_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_cmd[1];
VARIABLE_TYPE_cmd variable_buffer_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_1_0[1] = {SEMO_ENUM_RC};
VARIABLE_TYPE_cmd variable_buffer_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_3_0[1] = {SEMO_ENUM_START};
VARIABLE_TYPE_cmd variable_buffer_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_5_0[1] = {SEMO_ENUM_FINISH};
VARIABLE_TYPE_area variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_area[1] = {SEMO_ENUM_R1};
VARIABLE_TYPE_target variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target1[1] = {SEMO_ENUM_YELLOW};
VARIABLE_TYPE_target variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target2[1] = {SEMO_ENUM_RED};
VARIABLE_TYPE_isFound variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_isFound[1];
VARIABLE_TYPE_isFound variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1_0[1] = {SEMO_ENUM_TRUE};
VARIABLE_TYPE_area variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_area[1] = {SEMO_ENUM_R2};
VARIABLE_TYPE_target variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target1[1] = {SEMO_ENUM_YELLOW};
VARIABLE_TYPE_target variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target2[1] = {SEMO_ENUM_RED};
VARIABLE_TYPE_isFound variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_isFound[1];
VARIABLE_TYPE_isFound variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1_0[1] = {SEMO_ENUM_TRUE};
semo_int32 variable_buffer_of_leader[2];
semo_int32 variable_buffer_of_group[1];
semo_int32 variable_buffer_of_grouping_mode[1];
semo_int32 variable_buffer_of_grouping_result[1];

// VARIABLE RELATION DEFINE
void *variable_relation_of_Robot_groupA_SEARCHIN_area[1] = {
    variable_buffer_of_Robot_groupA_SEARCHIN_area,
};
void *variable_relation_of_Robot_groupB_SEARCHIN_area[1] = {
    variable_buffer_of_Robot_groupB_SEARCHIN_area,
};
void *variable_relation_of_Robot_SEARCH_GROUPING_Robot_groupA_SEARCHIN_0[1] = {
    variable_buffer_of_Robot_SEARCH_GROUPING_Robot_groupA_SEARCHIN_0,
};
void *variable_relation_of_Robot_SEARCH_GROUPING_Robot_groupB_SEARCHIN_0[1] = {
    variable_buffer_of_Robot_SEARCH_GROUPING_Robot_groupB_SEARCHIN_0,
};
void *variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_area[1] = {
    variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_area,
};
void *variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1[1] = {
    variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1,
};
void *variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_2[1] = {
    variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_2,
};
void *variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_area[1] = {
    variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_area,
};
void *variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1[1] = {
    variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1,
};
void *variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_2[1] = {
    variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_2,
};
void *variable_relation_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_cmd[1] = {
    variable_buffer_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_cmd,
};
void *variable_relation_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_1_0[1] = {
    variable_buffer_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_1_0,
};
void *variable_relation_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_3_0[1] = {
    variable_buffer_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_3_0,
};
void *variable_relation_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_5_0[1] = {
    variable_buffer_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_5_0,
};
void *variable_relation_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_cmd[1] = {
    variable_buffer_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_cmd,
};
void *variable_relation_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_1_0[1] = {
    variable_buffer_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_1_0,
};
void *variable_relation_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_3_0[1] = {
    variable_buffer_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_3_0,
};
void *variable_relation_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_5_0[1] = {
    variable_buffer_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_5_0,
};
void *variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_area[1] = {
    variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_area,
};
void *variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target1[1] = {
    variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target1,
};
void *variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target2[1] = {
    variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target2,
};
void *variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_isFound[1] = {
    variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_isFound,
};
void *variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1_0[1] = {
    variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1_0,
};
void *variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_area[1] = {
    variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_area,
};
void *variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target1[1] = {
    variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target1,
};
void *variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target2[1] = {
    variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target2,
};
void *variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_isFound[1] = {
    variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_isFound,
};
void *variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1_0[1] = {
    variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1_0,
};

// VARIABLE DEFINE
VARIABLE variable_Robot_groupA_SEARCHIN_area = {
    4, variable_buffer_of_Robot_groupA_SEARCHIN_area, 4, 1, variable_relation_of_Robot_groupA_SEARCHIN_area
};
VARIABLE variable_Robot_groupB_SEARCHIN_area = {
    4, variable_buffer_of_Robot_groupB_SEARCHIN_area, 4, 1, variable_relation_of_Robot_groupB_SEARCHIN_area
};
VARIABLE variable_Robot_SEARCH_GROUPING_Robot_groupA_SEARCHIN_0 = {
    4, variable_buffer_of_Robot_SEARCH_GROUPING_Robot_groupA_SEARCHIN_0, 4, 1, variable_relation_of_Robot_SEARCH_GROUPING_Robot_groupA_SEARCHIN_0
};
VARIABLE variable_Robot_SEARCH_GROUPING_Robot_groupB_SEARCHIN_0 = {
    4, variable_buffer_of_Robot_SEARCH_GROUPING_Robot_groupB_SEARCHIN_0, 4, 1, variable_relation_of_Robot_SEARCH_GROUPING_Robot_groupB_SEARCHIN_0
};
VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_area = {
    4, variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_area, 4, 1, variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_area
};
VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1 = {
    4, variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1, 4, 1, variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1
};
VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_2 = {
    4, variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_2, 4, 1, variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_2
};
VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_area = {
    4, variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_area, 4, 1, variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_area
};
VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1 = {
    4, variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1, 4, 1, variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1
};
VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_2 = {
    4, variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_2, 4, 1, variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_2
};
VARIABLE variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_cmd = {
    4, variable_buffer_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_cmd, 4, 1, variable_relation_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_cmd
};
VARIABLE variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_1_0 = {
    4, variable_buffer_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_1_0, 4, 1, variable_relation_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_1_0
};
VARIABLE variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_3_0 = {
    4, variable_buffer_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_3_0, 4, 1, variable_relation_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_3_0
};
VARIABLE variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_5_0 = {
    4, variable_buffer_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_5_0, 4, 1, variable_relation_of_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_5_0
};
VARIABLE variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_cmd = {
    4, variable_buffer_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_cmd, 4, 1, variable_relation_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_cmd
};
VARIABLE variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_1_0 = {
    4, variable_buffer_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_1_0, 4, 1, variable_relation_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_1_0
};
VARIABLE variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_3_0 = {
    4, variable_buffer_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_3_0, 4, 1, variable_relation_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_3_0
};
VARIABLE variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_5_0 = {
    4, variable_buffer_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_5_0, 4, 1, variable_relation_of_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_5_0
};
VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_area = {
    4, variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_area, 4, 1, variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_area
};
VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target1 = {
    4, variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target1, 4, 1, variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target1
};
VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target2 = {
    4, variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target2, 4, 1, variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target2
};
VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_isFound = {
    4, variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_isFound, 4, 1, variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_isFound
};
VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1_0 = {
    4, variable_buffer_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1_0, 4, 1, variable_relation_of_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1_0
};
VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_area = {
    4, variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_area, 4, 1, variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_area
};
VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target1 = {
    4, variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target1, 4, 1, variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target1
};
VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target2 = {
    4, variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target2, 4, 1, variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target2
};
VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_isFound = {
    4, variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_isFound, 4, 1, variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_isFound
};
VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1_0 = {
    4, variable_buffer_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1_0, 4, 1, variable_relation_of_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1_0
};
VARIABLE variable_leader = {
    8, variable_buffer_of_leader, 0, 0, NULL
};
VARIABLE variable_group = {
    4, variable_buffer_of_group, 0, 0, NULL
};
VARIABLE variable_grouping_mode = {
    4, variable_buffer_of_grouping_mode, 0, 0, NULL
};
VARIABLE variable_grouping_result = {
    4, variable_buffer_of_grouping_result, 0, 0, NULL
};
