#ifndef __Burger_2_GROUP_HEADER__
#define __Burger_2_GROUP_HEADER__

#include "semo_common.h"

// GROUP DEFINE
typedef enum _GROUP_ID {
    ID_GROUP_Robot_groupA = 1,
    ID_GROUP_Robot_groupB = 2,
    ID_GROUP_Robot = 0,
} GROUP_ID;

extern GROUP_ID group_list[3];
extern semo_int32 group_num;

void group_init(void);
void set_group_state(GROUP_ID group, semo_int32 refer_count);
semo_int8 get_group_state(GROUP_ID group);
void register_group_selection(semo_int32 mode_id, GROUP_ID *field_of_mode);
void check_group_selection_state();
void stop_selecting_group(semo_int32 mode_id, GROUP_ID *field_of_mode);
#endif