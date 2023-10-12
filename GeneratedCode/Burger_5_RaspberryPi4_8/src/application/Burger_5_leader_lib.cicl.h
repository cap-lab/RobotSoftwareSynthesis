#ifndef __UEM_LIB_HEADER_BURGER_5_LEADER_LIB_CICL_H__
#define __UEM_LIB_HEADER_BURGER_5_LEADER_LIB_CICL_H__

#include "Burger_5_common.h"
#include "Burger_5_group.h"
#include "semo_leader.h"
#include "semo_logger.h"
#include "Burger_5_variable.h"
#include "semo_common.h"
#include "UCThreadMutex.h"

#define LIBFUNC(rtype, f, ...) rtype l_Burger_5_leader_##f(__VA_ARGS__)

#ifdef __cplusplus
extern "C"
{
#endif

extern LIBFUNC(void, init, void);
extern LIBFUNC(void, wrapup, void);
extern LIBFUNC(void, set_robot_id_listen, semo_int32 group_id, semo_int32 robot_id);
extern LIBFUNC(void, set_heartbeat_listen, semo_int32 group_id, semo_int32 robot_id);
extern LIBFUNC(void, set_robot_id_leader, semo_int32 group_id, semo_int32 robot_id);
extern LIBFUNC(void, set_heartbeat_leader, semo_int32 group_id, semo_int32 robot_id);
extern LIBFUNC(semo_int8, avail_robot_id_leader, semo_int32 group_id);
extern LIBFUNC(semo_int8, avail_heartbeat_leader, semo_int32 group_id);
extern LIBFUNC(semo_int8, avail_robot_id_report, semo_int32 group_id);
extern LIBFUNC(semo_int8, avail_heartbeat_report, semo_int32 group_id);
extern LIBFUNC(semo_int32, get_robot_id_leader, semo_int32 group_id);
extern LIBFUNC(semo_int32, get_heartbeat_leader, semo_int32 group_id);
extern LIBFUNC(semo_int32, get_robot_id_report, semo_int32 group_id);
extern LIBFUNC(semo_int32, get_heartbeat_report, semo_int32 group_id);
extern LIBFUNC(void, set_leader_selection_state, semo_int32 group_id, LEADER_SELECTION_STATE state);
extern LIBFUNC(LEADER_SELECTION_STATE, get_leader_selection_state, semo_int32 group_id);
extern LIBFUNC(void, set_last_time, semo_int32 group_id, semo_int64 time);
extern LIBFUNC(semo_int64, get_last_time, semo_int32 group_id);
extern LIBFUNC(semo_int32, get_leader, semo_int32 group_id);
extern LIBFUNC(void, set_leader, semo_int32 group_id, semo_int32 robot_id);



#ifdef __cplusplus
}
#endif

#undef LIBFUNC

#endif /* __UEM_LIB_HEADER_BURGER_5_LEADER_LIB_CICL_H__ */


