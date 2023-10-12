

MAIN_DIR=src/main

APPLICATION_DIR=src/application
API_DIR=src/api
KERNEL_DIR=src/kernel
COMMON_DIR=src/common
MODULE_DIR=src/module
PLATFORM_DIR=native/linux
DEVICE_RESTRICTION=unconstrained

SYSTEM_CFLAGS=$(shell pkg-config --cflags mqtt) $(shell pkg-config --cflags opencv4) ${PTHREAD_CFLAGS}

SYSTEM_LDFLAG_LIST=$(shell pkg-config --libs opencv4) -lpthread -ludev $(shell pkg-config --libs mqtt) ${PTHREAD_LDADD}


bin_PROGRAMS=proc

MAIN_SOURCES=$(MAIN_DIR)/$(DEVICE_RESTRICTION)/UEMMainCommon.c\
	$(MAIN_DIR)/$(DEVICE_RESTRICTION)/$(PLATFORM_DIR)/main.c

APPLICATION_SOURCES=$(APPLICATION_DIR)/Burger_2_camera_0.cpp\
	$(APPLICATION_DIR)/Burger_2_report_0.c\
	$(APPLICATION_DIR)/Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_0.cpp\
	$(APPLICATION_DIR)/Burger_2_GA_DTA_0.cpp\
	$(APPLICATION_DIR)/Burger_2_distance_0.cpp\
	$(APPLICATION_DIR)/Burger_2_Robot_REMOTE_CONTROL_ReceiveCommandFromOperator_Burger_getModeTransferCommand_0.cpp\
	$(APPLICATION_DIR)/Burger_2_listen_0.c\
	$(APPLICATION_DIR)/Burger_2_control_0.c\
	$(APPLICATION_DIR)/Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_0.cpp\
	$(APPLICATION_DIR)/Burger_2_leader_0.c\
	$(APPLICATION_DIR)/Burger_2_color_R_color_0.cpp\
	$(APPLICATION_DIR)/Burger_2_led_R_led_0.cpp\
	$(APPLICATION_DIR)/Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_0.cpp\
	$(APPLICATION_DIR)/Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_leader_0.cpp\
	$(APPLICATION_DIR)/Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_controlAndReport_0.cpp\
	$(APPLICATION_DIR)/Burger_2_Robot_SEARCH_GROUPING_ReceiveCommandFromOperator_Burger_getModeTransferCommand_0.cpp\
	$(APPLICATION_DIR)/Burger_2_wheel_R_getDirection_0.cpp\
	$(APPLICATION_DIR)/Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_Burger_searchV3_R_detectFrontMember_0.cpp\
	$(APPLICATION_DIR)/Burger_2_Robot_REMOTE_CONTROL_RemoteControl_Burger_remoteControl_0.cpp\
	$(APPLICATION_DIR)/Burger_2_grouping.cpp\
	$(APPLICATION_DIR)/Burger_2_Robot_groupB_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0.c\
	$(APPLICATION_DIR)/Burger_2_leader.c\
	$(APPLICATION_DIR)/Burger_2_Robot_groupA_SEARCHIN_MODE_SEARCHIN_Search_searchV3_0.c\
	$(APPLICATION_DIR)/Burger_2_group_action.c

EXTRA_SOURCES=$(APPLICATION_DIR)/Burger_2_transition.c\
	$(APPLICATION_DIR)/slbf.cpp\
	$(APPLICATION_DIR)/Burger_2_resource.c\
	$(APPLICATION_DIR)/Burger_2_mode.c\
	$(APPLICATION_DIR)/semo_camera.cpp\
	$(APPLICATION_DIR)/Burger_2_variable.c\
	$(APPLICATION_DIR)/semo_variable.c\
	$(APPLICATION_DIR)/semo_communication.c\
	$(APPLICATION_DIR)/lipkg.cpp\
	$(APPLICATION_DIR)/Burger_2_service.c\
	$(APPLICATION_DIR)/Burger_2_timer.c\
	$(APPLICATION_DIR)/Burger_2_group.c\
	$(APPLICATION_DIR)/cmd_interface_linux.cpp\
	$(APPLICATION_DIR)/Burger_2_event.c\
	$(APPLICATION_DIR)/transform.cpp\
	$(APPLICATION_DIR)/Burger_2_action.c\
	$(APPLICATION_DIR)/Burger_2_port.c

API_SOURCES=$(API_DIR)/UFControl_deprecated.c\
	$(API_DIR)/UFControl.c\
	$(API_DIR)/UFPort_deprecated.c\
	$(API_DIR)/UFPort.c\
	$(API_DIR)/UFTask_deprecated.c\
	$(API_DIR)/UFTask.c\
	$(API_DIR)/UFTimer_deprecated.c\
	$(API_DIR)/UFTimer.c\
	$(API_DIR)/UFSystem_deprecated.c\
	$(API_DIR)/UFSystem.c\
	$(API_DIR)/UFLoop.c\
	$(API_DIR)/UFMulticastPort.c


KERNEL_DATA_SOURCES=$(KERNEL_DIR)/generated/uem_data.cpp\
	$(KERNEL_DIR)/generated/uem_channel_data.cpp\
	$(KERNEL_DIR)/generated/uem_multicast_data.cpp\
	$(KERNEL_DIR)/generated/uem_module_data.c

KERNEL_SOURCES=$(KERNEL_DIR)/UKSharedMemoryChannel.c\
	$(KERNEL_DIR)/UKChannel.c\
	$(KERNEL_DIR)/UKTimer.c\
	$(KERNEL_DIR)/UKTime.c\
	$(KERNEL_DIR)/UKTask.c
			   
KERNEL_DEVICE_SOURCES=$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKCPUTaskManager.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKCPUCompositeTaskManager.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKCPUGeneralTaskManager.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKModeTransitionModelController.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKLoopModelController.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKModelController.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKCPUTaskCommon.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKChannelMemory.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKMulticastMemory.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKHostSystem.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKChannel_unconstrained.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKProcessor.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKProgram.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKModeTransition.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKLibrary.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKTaskParameter.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKTask_unconstrained.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKLoop.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKModule.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKSharedMemoryMulticast.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/UKMulticast.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/communication/UKUEMProtocol.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/communication/UKUEMLiteProtocol.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/communication/UKSerialCommunicationManager.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/communication/UKServiceRunner.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/communication/UKSocketCommunication.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/communication/UKRemoteChannel.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/communication/udp/UKUDPSocketMulticast.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/communication/serial/UKSerialModule.c\
	$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/communication/serial/UKSerialCommunication.c

COMMON_SOURCES=$(COMMON_DIR)/UCBasic.c\
	$(COMMON_DIR)/UCEndian.c\
	$(COMMON_DIR)/UCString.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/UCDynamicLinkedList.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/UCFixedSizeQueue.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/UCDynamicStack.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/UCAlloc.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/communication/UCDynamicSocket.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/$(PLATFORM_DIR)/UCThread.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/$(PLATFORM_DIR)/UCThreadEvent.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/$(PLATFORM_DIR)/UCThreadMutex.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/$(PLATFORM_DIR)/UCSystem.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/$(PLATFORM_DIR)/UCTime.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/$(PLATFORM_DIR)/communication/UCSocket.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/$(PLATFORM_DIR)/communication/udp/UCUDPSocket.c\
	$(COMMON_DIR)/$(DEVICE_RESTRICTION)/$(PLATFORM_DIR)/communication/serial/UCSerialPort.c 

MODULE_SOURCES=
			
proc_SOURCES=$(MAIN_SOURCES) $(APPLICATION_SOURCES) $(EXTRA_SOURCES) $(API_SOURCES) $(KERNEL_DATA_SOURCES) $(KERNEL_SOURCES) $(KERNEL_DEVICE_SOURCES) $(COMMON_SOURCES) $(MODULE_SOURCES)
			 

MAIN_CFLAGS=-I$(MAIN_DIR)/include -I$(MAIN_DIR)/$(DEVICE_RESTRICTION)

API_CFLAGS=-I$(API_DIR)/include

KERNEL_CFLAGS=-I$(KERNEL_DIR)/include\
				-I$(KERNEL_DIR)/include/encryption\
				-I$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/include\
				-I$(KERNEL_DIR)/$(DEVICE_RESTRICTION)/include/communication
TOP_CFLAGS=-I$(top_srcdir)

COMMON_CFLAGS=-I$(COMMON_DIR)/include\
				-I$(COMMON_DIR)/$(DEVICE_RESTRICTION)/include\
				-I$(COMMON_DIR)/include/communication\
				-I$(COMMON_DIR)/$(DEVICE_RESTRICTION)/include/communication
MODULE_CFLAGS=-I$(MODULE_DIR)/include

CFLAGS_LIST=$(TOP_CFLAGS) $(MAIN_CFLAGS) $(API_CFLAGS) $(KERNEL_CFLAGS) $(COMMON_CFLAGS) $(MODULE_CFLAGS)

proc_CFLAGS=-Wall $(CFLAGS_LIST) $(SYSTEM_CFLAGS)
proc_CXXFLAGS=-Wall $(CFLAGS_LIST) $(SYSTEM_CFLAGS)

MAIN_LDFLAG_LIST=

API_LDFLAG_LIST=

KERNEL_LDFLAG_LIST=

COMMON_LDFLAG_LIST=$(SYSTEM_LDFLAG_LIST)

proc_LDFLAGS=$(MAIN_LDFLAG_LIST) $(API_LDFLAG_LIST) $(KERNEL_LDFLAG_LIST) $(COMMON_LDFLAG_LIST)



