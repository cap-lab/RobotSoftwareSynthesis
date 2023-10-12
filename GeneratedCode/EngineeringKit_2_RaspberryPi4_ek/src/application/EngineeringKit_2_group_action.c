
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#define LIBCALL(x, ...) LIBCALL_##x(__VA_ARGS__)

#include "EngineeringKit_2_group_action.cicl.h"

#define LIBCALL(x, ...) LIBCALL_##x(__VA_ARGS__)
#define LIBCALL_this(f, ...) l_EngineeringKit_2_group_action_##f(__VA_ARGS__)
#define LIBFUNC(rtype, f, ...) rtype l_EngineeringKit_2_group_action_##f(__VA_ARGS__)


#ifdef __cplusplus
extern "C"
{
#endif

#include "EngineeringKit_2_group_action.cicl"

#ifdef __cplusplus
}
#endif

#undef LIBFUNC