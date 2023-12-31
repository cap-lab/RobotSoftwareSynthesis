/*
 * uem_enum.h
 *
 *  Created on: 2018. 6. 8.
 *      Author: jej
 *      Changed :
 *  	    1. 2019. 06. 20. wecracy
 */

#ifndef SRC_KERNEL_INCLUDE_UEM_ENUM_H_
#define SRC_KERNEL_INCLUDE_UEM_ENUM_H_

#include <uem_common.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum _EParameterType {
	PARAMETER_TYPE_DOUBLE,
	PARAMETER_TYPE_INT,
} EParameterType;

typedef enum _ETaskType {
	TASK_TYPE_COMPUTATIONAL,
	TASK_TYPE_CONTROL,
	TASK_TYPE_LOOP,
	TASK_TYPE_COMPOSITE,
} ETaskType;

typedef enum _ERunCondition {
	RUN_CONDITION_DATA_DRIVEN,
	RUN_CONDITION_TIME_DRIVEN,
	RUN_CONDITION_CONTROL_DRIVEN,
} ERunCondition;

typedef enum _EPortType {
	PORT_TYPE_QUEUE,
	PORT_TYPE_BUFFER,
} EPortType;

typedef enum _EPortMapType {
	PORTMAP_TYPE_DISTRIBUTING,
	PORTMAP_TYPE_BROADCASTING,
} EPortMapType;

typedef enum _ETimeMetric {
	TIME_METRIC_CYCLE,
	TIME_METRIC_COUNT,
	TIME_METRIC_MICROSEC,
	TIME_METRIC_MILLISEC,
	TIME_METRIC_SEC,
	TIME_METRIC_MINUTE,
	TIME_METRIC_HOUR,
} ETimeMetric;

typedef enum _EPortDirection {
	PORT_DIRECTION_OUTPUT,
	PORT_DIRECTION_INPUT,
} EPortDirection;

typedef enum _EPortSampleRateType {
	PORT_SAMPLE_RATE_FIXED,
	PORT_SAMPLE_RATE_VARIABLE,
	PORT_SAMPLE_RATE_MULTIPLE,
} EPortSampleRateType;

typedef enum _ECommunicationType {
	COMMUNICATION_TYPE_SHARED_MEMORY,
	COMMUNICATION_TYPE_REMOTE_READER,
	COMMUNICATION_TYPE_REMOTE_WRITER,
} ECommunicationType;

typedef enum _EChannelType {
	CHANNEL_TYPE_GENERAL,
	CHANNEL_TYPE_INPUT_ARRAY,
	CHANNEL_TYPE_OUTPUT_ARRAY,
	CHANNEL_TYPE_FULL_ARRAY,
} EChannelType;

typedef enum _EMulticastCommunicationType {
	SHARED_MEMORY,
	UDP,
}EMulticastCommunicationType;

typedef enum _ELoopType {
	LOOP_TYPE_CONVERGENT,
	LOOP_TYPE_DATA,
} ELoopType;

typedef enum _ETaskGraphType {
	GRAPH_TYPE_PROCESS_NETWORK,
	GRAPH_TYPE_DATAFLOW,
} ETaskGraphType;


typedef enum _EModeState {
	MODE_STATE_NORMAL,
	MODE_STATE_TRANSITING,
} EModeState;



#ifdef __cplusplus
}
#endif

#endif /* SRC_KERNEL_INCLUDE_UEM_ENUM_H_ */
