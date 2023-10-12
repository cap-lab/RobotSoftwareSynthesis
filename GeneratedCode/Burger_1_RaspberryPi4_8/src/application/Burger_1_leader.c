
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#define LIBCALL(x, ...) LIBCALL_##x(__VA_ARGS__)

#include "Burger_1_leader_lib.cicl.h"

#define LIBCALL(x, ...) LIBCALL_##x(__VA_ARGS__)
#define LIBCALL_this(f, ...) l_Burger_1_leader_##f(__VA_ARGS__)
#define LIBFUNC(rtype, f, ...) rtype l_Burger_1_leader_##f(__VA_ARGS__)


#ifdef __cplusplus
extern "C"
{
#endif

#include "Burger_1_leader_lib.cicl"

#ifdef __cplusplus
}
#endif

#undef LIBFUNC