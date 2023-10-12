
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif


#define TASK_STATUS_RUN 0
#define TASK_STATUS_STOP 1
#define TASK_STATUS_WAIT 2

#define TASK_CODE_BEGIN
#define TASK_CODE_END
#define TASK_NAME "EngineeringKit_2_color"
#define THIS_TASK_ID (173)
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

#define TASK_INIT void EngineeringKit_2_color_Init0(int TASK_ID)
#define TASK_GO void EngineeringKit_2_color_Go0(int nTaskId)
#define TASK_WRAPUP void EngineeringKit_2_color_Wrapup0()

#define STATIC static

#include "dynamixel_sdk.h"
#include "semo_color.h"
#include "semo_logger.h"
#include "semo_common.h"
#include "Module_engineering_kit.h"
#include "EngineeringKit_2_common.h"


#include "EC_R_color.cic"



