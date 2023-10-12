
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#define LIBCALL(x, ...) LIBCALL_##x(__VA_ARGS__)

#include "Burger_5_grouping.cicl.h"

#define LIBCALL(x, ...) LIBCALL_##x(__VA_ARGS__)
#define LIBCALL_this(f, ...) l_Burger_5_grouping_##f(__VA_ARGS__)
#define LIBFUNC(rtype, f, ...) rtype l_Burger_5_grouping_##f(__VA_ARGS__)


#ifdef __cplusplus
extern "C"
{
#endif

#include "Burger_5_grouping.cicl"

#ifdef __cplusplus
}
#endif

#undef LIBFUNC