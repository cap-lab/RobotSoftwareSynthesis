#ifndef __UEM_LIB_HEADER_BURGER_3_ROBOT_GROUPA_SEARCHIN_MODE_SEARCHIN_SEARCH_SEARCHV3_0_CICL_H__
#define __UEM_LIB_HEADER_BURGER_3_ROBOT_GROUPA_SEARCHIN_MODE_SEARCHIN_SEARCH_SEARCHV3_0_CICL_H__

#include "Burger_3_variable.h"
#include "semo_logger.h"
#include "semo_common.h"
#include "UCThreadMutex.h"
#include "Burger_3_common.h"

#define LIBFUNC(rtype, f, ...) rtype l_Burger_3_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0_##f(__VA_ARGS__)

#ifdef __cplusplus
extern "C"
{
#endif

extern LIBFUNC(void, init, void);
extern LIBFUNC(void, wrapup, void);
extern LIBFUNC(semo_int8, avail_searchedColor_report);
extern LIBFUNC(semo_int8, avail_searchedColor_action);
extern LIBFUNC(void, get_searchedColor_action, void* buffer);
extern LIBFUNC(void, get_searchedColor_report, void* buffer);
extern LIBFUNC(void, set_searchedColor_listen, void* buffer);
extern LIBFUNC(void, set_searchedColor_action, void* buffer);



#ifdef __cplusplus
}
#endif

#undef LIBFUNC

#endif /* __UEM_LIB_HEADER_BURGER_3_ROBOT_GROUPA_SEARCHIN_MODE_SEARCHIN_SEARCH_SEARCHV3_0_CICL_H__ */


