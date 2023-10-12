#ifndef __UEM_LIB_HEADER_ENGINEERINGKIT_2_GROUPING_CICL_H__
#define __UEM_LIB_HEADER_ENGINEERINGKIT_2_GROUPING_CICL_H__

#include "EngineeringKit_2_group.h"
#include "semo_logger.h"
#include "EngineeringKit_2_variable.h"
#include "semo_group.h"
#include "semo_common.h"
#include "UCThreadMutex.h"
#include "EngineeringKit_2_mode.h"
#include "EngineeringKit_2_common.h"

#define LIBFUNC(rtype, f, ...) rtype l_EngineeringKit_2_grouping_##f(__VA_ARGS__)

#ifdef __cplusplus
extern "C"
{
#endif

extern LIBFUNC(void, init, void);
extern LIBFUNC(void, wrapup, void);
extern LIBFUNC(SEMO_GROUP*, get_grouping_candidate_list);
extern LIBFUNC(semo_int32, get_grouping_candidate_num);
extern LIBFUNC(void, get_group_info, semo_int32 group_id, SEMO_GROUP* group);
extern LIBFUNC(void, get_shared_data_grouping, semo_int32 index, semo_uint8* data, semo_int32 length);
extern LIBFUNC(void, get_shared_data_report, semo_int32* mode_id, SEMO_GROUPING_SHARED* robot_info_list, semo_int32* robot_num, semo_uint8* data, semo_int32 length);
extern LIBFUNC(semo_int8, avail_shared_data_report);
extern LIBFUNC(void, set_grouping_state, semo_int32 mode, SEMO_GROUP_SELECTION_STATE state);
extern LIBFUNC(SEMO_GROUP_SELECTION_STATE, get_grouping_state, semo_int32 mode);
extern LIBFUNC(void, set_shared_data_grouping, semo_uint8* data, semo_int32 length);
extern LIBFUNC(void, set_shared_data_listen, semo_int32 mode_id, SEMO_GROUPING_SHARED* robot_info_list, semo_int32 robot_num, semo_uint8* data, semo_int32 length);
extern LIBFUNC(semo_int32, get_shared_robot_num);



#ifdef __cplusplus
}
#endif

#undef LIBFUNC

#endif /* __UEM_LIB_HEADER_ENGINEERINGKIT_2_GROUPING_CICL_H__ */


