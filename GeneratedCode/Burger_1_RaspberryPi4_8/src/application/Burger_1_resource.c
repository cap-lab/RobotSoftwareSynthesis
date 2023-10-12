#include "Burger_1_resource.h"

// DEFINE ACTION ID LIST
semo_int32 action_id_list_color[2];
semo_int32 action_id_list_wheel[3];
semo_int32 action_id_list_distance[2];
semo_int32 action_id_list_camera[2];
semo_int32 action_id_list_led[2];

// DEFINE RESOURCE
RESOURCE resource_list[5] = {
    {ID_RESOURCE_color, 0, action_id_list_color, FALSE},
    {ID_RESOURCE_wheel, 0, action_id_list_wheel, TRUE},
    {ID_RESOURCE_distance, 0, action_id_list_distance, FALSE},
    {ID_RESOURCE_camera, 0, action_id_list_camera, FALSE},
    {ID_RESOURCE_led, 0, action_id_list_led, TRUE},
};