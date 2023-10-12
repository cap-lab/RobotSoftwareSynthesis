#ifndef __EngineeringKit_2_MODE_HEADER__
#define __EngineeringKit_2_MODE_HEADER__

#include "semo_common.h"
#include "EngineeringKit_2_service.h"
#include "EngineeringKit_2_group.h"
#include "EngineeringKit_2_variable.h"

// MODE STATE DEFINE
typedef enum _MODE_ID {
    ID_MODE_Robot_REMOTE_CONTROL,
    ID_MODE_Robot_SEARCH_GROUPING,
    ID_MODE_Robot_groupA_SEARCHIN_MODE_SEARCHIN,
    ID_MODE_Robot_groupB_SEARCHIN_MODE_SEARCHIN,
    ID_MODE_Robot_FINISH,
} MODE_ID;

typedef struct _MODE {
    MODE_ID mode_id;
    SEMO_STATE state;
    semo_int8 need_select_group;
    GROUP_ID selected_group;
    semo_int32 variable_map_list_size;
    VARIABLE_MAP *variable_map_list;
    semo_int32 service_list_size;
    SERVICE_ID *service_list;
    GROUP_ID group;
} MODE;

extern MODE mode_list[5];

void run_mode(MODE_ID mode_id);
void stop_mode(MODE_ID mode_id);
#endif