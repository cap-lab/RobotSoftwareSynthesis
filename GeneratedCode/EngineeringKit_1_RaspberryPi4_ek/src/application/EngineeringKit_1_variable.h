#ifndef __EngineeringKit_1_VARIABLE_HEADER__
#define __EngineeringKit_1_VARIABLE_HEADER__

#include "semo_variable.h"

typedef enum _VARIABLE_TYPE_area {
        SEMO_ENUM_R1,
        SEMO_ENUM_R2,
} VARIABLE_TYPE_area;
typedef enum _VARIABLE_TYPE_target {
        SEMO_ENUM_INIT,
        SEMO_ENUM_WHITE,
        SEMO_ENUM_BLACK,
        SEMO_ENUM_RED,
        SEMO_ENUM_GREEN,
        SEMO_ENUM_BLUE,
        SEMO_ENUM_YELLOW,
} VARIABLE_TYPE_target;
typedef enum _VARIABLE_TYPE_cmd {
        SEMO_ENUM_RC,
        SEMO_ENUM_START,
        SEMO_ENUM_FINISH,
        SEMO_ENUM_HIDE,
} VARIABLE_TYPE_cmd;
typedef enum _VARIABLE_TYPE_isFound {
        SEMO_ENUM_FALSE,
        SEMO_ENUM_TRUE,
} VARIABLE_TYPE_isFound;
typedef enum _VARIABLE_TYPE_searchedColor {
        SEMO_ENUM_COLOR_NOT_FOUNDED,
        SEMO_ENUM_COLOR_FOUNDED,
} VARIABLE_TYPE_searchedColor;

extern VARIABLE variable_Robot_groupA_SEARCHIN_area;
extern VARIABLE variable_Robot_groupB_SEARCHIN_area;
extern VARIABLE variable_Robot_SEARCH_GROUPING_Robot_groupA_SEARCHIN_0;
extern VARIABLE variable_Robot_SEARCH_GROUPING_Robot_groupB_SEARCHIN_0;
extern VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_area;
extern VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1;
extern VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_2;
extern VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_area;
extern VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1;
extern VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_2;
extern VARIABLE variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_cmd;
extern VARIABLE variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_1_0;
extern VARIABLE variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_3_0;
extern VARIABLE variable_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_5_0;
extern VARIABLE variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_cmd;
extern VARIABLE variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_1_0;
extern VARIABLE variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_3_0;
extern VARIABLE variable_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_5_0;
extern VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_area;
extern VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target1;
extern VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_target2;
extern VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_isFound;
extern VARIABLE variable_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_1_0;
extern VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_area;
extern VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target1;
extern VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_target2;
extern VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_isFound;
extern VARIABLE variable_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_1_0;
extern VARIABLE variable_leader;
extern VARIABLE variable_group;
extern VARIABLE variable_grouping_mode;
extern VARIABLE variable_grouping_result;

#endif