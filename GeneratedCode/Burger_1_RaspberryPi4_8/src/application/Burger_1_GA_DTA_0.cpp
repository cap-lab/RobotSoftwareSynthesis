
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif


#define TASK_STATUS_RUN 0
#define TASK_STATUS_STOP 1
#define TASK_STATUS_WAIT 2

#define TASK_CODE_BEGIN
#define TASK_CODE_END
#define TASK_NAME "Burger_1_GA_DTA"
#define THIS_TASK_ID (22)
#define THIS_THREAD_ID (0)


#include <UFMulticastPort.h>

#include <UFPort.h> 
#include <UFPort_deprecated.h>

#include <UFTask.h>
#include <UFTask_deprecated.h>

#include <UFControl.h>
#include <UFControl_deprecated.h>

#include <UFSystem.h>
#include <UFSystem_deprecated.h>

#include <UFLoop.h>


#define LIBCALL(x, ...) LIBCALL_##x(__VA_ARGS__)
#define LIBCALL_group(f, ...) l_Burger_1_grouping_##f(__VA_ARGS__)
#include "Burger_1_grouping.cicl.h"
#define SYS_REQ(x, ...) SYS_REQ_##x(THIS_TASK_ID, ## __VA_ARGS__)

#define TASK_INIT void Burger_1_GA_DTA_Init0(int TASK_ID)
#define TASK_GO void Burger_1_GA_DTA_Go0(int nTaskId)
#define TASK_WRAPUP void Burger_1_GA_DTA_Wrapup0()

#define STATIC static

#include "semo_logger.h"
#include "semo_group.h"
#include "semo_common.h"
#include "Burger_1_common.h"


#include "DTA.cic"



