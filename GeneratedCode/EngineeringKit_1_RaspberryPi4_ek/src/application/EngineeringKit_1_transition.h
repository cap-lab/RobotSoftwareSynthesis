#ifndef __EngineeringKit_1_TRANSITION_HEADER__
#define __EngineeringKit_1_TRANSITION_HEADER__

#include "semo_common.h"
#include "EngineeringKit_1_mode.h"
#include "EngineeringKit_1_event.h"
#include "EngineeringKit_1_group.h"

typedef enum _TRANSITION_ID {
    ID_TRANSITION_Robot_groupA_SEARCHIN,
    ID_TRANSITION_Robot_groupB_SEARCHIN,
    ID_TRANSITION_Robot,
} TRANSITION_ID;

typedef struct _EVENT_MODE_MAP {
    EVENT_ID eventId;
    semo_int32 next_mode_point;
    semo_int32 variable_map_list_size;
    VARIABLE_MAP *variable_map_list;
    MODE_ID next_mode;
} EVENT_MODE_MAP;

typedef struct _MODE_EVENT_MAP {
    MODE_ID mode_id;
    semo_int32 event_mode_map_size;
    EVENT_MODE_MAP *event_mode_map;
} MODE_EVENT_MAP;

typedef struct _TRANSITION {
    SEMO_STATE state;
    TRANSITION_ID transition_id;
    GROUP_ID group_id;

    semo_int32 transition_depth;

    semo_int32 mode_list_size;
    semo_int32 mode_point;
    MODE_EVENT_MAP* mode_list;
} TRANSITION;

extern TRANSITION transition_list[3];

void manage_event();
void run_transition(TRANSITION_ID transition_id);
void check_group_allocation_and_run_transition();

#endif