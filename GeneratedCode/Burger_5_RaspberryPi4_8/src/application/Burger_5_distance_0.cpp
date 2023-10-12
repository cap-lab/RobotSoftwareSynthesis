
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif


#define TASK_STATUS_RUN 0
#define TASK_STATUS_STOP 1
#define TASK_STATUS_WAIT 2

#define TASK_CODE_BEGIN
#define TASK_CODE_END
#define TASK_NAME "Burger_5_distance"
#define THIS_TASK_ID (101)
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
#define SYS_REQ(x, ...) SYS_REQ_##x(THIS_TASK_ID, ## __VA_ARGS__)

#define TASK_INIT void Burger_5_distance_Init0(int TASK_ID)
#define TASK_GO void Burger_5_distance_Go0(int nTaskId)
#define TASK_WRAPUP void Burger_5_distance_Wrapup0()

#define STATIC static

#include "Burger_5_common.h"
#include "turtlebot3_lds.h"
#include "lipkg.h"
#include "semo_distance.h"
#include "semo_logger.h"
#include "transform.h"
#include "pointdata.h"
#include "slbf.h"
#include "semo_common.h"
#include "cmd_interface_linux.h"


#include "TL_R_lds.cic"



