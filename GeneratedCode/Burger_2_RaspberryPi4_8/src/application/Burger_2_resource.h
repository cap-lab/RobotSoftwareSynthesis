#ifndef __Burger_2_RESOURCE_HEADER__
#define __Burger_2_RESOURCE_HEADER__

#include "semo_common.h"

typedef enum _RESOURCE_ID {
    ID_RESOURCE_wheel,
    ID_RESOURCE_color,
    ID_RESOURCE_distance,
    ID_RESOURCE_camera,
    ID_RESOURCE_led,
    ID_RESOURCE_LAST
} RESOURCE_ID;

typedef struct _RESOURCE {
    RESOURCE_ID resource_id;
    semo_int32 reference_count;
    semo_int32 *action_id_list;
    semo_int8 conflict;
} RESOURCE;

extern RESOURCE resource_list[5];

#endif