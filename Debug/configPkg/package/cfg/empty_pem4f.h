/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-B06
 */

#include <xdc/std.h>

#include <ti/sysbios/family/arm/m3/Hwi.h>
extern const ti_sysbios_family_arm_m3_Hwi_Handle TimerIntHandle;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle PIDSem;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle PIDHandle;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle LightSem;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle LightHandle;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle AcquireDataHandle;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle TxDataHandle;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle AcquireDataSem;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle TxDataSem;

#include <ti/sysbios/knl/Swi.h>
extern const ti_sysbios_knl_Swi_Handle toDoHandle;

extern int xdc_runtime_Startup__EXECFXN__C;

extern int xdc_runtime_Startup__RESETFXN__C;

