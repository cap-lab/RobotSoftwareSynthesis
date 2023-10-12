/* uem_module_data.c made by UEM Translator */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <uem_common.h>

#include <uem_data.h>

#include <Module_engineering_kit.h>


SAddOnModule g_stModules[] = {
	{
		Module_engineering_kit_Initialize, // module initialization function
		Module_engineering_kit_Finalize, // module finalization function
	},
};

int g_nModuleNum = ARRAYLEN(g_stModules);


