#ifndef __UEM_LIB_HEADER_BURGER_1_GROUP_ACTION_CICL_H__
#define __UEM_LIB_HEADER_BURGER_1_GROUP_ACTION_CICL_H__

#include "semo_leader.h"
#include "semo_logger.h"
#include "Burger_1_variable.h"
#include "semo_common.h"
#include "UCThreadMutex.h"
#include "Burger_1_common.h"

#define LIBFUNC(rtype, f, ...) rtype l_Burger_1_group_action_##f(__VA_ARGS__)

#ifdef __cplusplus
extern "C"
{
#endif

extern LIBFUNC(void, init, void);
extern LIBFUNC(void, wrapup, void);
extern LIBFUNC(void, set_group_action_listen, semo_int32 action_id, semo_int32 robot_id, semo_int64 time);
extern LIBFUNC(semo_int8, get_group_action_control, semo_int32 action_id, semo_int64 time);
extern LIBFUNC(void, set_group_action_control, semo_int32 action_id, semo_int8 sync_state, semo_int64 time);
extern LIBFUNC(void, set_robot_id_control, semo_int32 action_id);
extern LIBFUNC(semo_int8, avail_group_action_report, semo_int32 action_id);



#ifdef __cplusplus
}
#endif

#undef LIBFUNC

#endif /* __UEM_LIB_HEADER_BURGER_1_GROUP_ACTION_CICL_H__ */


