/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A65
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/TaskSupport.h>
#include <ti/sysbios/family/arm/a8/Cache.h>
#include <ti/sysbios/family/arm/a8/Mmu.h>
#include <ti/sysbios/family/arm/a8/TimestampProvider.h>
#include <ti/sysbios/family/arm/a8/intcps/Hwi.h>
#include <ti/sysbios/family/arm/a8/ti81xx/TimerSupport.h>
#include <ti/sysbios/family/arm/exc/Exception.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Cache.h>
#include <ti/sysbios/hal/Core.h>
#include <ti/sysbios/hal/CoreNull.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/timers/dmtimer/Timer.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/GateNull.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/LoggerBuf.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/TimestampNull.h>

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_GateNull_Object__ {
    const xdc_runtime_GateNull_Fxns__ *__fxns;
} xdc_runtime_GateNull_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_GateNull_Object__ obj;
} xdc_runtime_GateNull_Object2__;

/* Object */
typedef xdc_runtime_GateNull_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a8.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a8.Mmu INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a8.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_a8_intcps_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_a8_intcps_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_a8_intcps_Hwi_Module__ ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_a8_intcps_Hwi_Object__ {
    const ti_sysbios_family_arm_a8_intcps_Hwi_Fxns__ *__fxns;
    ti_sysbios_family_arm_a8_intcps_Hwi_Type type;
    xdc_UInt priority;
    xdc_UArg arg;
    ti_sysbios_family_arm_a8_intcps_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_a8_intcps_Hwi_Irp irp;
    __TA_ti_sysbios_family_arm_a8_intcps_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_a8_intcps_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_a8_intcps_Hwi_Object__ obj;
} ti_sysbios_family_arm_a8_intcps_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_a8_intcps_Hwi___VERS
    #define ti_sysbios_family_arm_a8_intcps_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_a8_intcps_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.a8.ti81xx.TimerSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.exc.Exception INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Core INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.CoreNull INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Core_CoreProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_a8_intcps_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_a8_intcps_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__ *__fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_timers_dmtimer_Timer_Object__ {
    const ti_sysbios_timers_dmtimer_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    xdc_UInt tiocpCfg;
    xdc_UInt tmar;
    xdc_UInt tier;
    xdc_UInt twer;
    xdc_UInt tclr;
    xdc_UInt tsicr;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_Int eventId;
    xdc_UArg arg;
    ti_sysbios_hal_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_hal_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt rollovers;
    xdc_UInt savedCurrCount;
    xdc_Bool useDefaultEventId;
} ti_sysbios_timers_dmtimer_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_timers_dmtimer_Timer_Object__ obj;
} ti_sysbios_timers_dmtimer_Timer_Object2__;

/* Object */
typedef ti_sysbios_timers_dmtimer_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_timers_dmtimer_Timer_Object */

/* Object */
typedef ti_sysbios_timers_dmtimer_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock_TimerProxy___VERS
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.timers.dmtimer.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_timers_dmtimer_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_timers_dmtimer_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_timers_dmtimer_Timer_Module__ ti_sysbios_timers_dmtimer_Timer_Module__root__V;

/* <-- ti_sysbios_timers_dmtimer_Timer_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_timers_dmtimer_Timer___VERS
    #define ti_sysbios_timers_dmtimer_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_timers_dmtimer_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.GateNull INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_GateNull_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_GateNull_Module__;

/* Module__root__V */
extern xdc_runtime_GateNull_Module__ xdc_runtime_GateNull_Module__root__V;

/* <-- xdc_runtime_GateNull_Object */

/* __ParamsPtr */
#ifdef xdc_runtime_GateNull___VERS
    #define xdc_runtime_GateNull___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_GateNull___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_LoggerBuf_Object__ {
    const xdc_runtime_LoggerBuf_Fxns__ *__fxns;
    xdc_runtime_IHeap_Handle bufHeap;
    __TA_xdc_runtime_LoggerBuf_Instance_State__entryArr entryArr;
    xdc_runtime_LoggerBuf_Entry *curEntry;
    xdc_runtime_LoggerBuf_Entry *endEntry;
    xdc_runtime_LoggerBuf_Entry *readEntry;
    xdc_Bits32 serial;
    xdc_Int16 numEntries;
    xdc_Int8 advance;
    xdc_Bool enabled;
    xdc_Bool flush;
} xdc_runtime_LoggerBuf_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Object__ obj;
} xdc_runtime_LoggerBuf_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_LoggerBuf___VERS
    #define xdc_runtime_LoggerBuf___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_LoggerBuf___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module_GateProxy_Module__ xdc_runtime_LoggerBuf_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_LoggerBuf_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Module_GateProxy_Object__ obj;
} xdc_runtime_LoggerBuf_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy___VERS
    #define xdc_runtime_LoggerBuf_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_LoggerBuf_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.TimestampNull INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.hal.CoreNull INHERITS ========
 */

#pragma DATA_SECTION(ti_sysbios_interfaces_ICore_Interface__BASE__C, ".const:ti_sysbios_interfaces_ICore_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_ICore_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== xdc.runtime.GateNull INHERITS ========
 */



/*
 * ======== xdc.runtime.LoggerBuf INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {(void*)&xdc_runtime_ILogger_Interface__BASE__C};



/*
 * ======== xdc.runtime.SysMin INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== xdc.runtime.Timestamp INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== xdc.runtime.TimestampNull INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ITimestampProvider_Interface__BASE__C, ".const:xdc_runtime_ITimestampProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampProvider_Interface__BASE__C = {(void*)&xdc_runtime_ITimestampClient_Interface__BASE__C};



/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8032, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8033, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.hal.CoreNull VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__FXNS__C, ".const:ti_sysbios_hal_CoreNull_Module__FXNS__C");
const ti_sysbios_hal_CoreNull_Fxns__ ti_sysbios_hal_CoreNull_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_ICore_Interface__BASE__C, /* __base */
    &ti_sysbios_hal_CoreNull_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_hal_CoreNull_getId__E,
    ti_sysbios_hal_CoreNull_interruptCore__E,
    ti_sysbios_hal_CoreNull_lock__E,
    ti_sysbios_hal_CoreNull_unlock__E,
    ti_sysbios_hal_CoreNull_hwiDisable__E,
    ti_sysbios_hal_CoreNull_hwiEnable__E,
    ti_sysbios_hal_CoreNull_hwiRestore__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8026, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8035, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.GateNull VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__FXNS__C, ".const:xdc_runtime_GateNull_Module__FXNS__C");
const xdc_runtime_GateNull_Fxns__ xdc_runtime_GateNull_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &xdc_runtime_GateNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_GateNull_query__E,
    xdc_runtime_GateNull_enter__E,
    xdc_runtime_GateNull_leave__E,
    {
        xdc_runtime_GateNull_Object__create__S,
        xdc_runtime_GateNull_Object__delete__S,
        xdc_runtime_GateNull_Handle__label__S,
        0x8008, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.LoggerBuf VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__FXNS__C, ".const:xdc_runtime_LoggerBuf_Module__FXNS__C");
const xdc_runtime_LoggerBuf_Fxns__ xdc_runtime_LoggerBuf_Module__FXNS__C = {
    (void*)&xdc_runtime_IFilterLogger_Interface__BASE__C, /* __base */
    &xdc_runtime_LoggerBuf_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_LoggerBuf_enable__E,
    xdc_runtime_LoggerBuf_disable__E,
    xdc_runtime_LoggerBuf_write0__E,
    xdc_runtime_LoggerBuf_write1__E,
    xdc_runtime_LoggerBuf_write2__E,
    xdc_runtime_LoggerBuf_write4__E,
    xdc_runtime_LoggerBuf_write8__E,
    xdc_runtime_LoggerBuf_setFilterLevel__E,
    xdc_runtime_LoggerBuf_getFilterLevel__E,
    {
        xdc_runtime_LoggerBuf_Object__create__S,
        xdc_runtime_LoggerBuf_Object__delete__S,
        xdc_runtime_LoggerBuf_Handle__label__S,
        0x800a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8010, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8012, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.TimestampNull VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__FXNS__C, ".const:xdc_runtime_TimestampNull_Module__FXNS__C");
const xdc_runtime_TimestampNull_Fxns__ xdc_runtime_TimestampNull_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampProvider_Interface__BASE__C, /* __base */
    &xdc_runtime_TimestampNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_TimestampNull_get32__E,
    xdc_runtime_TimestampNull_get64__E,
    xdc_runtime_TimestampNull_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8013, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.a8.Cache DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a8_Cache_Module_State__ {
    xdc_Bits32 l1dInfo;
    xdc_Bits32 l1pInfo;
    xdc_Bits32 l2Info;
    xdc_SizeT l2WaySize;
    xdc_Bits32 lockRegister;
    __TA_ti_sysbios_family_arm_a8_Cache_Module_State__baseAddresses baseAddresses;
} ti_sysbios_family_arm_a8_Cache_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_a8_Cache_Module_State__ ti_sysbios_family_arm_a8_Cache_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.a8.Mmu DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a8_Mmu_Module_State__ {
    __TA_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf tableBuf;
} ti_sysbios_family_arm_a8_Mmu_Module_State__;
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=16384
#endif

/* --> ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A */
__T1_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A[4096];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A, "ti.sysbios.family.arm.a8.mmuTableSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A[4096] __attribute__ ((section("ti.sysbios.family.arm.a8.mmuTableSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A, 16384);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A[4096] __attribute__ ((aligned(16384)));
#endif
#endif

/* Module__state__V */
ti_sysbios_family_arm_a8_Mmu_Module_State__ ti_sysbios_family_arm_a8_Mmu_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.a8.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a8_TimestampProvider_Module_State__ {
    xdc_UInt32 upper32Bits;
    xdc_UInt32 prevLoBits;
} ti_sysbios_family_arm_a8_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_a8_TimestampProvider_Module_State__ ti_sysbios_family_arm_a8_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi DECLARATIONS ========
 */

/* --> isr97gpio0 */
extern xdc_Void isr97gpio0(xdc_UArg);

/* --> isr33gpio2 */
extern xdc_Void isr33gpio2(xdc_UArg);

/* --> isr7NMI */
extern xdc_Void isr7NMI(xdc_UArg);

/* --> isrTimer3 */
extern xdc_Void isrTimer3(xdc_UArg);

/* --> isrTimer4 */
extern xdc_Void isrTimer4(xdc_UArg);

/* --> isrTimer6 */
extern xdc_Void isrTimer6(xdc_UArg);

/* --> isrTimer7 */
extern xdc_Void isrTimer7(xdc_UArg);

/* --> isrfnRTCInt */
extern xdc_Void isrfnRTCInt(xdc_UArg);

/* --> isr79eQEP0INT */
extern xdc_Void isr79eQEP0INT(xdc_UArg);

/* --> isr88eQEP1INT */
extern xdc_Void isr88eQEP1INT(xdc_UArg);

/* --> isr89eQEP2INT */
extern xdc_Void isr89eQEP2INT(xdc_UArg);

/* --> isr96gpio0 */
extern xdc_Void isr96gpio0(xdc_UArg);

/* --> isr98gpio1 */
extern xdc_Void isr98gpio1(xdc_UArg);

/* --> isr70I2C0 */
extern xdc_Void isr70I2C0(xdc_UArg);

/* --> isr57gpio */
extern xdc_Void isr57gpio(xdc_UArg);

/* --> isr99gpio1 */
extern xdc_Void isr99gpio1(xdc_UArg);

/* --> isr71I2C1 */
extern xdc_Void isr71I2C1(xdc_UArg);

/* --> isr30I2C2 */
extern xdc_Void isr30I2C2(xdc_UArg);

/* --> isr17USBSSINT */
extern xdc_Void isr17USBSSINT(xdc_UArg);

/* --> isr18USBINT0 */
extern xdc_Void isr18USBINT0(xdc_UArg);

/* --> isr19USBINT1 */
extern xdc_Void isr19USBINT1(xdc_UArg);

/* --> isr72UART0INT */
extern xdc_Void isr72UART0INT(xdc_UArg);

/* --> isr73UART1INT */
extern xdc_Void isr73UART1INT(xdc_UArg);

/* --> isr74UART2INT */
extern xdc_Void isr74UART2INT(xdc_UArg);

/* --> isr44UART3INT */
extern xdc_Void isr44UART3INT(xdc_UArg);

/* --> isr45UART4INT */
extern xdc_Void isr45UART4INT(xdc_UArg);

/* --> isr46UART5INT */
extern xdc_Void isr46UART5INT(xdc_UArg);

/* Object__table__V */
ti_sysbios_family_arm_a8_intcps_Hwi_Object__ ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[28];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__ {
    xdc_Char *taskSP;
    xdc_Char *isrStack;
    xdc_Bits32 mir0Mask;
    xdc_Bits32 mir1Mask;
    xdc_Bits32 mir2Mask;
    xdc_Bits32 mir3Mask;
    xdc_UInt spuriousInts;
    xdc_UInt lastSpuriousInt;
    xdc_UInt irp;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
    __TA_ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__fiqStack fiqStack;
    xdc_SizeT fiqStackSize;
    __TA_ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__dispatchTable dispatchTable;
    ti_sysbios_family_arm_a8_intcps_Hwi_Object__ Object_field_nonPluggedHwi;
} ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__;

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=4
#endif

/* --> ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A */
__T1_ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__fiqStack ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A[1024];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A, 4);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__fiqStack ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A[1024] __attribute__ ((aligned(4)));
#endif
#endif

/* Module__state__V */
ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__ ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.a8.ti81xx.TimerSupport DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__ {
    __TA_ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__intNums intNums;
} ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__;

/* --> ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State_0_intNums__A */
__T1_ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__intNums ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State_0_intNums__A[6];

/* Module__state__V */
ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__ ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.exc.Exception DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_exc_Exception_Module_State__ {
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excStackBuffers excStackBuffers;
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excStack excStack;
    xdc_SizeT excStackSize;
} ti_sysbios_family_arm_exc_Exception_Module_State__;

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excActive ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excContext ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStackBuffers ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A[1];
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A[8192];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A[8192] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A */
__T2_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A[1];

/* Module__state__V */
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V;

/* --> ti_sysbios_family_arm_exc_Exception_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_exc_Exception_excHookFuncs ti_sysbios_family_arm_exc_Exception_excHookFuncs__A[1];


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Cache DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Core DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.CoreNull DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Core_CoreProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[28];


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> PIMMainIdle */
extern xdc_Void PIMMainIdle(xdc_Void);

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[2];


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> taskfnPIMRun */
extern xdc_Void taskfnPIMRun(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_1_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_1_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.timers.dmtimer.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_timers_dmtimer_Timer_Object__ ti_sysbios_timers_dmtimer_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_timers_dmtimer_Timer_Module_State__ {
    xdc_Bits32 availMask;
    __TA_ti_sysbios_timers_dmtimer_Timer_Module_State__intFreqs intFreqs;
    __TA_ti_sysbios_timers_dmtimer_Timer_Module_State__device device;
    __TA_ti_sysbios_timers_dmtimer_Timer_Module_State__handles handles;
    xdc_Bool firstInit;
} ti_sysbios_timers_dmtimer_Timer_Module_State__;

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__intFreqs ti_sysbios_timers_dmtimer_Timer_Module_State_0_intFreqs__A[6];

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__device ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A[6];

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__handles ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A[6];

/* Module__state__V */
ti_sysbios_timers_dmtimer_Timer_Module_State__ ti_sysbios_timers_dmtimer_Timer_Module__state__V;


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.GateNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf DECLARATIONS ========
 */

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[16];

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1];

/* Module_State__ */
typedef struct xdc_runtime_LoggerBuf_Module_State__ {
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} xdc_runtime_LoggerBuf_Module_State__;

/* Module__state__V */
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3];

/* --> xdc_runtime_LoggerBuf_Module_startup__E */
extern xdc_Int xdc_runtime_LoggerBuf_Module_startup__E(xdc_Int);

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_a8_Mmu_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a8_Mmu_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_a8_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a8_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_a8_intcps_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a8_intcps_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_exc_Exception_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_exc_Exception_Module_startup__E(xdc_Int);

/* --> ti_sysbios_timers_dmtimer_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_timers_dmtimer_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[14];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[14];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6888];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[59];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.TimestampNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_nonPluggedHwi__O, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_nonPluggedHwi__O");
__FAR__ const xdc_SizeT ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_nonPluggedHwi__O = offsetof(ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__, Object_field_nonPluggedHwi);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/ti/workspace_v6_0/TIRTOSTTypical/Debug/configPkg/package/cfg/app_pea8fnv");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7A");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.beaglebone");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.A8Fnv");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_a8_Mmu_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[11] < 0;
}
xdc_Bool ti_sysbios_timers_dmtimer_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[12] < 0;
}
xdc_Bool ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[13] < 0;
}


/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[14];
    xdc_runtime_Startup_startModsFxn__C(state, 14);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif

extern Void ti_sysbios_family_arm_a8_intcps_Hwi_initVbar__I(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_sysbios_family_arm_a8_intcps_Hwi_initVbar__I();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, CString *pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    CString fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
Void xdc_runtime_SysMin_output__I(Char *buf, UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_timers_dmtimer_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_timers_dmtimer_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */



/*
 * ======== ti.sysbios.family.arm.a8.Mmu TEMPLATE ========
 */



#include <ti/sysbios/family/arm/a8/Mmu.h>

#if defined(__GNUC__) && !defined(__ti__)
Void __attribute__((naked)) ti_sysbios_family_arm_a8_Mmu_initTableBuf__I(UInt32 *mmuTableBuf)
{
          __asm__ __volatile__ (
              "movw r1, #0x402 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x4020 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x403 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x4030 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x44e \n\t"
              "movw r2, #0xe12 \n\t"
              "movt r2, #0x44e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x480 \n\t"
              "movw r2, #0xe12 \n\t"
              "movt r2, #0x4800 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x481 \n\t"
              "movw r2, #0xe12 \n\t"
              "movt r2, #0x4810 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x482 \n\t"
              "movw r2, #0xe12 \n\t"
              "movt r2, #0x4820 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x483 \n\t"
              "movw r2, #0xe12 \n\t"
              "movt r2, #0x4830 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x800 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8000 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x801 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8010 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x802 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8020 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x803 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8030 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x804 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8040 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x805 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8050 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x806 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8060 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x807 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8070 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x808 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8080 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x809 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8090 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x80a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x80a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x80b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x80b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x80c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x80c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x80d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x80d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x80e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x80e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x80f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x80f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x810 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8100 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x811 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8110 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x812 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8120 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x813 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8130 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x814 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8140 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x815 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8150 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x816 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8160 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x817 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8170 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x818 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8180 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x819 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8190 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x81a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x81a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x81b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x81b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x81c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x81c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x81d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x81d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x81e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x81e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x81f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x81f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x820 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8200 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x821 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8210 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x822 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8220 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x823 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8230 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x824 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8240 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x825 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8250 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x826 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8260 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x827 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8270 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x828 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8280 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x829 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8290 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x82a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x82a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x82b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x82b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x82c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x82c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x82d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x82d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x82e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x82e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x82f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x82f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x830 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8300 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x831 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8310 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x832 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8320 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x833 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8330 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x834 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8340 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x835 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8350 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x836 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8360 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x837 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8370 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x838 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8380 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x839 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8390 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x83a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x83a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x83b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x83b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x83c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x83c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x83d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x83d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x83e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x83e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x83f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x83f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x840 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8400 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x841 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8410 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x842 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8420 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x843 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8430 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x844 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8440 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x845 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8450 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x846 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8460 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x847 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8470 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x848 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8480 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x849 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8490 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x84a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x84a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x84b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x84b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x84c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x84c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x84d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x84d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x84e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x84e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x84f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x84f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x850 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8500 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x851 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8510 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x852 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8520 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x853 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8530 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x854 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8540 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x855 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8550 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x856 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8560 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x857 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8570 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x858 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8580 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x859 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8590 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x85a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x85a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x85b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x85b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x85c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x85c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x85d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x85d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x85e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x85e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x85f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x85f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x860 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8600 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x861 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8610 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x862 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8620 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x863 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8630 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x864 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8640 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x865 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8650 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x866 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8660 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x867 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8670 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x868 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8680 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x869 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8690 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x86a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x86a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x86b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x86b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x86c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x86c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x86d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x86d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x86e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x86e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x86f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x86f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x870 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8700 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x871 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8710 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x872 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8720 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x873 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8730 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x874 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8740 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x875 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8750 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x876 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8760 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x877 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8770 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x878 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8780 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x879 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8790 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x87a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x87a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x87b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x87b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x87c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x87c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x87d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x87d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x87e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x87e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x87f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x87f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x880 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8800 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x881 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8810 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x882 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8820 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x883 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8830 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x884 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8840 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x885 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8850 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x886 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8860 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x887 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8870 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x888 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8880 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x889 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8890 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x88a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x88a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x88b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x88b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x88c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x88c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x88d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x88d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x88e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x88e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x88f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x88f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x890 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8900 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x891 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8910 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x892 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8920 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x893 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8930 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x894 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8940 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x895 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8950 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x896 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8960 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x897 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8970 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x898 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8980 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x899 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8990 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x89a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x89a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x89b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x89b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x89c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x89c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x89d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x89d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x89e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x89e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x89f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x89f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8aa \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8aa0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ab \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ab0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ac \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ac0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ad \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ad0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ae \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ae0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8af \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8af0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ba \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ba0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8bb \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8bb0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8bc \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8bc0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8bd \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8bd0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8be \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8be0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8bf \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8bf0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ca \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ca0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8cb \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8cb0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8cc \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8cc0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8cd \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8cd0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ce \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ce0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8cf \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8cf0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8da \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8da0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8db \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8db0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8dc \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8dc0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8dd \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8dd0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8de \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8de0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8df \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8df0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ea \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ea0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8eb \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8eb0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ec \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ec0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ed \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ed0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ee \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ee0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ef \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ef0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8fa \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8fa0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8fb \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8fb0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8fc \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8fc0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8fd \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8fd0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8fe \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8fe0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ff \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ff0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ ("bx lr");
}
#elif defined(__ti__)
Void ti_sysbios_family_arm_a8_Mmu_initTableBuf__I(UInt32 *mmuTableBuf)
{
          mmuTableBuf[1026] = 0x40201e0e;
          mmuTableBuf[1027] = 0x40301e0e;
          mmuTableBuf[1102] = 0x44e00e12;
          mmuTableBuf[1152] = 0x48000e12;
          mmuTableBuf[1153] = 0x48100e12;
          mmuTableBuf[1154] = 0x48200e12;
          mmuTableBuf[1155] = 0x48300e12;
          mmuTableBuf[2048] = 0x80001e0e;
          mmuTableBuf[2049] = 0x80101e0e;
          mmuTableBuf[2050] = 0x80201e0e;
          mmuTableBuf[2051] = 0x80301e0e;
          mmuTableBuf[2052] = 0x80401e0e;
          mmuTableBuf[2053] = 0x80501e0e;
          mmuTableBuf[2054] = 0x80601e0e;
          mmuTableBuf[2055] = 0x80701e0e;
          mmuTableBuf[2056] = 0x80801e0e;
          mmuTableBuf[2057] = 0x80901e0e;
          mmuTableBuf[2058] = 0x80a01e0e;
          mmuTableBuf[2059] = 0x80b01e0e;
          mmuTableBuf[2060] = 0x80c01e0e;
          mmuTableBuf[2061] = 0x80d01e0e;
          mmuTableBuf[2062] = 0x80e01e0e;
          mmuTableBuf[2063] = 0x80f01e0e;
          mmuTableBuf[2064] = 0x81001e0e;
          mmuTableBuf[2065] = 0x81101e0e;
          mmuTableBuf[2066] = 0x81201e0e;
          mmuTableBuf[2067] = 0x81301e0e;
          mmuTableBuf[2068] = 0x81401e0e;
          mmuTableBuf[2069] = 0x81501e0e;
          mmuTableBuf[2070] = 0x81601e0e;
          mmuTableBuf[2071] = 0x81701e0e;
          mmuTableBuf[2072] = 0x81801e0e;
          mmuTableBuf[2073] = 0x81901e0e;
          mmuTableBuf[2074] = 0x81a01e0e;
          mmuTableBuf[2075] = 0x81b01e0e;
          mmuTableBuf[2076] = 0x81c01e0e;
          mmuTableBuf[2077] = 0x81d01e0e;
          mmuTableBuf[2078] = 0x81e01e0e;
          mmuTableBuf[2079] = 0x81f01e0e;
          mmuTableBuf[2080] = 0x82001e0e;
          mmuTableBuf[2081] = 0x82101e0e;
          mmuTableBuf[2082] = 0x82201e0e;
          mmuTableBuf[2083] = 0x82301e0e;
          mmuTableBuf[2084] = 0x82401e0e;
          mmuTableBuf[2085] = 0x82501e0e;
          mmuTableBuf[2086] = 0x82601e0e;
          mmuTableBuf[2087] = 0x82701e0e;
          mmuTableBuf[2088] = 0x82801e0e;
          mmuTableBuf[2089] = 0x82901e0e;
          mmuTableBuf[2090] = 0x82a01e0e;
          mmuTableBuf[2091] = 0x82b01e0e;
          mmuTableBuf[2092] = 0x82c01e0e;
          mmuTableBuf[2093] = 0x82d01e0e;
          mmuTableBuf[2094] = 0x82e01e0e;
          mmuTableBuf[2095] = 0x82f01e0e;
          mmuTableBuf[2096] = 0x83001e0e;
          mmuTableBuf[2097] = 0x83101e0e;
          mmuTableBuf[2098] = 0x83201e0e;
          mmuTableBuf[2099] = 0x83301e0e;
          mmuTableBuf[2100] = 0x83401e0e;
          mmuTableBuf[2101] = 0x83501e0e;
          mmuTableBuf[2102] = 0x83601e0e;
          mmuTableBuf[2103] = 0x83701e0e;
          mmuTableBuf[2104] = 0x83801e0e;
          mmuTableBuf[2105] = 0x83901e0e;
          mmuTableBuf[2106] = 0x83a01e0e;
          mmuTableBuf[2107] = 0x83b01e0e;
          mmuTableBuf[2108] = 0x83c01e0e;
          mmuTableBuf[2109] = 0x83d01e0e;
          mmuTableBuf[2110] = 0x83e01e0e;
          mmuTableBuf[2111] = 0x83f01e0e;
          mmuTableBuf[2112] = 0x84001e0e;
          mmuTableBuf[2113] = 0x84101e0e;
          mmuTableBuf[2114] = 0x84201e0e;
          mmuTableBuf[2115] = 0x84301e0e;
          mmuTableBuf[2116] = 0x84401e0e;
          mmuTableBuf[2117] = 0x84501e0e;
          mmuTableBuf[2118] = 0x84601e0e;
          mmuTableBuf[2119] = 0x84701e0e;
          mmuTableBuf[2120] = 0x84801e0e;
          mmuTableBuf[2121] = 0x84901e0e;
          mmuTableBuf[2122] = 0x84a01e0e;
          mmuTableBuf[2123] = 0x84b01e0e;
          mmuTableBuf[2124] = 0x84c01e0e;
          mmuTableBuf[2125] = 0x84d01e0e;
          mmuTableBuf[2126] = 0x84e01e0e;
          mmuTableBuf[2127] = 0x84f01e0e;
          mmuTableBuf[2128] = 0x85001e0e;
          mmuTableBuf[2129] = 0x85101e0e;
          mmuTableBuf[2130] = 0x85201e0e;
          mmuTableBuf[2131] = 0x85301e0e;
          mmuTableBuf[2132] = 0x85401e0e;
          mmuTableBuf[2133] = 0x85501e0e;
          mmuTableBuf[2134] = 0x85601e0e;
          mmuTableBuf[2135] = 0x85701e0e;
          mmuTableBuf[2136] = 0x85801e0e;
          mmuTableBuf[2137] = 0x85901e0e;
          mmuTableBuf[2138] = 0x85a01e0e;
          mmuTableBuf[2139] = 0x85b01e0e;
          mmuTableBuf[2140] = 0x85c01e0e;
          mmuTableBuf[2141] = 0x85d01e0e;
          mmuTableBuf[2142] = 0x85e01e0e;
          mmuTableBuf[2143] = 0x85f01e0e;
          mmuTableBuf[2144] = 0x86001e0e;
          mmuTableBuf[2145] = 0x86101e0e;
          mmuTableBuf[2146] = 0x86201e0e;
          mmuTableBuf[2147] = 0x86301e0e;
          mmuTableBuf[2148] = 0x86401e0e;
          mmuTableBuf[2149] = 0x86501e0e;
          mmuTableBuf[2150] = 0x86601e0e;
          mmuTableBuf[2151] = 0x86701e0e;
          mmuTableBuf[2152] = 0x86801e0e;
          mmuTableBuf[2153] = 0x86901e0e;
          mmuTableBuf[2154] = 0x86a01e0e;
          mmuTableBuf[2155] = 0x86b01e0e;
          mmuTableBuf[2156] = 0x86c01e0e;
          mmuTableBuf[2157] = 0x86d01e0e;
          mmuTableBuf[2158] = 0x86e01e0e;
          mmuTableBuf[2159] = 0x86f01e0e;
          mmuTableBuf[2160] = 0x87001e0e;
          mmuTableBuf[2161] = 0x87101e0e;
          mmuTableBuf[2162] = 0x87201e0e;
          mmuTableBuf[2163] = 0x87301e0e;
          mmuTableBuf[2164] = 0x87401e0e;
          mmuTableBuf[2165] = 0x87501e0e;
          mmuTableBuf[2166] = 0x87601e0e;
          mmuTableBuf[2167] = 0x87701e0e;
          mmuTableBuf[2168] = 0x87801e0e;
          mmuTableBuf[2169] = 0x87901e0e;
          mmuTableBuf[2170] = 0x87a01e0e;
          mmuTableBuf[2171] = 0x87b01e0e;
          mmuTableBuf[2172] = 0x87c01e0e;
          mmuTableBuf[2173] = 0x87d01e0e;
          mmuTableBuf[2174] = 0x87e01e0e;
          mmuTableBuf[2175] = 0x87f01e0e;
          mmuTableBuf[2176] = 0x88001e0e;
          mmuTableBuf[2177] = 0x88101e0e;
          mmuTableBuf[2178] = 0x88201e0e;
          mmuTableBuf[2179] = 0x88301e0e;
          mmuTableBuf[2180] = 0x88401e0e;
          mmuTableBuf[2181] = 0x88501e0e;
          mmuTableBuf[2182] = 0x88601e0e;
          mmuTableBuf[2183] = 0x88701e0e;
          mmuTableBuf[2184] = 0x88801e0e;
          mmuTableBuf[2185] = 0x88901e0e;
          mmuTableBuf[2186] = 0x88a01e0e;
          mmuTableBuf[2187] = 0x88b01e0e;
          mmuTableBuf[2188] = 0x88c01e0e;
          mmuTableBuf[2189] = 0x88d01e0e;
          mmuTableBuf[2190] = 0x88e01e0e;
          mmuTableBuf[2191] = 0x88f01e0e;
          mmuTableBuf[2192] = 0x89001e0e;
          mmuTableBuf[2193] = 0x89101e0e;
          mmuTableBuf[2194] = 0x89201e0e;
          mmuTableBuf[2195] = 0x89301e0e;
          mmuTableBuf[2196] = 0x89401e0e;
          mmuTableBuf[2197] = 0x89501e0e;
          mmuTableBuf[2198] = 0x89601e0e;
          mmuTableBuf[2199] = 0x89701e0e;
          mmuTableBuf[2200] = 0x89801e0e;
          mmuTableBuf[2201] = 0x89901e0e;
          mmuTableBuf[2202] = 0x89a01e0e;
          mmuTableBuf[2203] = 0x89b01e0e;
          mmuTableBuf[2204] = 0x89c01e0e;
          mmuTableBuf[2205] = 0x89d01e0e;
          mmuTableBuf[2206] = 0x89e01e0e;
          mmuTableBuf[2207] = 0x89f01e0e;
          mmuTableBuf[2208] = 0x8a001e0e;
          mmuTableBuf[2209] = 0x8a101e0e;
          mmuTableBuf[2210] = 0x8a201e0e;
          mmuTableBuf[2211] = 0x8a301e0e;
          mmuTableBuf[2212] = 0x8a401e0e;
          mmuTableBuf[2213] = 0x8a501e0e;
          mmuTableBuf[2214] = 0x8a601e0e;
          mmuTableBuf[2215] = 0x8a701e0e;
          mmuTableBuf[2216] = 0x8a801e0e;
          mmuTableBuf[2217] = 0x8a901e0e;
          mmuTableBuf[2218] = 0x8aa01e0e;
          mmuTableBuf[2219] = 0x8ab01e0e;
          mmuTableBuf[2220] = 0x8ac01e0e;
          mmuTableBuf[2221] = 0x8ad01e0e;
          mmuTableBuf[2222] = 0x8ae01e0e;
          mmuTableBuf[2223] = 0x8af01e0e;
          mmuTableBuf[2224] = 0x8b001e0e;
          mmuTableBuf[2225] = 0x8b101e0e;
          mmuTableBuf[2226] = 0x8b201e0e;
          mmuTableBuf[2227] = 0x8b301e0e;
          mmuTableBuf[2228] = 0x8b401e0e;
          mmuTableBuf[2229] = 0x8b501e0e;
          mmuTableBuf[2230] = 0x8b601e0e;
          mmuTableBuf[2231] = 0x8b701e0e;
          mmuTableBuf[2232] = 0x8b801e0e;
          mmuTableBuf[2233] = 0x8b901e0e;
          mmuTableBuf[2234] = 0x8ba01e0e;
          mmuTableBuf[2235] = 0x8bb01e0e;
          mmuTableBuf[2236] = 0x8bc01e0e;
          mmuTableBuf[2237] = 0x8bd01e0e;
          mmuTableBuf[2238] = 0x8be01e0e;
          mmuTableBuf[2239] = 0x8bf01e0e;
          mmuTableBuf[2240] = 0x8c001e0e;
          mmuTableBuf[2241] = 0x8c101e0e;
          mmuTableBuf[2242] = 0x8c201e0e;
          mmuTableBuf[2243] = 0x8c301e0e;
          mmuTableBuf[2244] = 0x8c401e0e;
          mmuTableBuf[2245] = 0x8c501e0e;
          mmuTableBuf[2246] = 0x8c601e0e;
          mmuTableBuf[2247] = 0x8c701e0e;
          mmuTableBuf[2248] = 0x8c801e0e;
          mmuTableBuf[2249] = 0x8c901e0e;
          mmuTableBuf[2250] = 0x8ca01e0e;
          mmuTableBuf[2251] = 0x8cb01e0e;
          mmuTableBuf[2252] = 0x8cc01e0e;
          mmuTableBuf[2253] = 0x8cd01e0e;
          mmuTableBuf[2254] = 0x8ce01e0e;
          mmuTableBuf[2255] = 0x8cf01e0e;
          mmuTableBuf[2256] = 0x8d001e0e;
          mmuTableBuf[2257] = 0x8d101e0e;
          mmuTableBuf[2258] = 0x8d201e0e;
          mmuTableBuf[2259] = 0x8d301e0e;
          mmuTableBuf[2260] = 0x8d401e0e;
          mmuTableBuf[2261] = 0x8d501e0e;
          mmuTableBuf[2262] = 0x8d601e0e;
          mmuTableBuf[2263] = 0x8d701e0e;
          mmuTableBuf[2264] = 0x8d801e0e;
          mmuTableBuf[2265] = 0x8d901e0e;
          mmuTableBuf[2266] = 0x8da01e0e;
          mmuTableBuf[2267] = 0x8db01e0e;
          mmuTableBuf[2268] = 0x8dc01e0e;
          mmuTableBuf[2269] = 0x8dd01e0e;
          mmuTableBuf[2270] = 0x8de01e0e;
          mmuTableBuf[2271] = 0x8df01e0e;
          mmuTableBuf[2272] = 0x8e001e0e;
          mmuTableBuf[2273] = 0x8e101e0e;
          mmuTableBuf[2274] = 0x8e201e0e;
          mmuTableBuf[2275] = 0x8e301e0e;
          mmuTableBuf[2276] = 0x8e401e0e;
          mmuTableBuf[2277] = 0x8e501e0e;
          mmuTableBuf[2278] = 0x8e601e0e;
          mmuTableBuf[2279] = 0x8e701e0e;
          mmuTableBuf[2280] = 0x8e801e0e;
          mmuTableBuf[2281] = 0x8e901e0e;
          mmuTableBuf[2282] = 0x8ea01e0e;
          mmuTableBuf[2283] = 0x8eb01e0e;
          mmuTableBuf[2284] = 0x8ec01e0e;
          mmuTableBuf[2285] = 0x8ed01e0e;
          mmuTableBuf[2286] = 0x8ee01e0e;
          mmuTableBuf[2287] = 0x8ef01e0e;
          mmuTableBuf[2288] = 0x8f001e0e;
          mmuTableBuf[2289] = 0x8f101e0e;
          mmuTableBuf[2290] = 0x8f201e0e;
          mmuTableBuf[2291] = 0x8f301e0e;
          mmuTableBuf[2292] = 0x8f401e0e;
          mmuTableBuf[2293] = 0x8f501e0e;
          mmuTableBuf[2294] = 0x8f601e0e;
          mmuTableBuf[2295] = 0x8f701e0e;
          mmuTableBuf[2296] = 0x8f801e0e;
          mmuTableBuf[2297] = 0x8f901e0e;
          mmuTableBuf[2298] = 0x8fa01e0e;
          mmuTableBuf[2299] = 0x8fb01e0e;
          mmuTableBuf[2300] = 0x8fc01e0e;
          mmuTableBuf[2301] = 0x8fd01e0e;
          mmuTableBuf[2302] = 0x8fe01e0e;
          mmuTableBuf[2303] = 0x8ff01e0e;
}
#endif

/*
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi TEMPLATE ========
 */


extern Void _c_int00();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerDataAsm__I();
extern Void ti_sysbios_family_arm_a8_intcps_Hwi_dispatchIRQ__I();
extern Void ti_sysbios_family_arm_a8_intcps_Hwi_dispatchFIQC__I();

#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_vectors, ".vecs");
#pragma DATA_ALIGN(ti_sysbios_family_arm_a8_intcps_Hwi_vectors, 0x400);

const UInt32 ti_sysbios_family_arm_a8_intcps_Hwi_vectors[] = {
    (UInt32)(0xE59FF018),       /*   ldr  pc, resetFunc         */
    (UInt32)(0xE59FF018),       /*   ldr  pc, undefInstFunc     */
    (UInt32)(0xE59FF018),       /*   ldr  pc, swiFunc           */
    (UInt32)(0xE59FF018),       /*   ldr  pc, prefetchAbortFunc */
    (UInt32)(0xE59FF018),       /*   ldr  pc, dataAbortFunc     */
    (UInt32)(0xE59FF018),       /*   ldr  pc, reservedFunc      */
    (UInt32)(0xE59FF018),       /*   ldr  pc, irqFunc           */
    (UInt32)(0xE59FF018),       /*   ldr  pc, fiqFunc           */

/* resetFunc */
    (UInt32)(&_c_int00),    /* c_int00 */

/* undefInstFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* swiFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* prefetchAbortFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* dataAbortFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerDataAsm__I),

/* reservedFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* irqFunc */
    (UInt32)(&ti_sysbios_family_arm_a8_intcps_Hwi_dispatchIRQ__I),

/* fiqFunc */
    (UInt32)(&ti_sysbios_family_arm_a8_intcps_Hwi_dispatchFIQC__I)
};


/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x1dcd6500,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    0,  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x1dcd6500,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__id ti_sysbios_family_arm_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__count ti_sysbios_family_arm_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__table ti_sysbios_family_arm_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsMask ti_sysbios_family_arm_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__gateObj ti_sysbios_family_arm_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__gatePrms ti_sysbios_family_arm_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__id ti_sysbios_family_arm_TaskSupport_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_TaskSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerObj ti_sysbios_family_arm_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__count ti_sysbios_family_arm_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__heap ti_sysbios_family_arm_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__sizeof ti_sysbios_family_arm_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__table ti_sysbios_family_arm_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_defaultStackSize ti_sysbios_family_arm_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_stackAlignment ti_sysbios_family_arm_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.arm.a8.Cache INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_a8_Cache_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_a8_Cache_Module_State__ ti_sysbios_family_arm_a8_Cache_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_a8_Cache_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_a8_Cache_Module_State__ ti_sysbios_family_arm_a8_Cache_Module__state__V = {
    (xdc_Bits32)0x0,  /* l1dInfo */
    (xdc_Bits32)0x0,  /* l1pInfo */
    (xdc_Bits32)0x0,  /* l2Info */
    (xdc_SizeT)0x0,  /* l2WaySize */
    (xdc_Bits32)0x0,  /* lockRegister */
    {
        ((xdc_Ptr)(0x0)),  /* [0] */
        ((xdc_Ptr)(0x0)),  /* [1] */
        ((xdc_Ptr)(0x0)),  /* [2] */
        ((xdc_Ptr)(0x0)),  /* [3] */
        ((xdc_Ptr)(0x0)),  /* [4] */
        ((xdc_Ptr)(0x0)),  /* [5] */
        ((xdc_Ptr)(0x0)),  /* [6] */
        ((xdc_Ptr)(0x0)),  /* [7] */
    },  /* baseAddresses */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__diagsEnabled ti_sysbios_family_arm_a8_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__diagsIncluded ti_sysbios_family_arm_a8_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__diagsMask__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__diagsMask ti_sysbios_family_arm_a8_Cache_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__gateObj__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__gateObj ti_sysbios_family_arm_a8_Cache_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__gatePrms__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__gatePrms ti_sysbios_family_arm_a8_Cache_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__id__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__id ti_sysbios_family_arm_a8_Cache_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerDefined ti_sysbios_family_arm_a8_Cache_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerObj__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerObj ti_sysbios_family_arm_a8_Cache_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn0 ti_sysbios_family_arm_a8_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn1 ti_sysbios_family_arm_a8_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn2 ti_sysbios_family_arm_a8_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn4 ti_sysbios_family_arm_a8_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn8 ti_sysbios_family_arm_a8_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__startupDoneFxn ti_sysbios_family_arm_a8_Cache_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Object__count__C, ".const:ti_sysbios_family_arm_a8_Cache_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Object__count ti_sysbios_family_arm_a8_Cache_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Object__heap__C, ".const:ti_sysbios_family_arm_a8_Cache_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Object__heap ti_sysbios_family_arm_a8_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Object__sizeof__C, ".const:ti_sysbios_family_arm_a8_Cache_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Object__sizeof ti_sysbios_family_arm_a8_Cache_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Object__table__C, ".const:ti_sysbios_family_arm_a8_Cache_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Object__table ti_sysbios_family_arm_a8_Cache_Object__table__C = 0;

/* A_badBlockLength__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_A_badBlockLength__C, ".const:ti_sysbios_family_arm_a8_Cache_A_badBlockLength__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_A_badBlockLength ti_sysbios_family_arm_a8_Cache_A_badBlockLength__C = (((xdc_runtime_Assert_Id)1867) << 16 | 16);

/* A_blockCrossesPage__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_A_blockCrossesPage__C, ".const:ti_sysbios_family_arm_a8_Cache_A_blockCrossesPage__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_A_blockCrossesPage ti_sysbios_family_arm_a8_Cache_A_blockCrossesPage__C = (((xdc_runtime_Assert_Id)1933) << 16 | 16);

/* enableCache__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_enableCache__C, ".const:ti_sysbios_family_arm_a8_Cache_enableCache__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_enableCache ti_sysbios_family_arm_a8_Cache_enableCache__C = 1;

/* unlockL2Cache__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_unlockL2Cache__C, ".const:ti_sysbios_family_arm_a8_Cache_unlockL2Cache__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_unlockL2Cache ti_sysbios_family_arm_a8_Cache_unlockL2Cache__C = 1;

/* branchPredictionEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_branchPredictionEnabled__C, ".const:ti_sysbios_family_arm_a8_Cache_branchPredictionEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_branchPredictionEnabled ti_sysbios_family_arm_a8_Cache_branchPredictionEnabled__C = 1;


/*
 * ======== ti.sysbios.family.arm.a8.Mmu INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A */
__T1_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A[4096];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_a8_Mmu_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_a8_Mmu_Module_State__ ti_sysbios_family_arm_a8_Mmu_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_a8_Mmu_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_a8_Mmu_Module_State__ ti_sysbios_family_arm_a8_Mmu_Module__state__V = {
    ((void*)ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A),  /* tableBuf */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__diagsEnabled ti_sysbios_family_arm_a8_Mmu_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__diagsIncluded ti_sysbios_family_arm_a8_Mmu_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__diagsMask__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__diagsMask ti_sysbios_family_arm_a8_Mmu_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__gateObj__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__gateObj ti_sysbios_family_arm_a8_Mmu_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__gatePrms__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__gatePrms ti_sysbios_family_arm_a8_Mmu_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__id__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__id ti_sysbios_family_arm_a8_Mmu_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerDefined ti_sysbios_family_arm_a8_Mmu_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerObj__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerObj ti_sysbios_family_arm_a8_Mmu_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__startupDoneFxn ti_sysbios_family_arm_a8_Mmu_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Object__count__C, ".const:ti_sysbios_family_arm_a8_Mmu_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Object__count ti_sysbios_family_arm_a8_Mmu_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Object__heap__C, ".const:ti_sysbios_family_arm_a8_Mmu_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Object__heap ti_sysbios_family_arm_a8_Mmu_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Object__sizeof__C, ".const:ti_sysbios_family_arm_a8_Mmu_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Object__sizeof ti_sysbios_family_arm_a8_Mmu_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Object__table__C, ".const:ti_sysbios_family_arm_a8_Mmu_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Object__table ti_sysbios_family_arm_a8_Mmu_Object__table__C = 0;

/* A_nullPointer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_A_nullPointer__C, ".const:ti_sysbios_family_arm_a8_Mmu_A_nullPointer__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_A_nullPointer ti_sysbios_family_arm_a8_Mmu_A_nullPointer__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_unknownDescType__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_A_unknownDescType__C, ".const:ti_sysbios_family_arm_a8_Mmu_A_unknownDescType__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_A_unknownDescType ti_sysbios_family_arm_a8_Mmu_A_unknownDescType__C = (((xdc_runtime_Assert_Id)1996) << 16 | 16);

/* defaultAttrs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_defaultAttrs__C, ".const:ti_sysbios_family_arm_a8_Mmu_defaultAttrs__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_defaultAttrs ti_sysbios_family_arm_a8_Mmu_defaultAttrs__C = {
    ti_sysbios_family_arm_a8_Mmu_FirstLevelDesc_SECTION,  /* type */
    0,  /* bufferable */
    0,  /* cacheable */
    0,  /* shareable */
    0,  /* noexecute */
    (xdc_UInt8)0x1,  /* imp */
    (xdc_UInt8)0x0,  /* domain */
    (xdc_UInt8)0x3,  /* accPerm */
    (xdc_UInt8)0x1,  /* tex */
    0,  /* notGlobal */
};

/* enableMMU__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_enableMMU__C, ".const:ti_sysbios_family_arm_a8_Mmu_enableMMU__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_enableMMU ti_sysbios_family_arm_a8_Mmu_enableMMU__C = 1;


/*
 * ======== ti.sysbios.family.arm.a8.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_a8_TimestampProvider_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_a8_TimestampProvider_Module_State__ ti_sysbios_family_arm_a8_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_a8_TimestampProvider_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_a8_TimestampProvider_Module_State__ ti_sysbios_family_arm_a8_TimestampProvider_Module__state__V = {
    (xdc_UInt32)0x0,  /* upper32Bits */
    (xdc_UInt32)0x0,  /* prevLoBits */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__gateObj ti_sysbios_family_arm_a8_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_a8_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__id ti_sysbios_family_arm_a8_TimestampProvider_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Object__count ti_sysbios_family_arm_a8_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Object__heap ti_sysbios_family_arm_a8_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Object__sizeof ti_sysbios_family_arm_a8_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Object__table ti_sysbios_family_arm_a8_TimestampProvider_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_a8_intcps_Hwi_Params ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_a8_intcps_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_a8_intcps_Hwi_Module__ ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_a8_intcps_Hwi_Object__ ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[28] = {
    {/* instance#0 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr97gpio0)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr33gpio2)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#2 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr7NMI)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#3 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isrTimer3)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#4 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isrTimer4)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#5 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isrTimer6)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#6 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isrTimer7)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#7 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isrfnRTCInt)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#8 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr79eQEP0INT)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#9 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr88eQEP1INT)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#10 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr89eQEP2INT)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#11 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr96gpio0)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#12 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr98gpio1)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#13 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr70I2C0)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#14 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr57gpio)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#15 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr99gpio1)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#16 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr71I2C1)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#17 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr30I2C2)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#18 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr17USBSSINT)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#19 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr18USBINT0)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#20 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr19USBINT1)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#21 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr72UART0INT)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#22 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr73UART1INT)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#23 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr74UART2INT)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#24 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr44UART3INT)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#25 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr45UART4INT)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#26 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)isr46UART5INT)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#27 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)((void*)(ti_sysbios_timers_dmtimer_Timer_Handle)&ti_sysbios_timers_dmtimer_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_stub__E)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A */
__T1_ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__fiqStack ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A[1024];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__ ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__ ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
    (xdc_Bits32)(-0x400e0001 - 1),  /* mir0Mask */
    (xdc_Bits32)(-0x2007002 - 1),  /* mir1Mask */
    (xdc_Bits32)(-0x3008fd0 - 1),  /* mir2Mask */
    (xdc_Bits32)(-0xf - 1),  /* mir3Mask */
    (xdc_UInt)0x0,  /* spuriousInts */
    (xdc_UInt)0x0,  /* lastSpuriousInt */
    (xdc_UInt)0x0,  /* irp */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
    ((void*)ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A),  /* fiqStack */
    (xdc_SizeT)0x400,  /* fiqStackSize */
    {
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [0] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [1] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [2] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [3] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [4] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [5] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [6] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[2],  /* [7] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [8] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [9] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [10] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [11] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [12] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [13] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [14] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [15] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [16] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[18],  /* [17] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[19],  /* [18] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[20],  /* [19] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [20] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [21] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [22] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [23] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [24] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [25] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [26] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [27] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [28] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [29] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[17],  /* [30] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [31] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [32] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[1],  /* [33] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [34] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [35] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [36] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [37] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [38] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [39] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [40] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [41] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [42] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [43] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[24],  /* [44] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[25],  /* [45] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[26],  /* [46] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [47] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [48] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [49] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [50] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [51] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [52] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [53] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [54] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [55] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [56] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[14],  /* [57] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [58] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [59] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [60] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [61] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [62] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [63] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [64] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [65] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [66] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [67] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[27],  /* [68] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[3],  /* [69] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[13],  /* [70] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[16],  /* [71] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[21],  /* [72] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[22],  /* [73] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[23],  /* [74] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[7],  /* [75] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [76] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [77] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [78] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[8],  /* [79] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [80] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [81] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [82] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [83] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [84] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [85] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [86] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [87] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[9],  /* [88] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[10],  /* [89] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [90] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [91] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[4],  /* [92] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [93] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[5],  /* [94] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[6],  /* [95] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[11],  /* [96] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[0],  /* [97] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[12],  /* [98] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[15],  /* [99] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [100] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [101] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [102] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [103] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [104] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [105] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [106] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [107] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [108] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [109] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [110] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [111] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [112] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [113] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [114] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [115] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [116] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [117] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [118] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [119] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [120] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [121] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [122] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [123] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [124] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [125] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [126] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [127] */
    },  /* dispatchTable */
    {
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_a8_intcps_Hwi_nonPluggedHwiHandler__I)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },  /* Object_field_nonPluggedHwi */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsEnabled ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsIncluded ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsMask ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__gateObj ti_sysbios_family_arm_a8_intcps_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__gatePrms ti_sysbios_family_arm_a8_intcps_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__id ti_sysbios_family_arm_a8_intcps_Hwi_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerDefined ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerObj ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Object__count ti_sysbios_family_arm_a8_intcps_Hwi_Object__count__C = 28;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Object__heap ti_sysbios_family_arm_a8_intcps_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Object__sizeof ti_sysbios_family_arm_a8_intcps_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_a8_intcps_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Object__table ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__C = ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_a8_intcps_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x40;

/* fiqStack__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_fiqStack__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_fiqStack__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_fiqStack ti_sysbios_family_arm_a8_intcps_Hwi_fiqStack__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_fiqStack)0);

/* mir0Mask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_mir0Mask__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_mir0Mask__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_mir0Mask ti_sysbios_family_arm_a8_intcps_Hwi_mir0Mask__C = (xdc_Bits32)0xffffffff;

/* mir1Mask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_mir1Mask__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_mir1Mask__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_mir1Mask ti_sysbios_family_arm_a8_intcps_Hwi_mir1Mask__C = (xdc_Bits32)0xffffffff;

/* mir2Mask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_mir2Mask__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_mir2Mask__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_mir2Mask ti_sysbios_family_arm_a8_intcps_Hwi_mir2Mask__C = (xdc_Bits32)0xffffffff;

/* mir3Mask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_mir3Mask__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_mir3Mask__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_mir3Mask ti_sysbios_family_arm_a8_intcps_Hwi_mir3Mask__C = (xdc_Bits32)0xffffffff;

/* enableAsidTagging__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_enableAsidTagging__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_enableAsidTagging__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_enableAsidTagging ti_sysbios_family_arm_a8_intcps_Hwi_enableAsidTagging__C = 0;

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_E_alreadyDefined ti_sysbios_family_arm_a8_intcps_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3960) << 16 | 0);

/* E_handleNotFound__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_E_handleNotFound__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_E_handleNotFound__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_E_handleNotFound ti_sysbios_family_arm_a8_intcps_Hwi_E_handleNotFound__C = (((xdc_runtime_Error_Id)4010) << 16 | 0);

/* E_undefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_E_undefined__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_E_undefined__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_E_undefined ti_sysbios_family_arm_a8_intcps_Hwi_E_undefined__C = (((xdc_runtime_Error_Id)4055) << 16 | 0);

/* E_badIntNum__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_E_badIntNum__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_E_badIntNum__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_E_badIntNum ti_sysbios_family_arm_a8_intcps_Hwi_E_badIntNum__C = (((xdc_runtime_Error_Id)4094) << 16 | 0);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_LM_begin ti_sysbios_family_arm_a8_intcps_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)5962) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_LD_end ti_sysbios_family_arm_a8_intcps_Hwi_LD_end__C = (((xdc_runtime_Log_Event)6032) << 16 | 512);

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_swiDisable ti_sysbios_family_arm_a8_intcps_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_swiRestoreHwi ti_sysbios_family_arm_a8_intcps_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_taskDisable ti_sysbios_family_arm_a8_intcps_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_taskRestoreHwi ti_sysbios_family_arm_a8_intcps_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_hooks__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_hooks ti_sysbios_family_arm_a8_intcps_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.a8.ti81xx.TimerSupport INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State_0_intNums__A */
__T1_ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__intNums ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State_0_intNums__A[6] = {
    (xdc_UInt8)0x44,  /* [0] */
    (xdc_UInt8)0x45,  /* [1] */
    (xdc_UInt8)0x5c,  /* [2] */
    (xdc_UInt8)0x5d,  /* [3] */
    (xdc_UInt8)0x5e,  /* [4] */
    (xdc_UInt8)0x5f,  /* [5] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__ ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__ ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__state__V = {
    ((void*)ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State_0_intNums__A),  /* intNums */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsEnabled ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsIncluded ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsMask ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gateObj ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gatePrms ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__id__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__id ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__id__C = (xdc_Bits16)0x803a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerDefined ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerObj ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn0 ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn1 ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn2 ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn4 ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn8 ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDoneFxn ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__count__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__count ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__heap__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__heap ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__sizeof ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__table__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__table ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.exc.Exception INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excActive ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excContext ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_exc_Exception_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStackBuffers ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A[8192];

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A */
__T2_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A[1] = {
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_exc_Exception_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_exc_Exception_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V = {
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A),  /* excStackBuffers */
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A),  /* excStack */
    (xdc_SizeT)0x2000,  /* excStackSize */
};

/* --> ti_sysbios_family_arm_exc_Exception_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_excHookFuncs__A, ".const:ti_sysbios_family_arm_exc_Exception_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_exc_Exception_excHookFuncs ti_sysbios_family_arm_exc_Exception_excHookFuncs__A[1] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_exc_Exception_ExcContext*))0),  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__diagsMask__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsMask ti_sysbios_family_arm_exc_Exception_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__gateObj__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__gateObj ti_sysbios_family_arm_exc_Exception_Module__gateObj__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__gatePrms__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__gatePrms ti_sysbios_family_arm_exc_Exception_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__id__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__id ti_sysbios_family_arm_exc_Exception_Module__id__C = (xdc_Bits16)0x8030;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerDefined ti_sysbios_family_arm_exc_Exception_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerObj__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerObj ti_sysbios_family_arm_exc_Exception_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Object__count__C, ".const:ti_sysbios_family_arm_exc_Exception_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__count ti_sysbios_family_arm_exc_Exception_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Object__heap__C, ".const:ti_sysbios_family_arm_exc_Exception_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__heap ti_sysbios_family_arm_exc_Exception_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Object__sizeof__C, ".const:ti_sysbios_family_arm_exc_Exception_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__sizeof ti_sysbios_family_arm_exc_Exception_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Object__table__C, ".const:ti_sysbios_family_arm_exc_Exception_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__table ti_sysbios_family_arm_exc_Exception_Object__table__C = 0;

/* E_swi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_E_swi__C, ".const:ti_sysbios_family_arm_exc_Exception_E_swi__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_swi ti_sysbios_family_arm_exc_Exception_E_swi__C = (((xdc_runtime_Error_Id)4134) << 16 | 0);

/* E_prefetchAbort__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_E_prefetchAbort__C, ".const:ti_sysbios_family_arm_exc_Exception_E_prefetchAbort__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_prefetchAbort ti_sysbios_family_arm_exc_Exception_E_prefetchAbort__C = (((xdc_runtime_Error_Id)4167) << 16 | 0);

/* E_dataAbort__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_E_dataAbort__C, ".const:ti_sysbios_family_arm_exc_Exception_E_dataAbort__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_dataAbort ti_sysbios_family_arm_exc_Exception_E_dataAbort__C = (((xdc_runtime_Error_Id)4210) << 16 | 0);

/* E_undefinedInstruction__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction__C, ".const:ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction__C = (((xdc_runtime_Error_Id)4249) << 16 | 0);

/* enableDecode__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_enableDecode__C, ".const:ti_sysbios_family_arm_exc_Exception_enableDecode__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_enableDecode ti_sysbios_family_arm_exc_Exception_enableDecode__C = 1;

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_excHookFunc__C, ".const:ti_sysbios_family_arm_exc_Exception_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_excHookFunc ti_sysbios_family_arm_exc_Exception_excHookFunc__C = ((CT__ti_sysbios_family_arm_exc_Exception_excHookFunc)0);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_excHookFuncs__C, ".const:ti_sysbios_family_arm_exc_Exception_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_excHookFuncs ti_sysbios_family_arm_exc_Exception_excHookFuncs__C = ((CT__ti_sysbios_family_arm_exc_Exception_excHookFuncs)ti_sysbios_family_arm_exc_Exception_excHookFuncs__A);


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8032;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8033;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2509) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Cache INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Cache_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsEnabled ti_sysbios_hal_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Cache_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsIncluded ti_sysbios_hal_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__diagsMask__C, ".const:ti_sysbios_hal_Cache_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsMask ti_sysbios_hal_Cache_Module__diagsMask__C = ((CT__ti_sysbios_hal_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__gateObj__C, ".const:ti_sysbios_hal_Cache_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__gateObj ti_sysbios_hal_Cache_Module__gateObj__C = ((CT__ti_sysbios_hal_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__gatePrms__C, ".const:ti_sysbios_hal_Cache_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__gatePrms ti_sysbios_hal_Cache_Module__gatePrms__C = ((CT__ti_sysbios_hal_Cache_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__id__C, ".const:ti_sysbios_hal_Cache_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__id ti_sysbios_hal_Cache_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerDefined__C, ".const:ti_sysbios_hal_Cache_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerDefined ti_sysbios_hal_Cache_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerObj__C, ".const:ti_sysbios_hal_Cache_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerObj ti_sysbios_hal_Cache_Module__loggerObj__C = ((CT__ti_sysbios_hal_Cache_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn0 ti_sysbios_hal_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn1 ti_sysbios_hal_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn2 ti_sysbios_hal_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn4 ti_sysbios_hal_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn8 ti_sysbios_hal_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Cache_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__startupDoneFxn ti_sysbios_hal_Cache_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Cache_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__count__C, ".const:ti_sysbios_hal_Cache_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Object__count ti_sysbios_hal_Cache_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__heap__C, ".const:ti_sysbios_hal_Cache_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Object__heap ti_sysbios_hal_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__sizeof__C, ".const:ti_sysbios_hal_Cache_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Object__sizeof ti_sysbios_hal_Cache_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__table__C, ".const:ti_sysbios_hal_Cache_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Object__table ti_sysbios_hal_Cache_Object__table__C = 0;


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Core_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__diagsEnabled ti_sysbios_hal_Core_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Core_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__diagsIncluded ti_sysbios_hal_Core_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__diagsMask__C, ".const:ti_sysbios_hal_Core_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__diagsMask ti_sysbios_hal_Core_Module__diagsMask__C = ((CT__ti_sysbios_hal_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__gateObj__C, ".const:ti_sysbios_hal_Core_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__gateObj ti_sysbios_hal_Core_Module__gateObj__C = ((CT__ti_sysbios_hal_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__gatePrms__C, ".const:ti_sysbios_hal_Core_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__gatePrms ti_sysbios_hal_Core_Module__gatePrms__C = ((CT__ti_sysbios_hal_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__id__C, ".const:ti_sysbios_hal_Core_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__id ti_sysbios_hal_Core_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerDefined__C, ".const:ti_sysbios_hal_Core_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerDefined ti_sysbios_hal_Core_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerObj__C, ".const:ti_sysbios_hal_Core_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerObj ti_sysbios_hal_Core_Module__loggerObj__C = ((CT__ti_sysbios_hal_Core_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn0 ti_sysbios_hal_Core_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Core_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn1 ti_sysbios_hal_Core_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Core_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn2 ti_sysbios_hal_Core_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Core_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn4 ti_sysbios_hal_Core_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Core_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn8 ti_sysbios_hal_Core_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Core_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Core_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__startupDoneFxn ti_sysbios_hal_Core_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Core_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Object__count__C, ".const:ti_sysbios_hal_Core_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Core_Object__count ti_sysbios_hal_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Object__heap__C, ".const:ti_sysbios_hal_Core_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Core_Object__heap ti_sysbios_hal_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Object__sizeof__C, ".const:ti_sysbios_hal_Core_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Core_Object__sizeof ti_sysbios_hal_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Object__table__C, ".const:ti_sysbios_hal_Core_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Core_Object__table ti_sysbios_hal_Core_Object__table__C = 0;

/* numCores__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_numCores__C, ".const:ti_sysbios_hal_Core_numCores__C");
__FAR__ const CT__ti_sysbios_hal_Core_numCores ti_sysbios_hal_Core_numCores__C = (xdc_UInt)0x1;


/*
 * ======== ti.sysbios.hal.CoreNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__diagsEnabled__C, ".const:ti_sysbios_hal_CoreNull_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__diagsEnabled ti_sysbios_hal_CoreNull_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__diagsIncluded__C, ".const:ti_sysbios_hal_CoreNull_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__diagsIncluded ti_sysbios_hal_CoreNull_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__diagsMask__C, ".const:ti_sysbios_hal_CoreNull_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__diagsMask ti_sysbios_hal_CoreNull_Module__diagsMask__C = ((CT__ti_sysbios_hal_CoreNull_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__gateObj__C, ".const:ti_sysbios_hal_CoreNull_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__gateObj ti_sysbios_hal_CoreNull_Module__gateObj__C = ((CT__ti_sysbios_hal_CoreNull_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__gatePrms__C, ".const:ti_sysbios_hal_CoreNull_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__gatePrms ti_sysbios_hal_CoreNull_Module__gatePrms__C = ((CT__ti_sysbios_hal_CoreNull_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__id__C, ".const:ti_sysbios_hal_CoreNull_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__id ti_sysbios_hal_CoreNull_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerDefined__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerDefined ti_sysbios_hal_CoreNull_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerObj__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerObj ti_sysbios_hal_CoreNull_Module__loggerObj__C = ((CT__ti_sysbios_hal_CoreNull_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerFxn0__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn0 ti_sysbios_hal_CoreNull_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_CoreNull_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerFxn1__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn1 ti_sysbios_hal_CoreNull_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_CoreNull_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerFxn2__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn2 ti_sysbios_hal_CoreNull_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_CoreNull_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerFxn4__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn4 ti_sysbios_hal_CoreNull_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_CoreNull_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__loggerFxn8__C, ".const:ti_sysbios_hal_CoreNull_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn8 ti_sysbios_hal_CoreNull_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_CoreNull_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_CoreNull_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__startupDoneFxn ti_sysbios_hal_CoreNull_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_CoreNull_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Object__count__C, ".const:ti_sysbios_hal_CoreNull_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Object__count ti_sysbios_hal_CoreNull_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Object__heap__C, ".const:ti_sysbios_hal_CoreNull_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Object__heap ti_sysbios_hal_CoreNull_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Object__sizeof__C, ".const:ti_sysbios_hal_CoreNull_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Object__sizeof ti_sysbios_hal_CoreNull_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_Object__table__C, ".const:ti_sysbios_hal_CoreNull_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_Object__table ti_sysbios_hal_CoreNull_Object__table__C = 0;

/* numCores__C */
#pragma DATA_SECTION(ti_sysbios_hal_CoreNull_numCores__C, ".const:ti_sysbios_hal_CoreNull_numCores__C");
__FAR__ const CT__ti_sysbios_hal_CoreNull_numCores ti_sysbios_hal_CoreNull_numCores__C = (xdc_UInt)0x1;


/*
 * ======== ti.sysbios.hal.Core_CoreProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[28] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[0],  /* pi */
    },
    {/* instance#1 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[1],  /* pi */
    },
    {/* instance#2 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[2],  /* pi */
    },
    {/* instance#3 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[3],  /* pi */
    },
    {/* instance#4 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[4],  /* pi */
    },
    {/* instance#5 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[5],  /* pi */
    },
    {/* instance#6 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[6],  /* pi */
    },
    {/* instance#7 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[7],  /* pi */
    },
    {/* instance#8 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[8],  /* pi */
    },
    {/* instance#9 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[9],  /* pi */
    },
    {/* instance#10 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[10],  /* pi */
    },
    {/* instance#11 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[11],  /* pi */
    },
    {/* instance#12 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[12],  /* pi */
    },
    {/* instance#13 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[13],  /* pi */
    },
    {/* instance#14 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[14],  /* pi */
    },
    {/* instance#15 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[15],  /* pi */
    },
    {/* instance#16 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[16],  /* pi */
    },
    {/* instance#17 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[17],  /* pi */
    },
    {/* instance#18 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[18],  /* pi */
    },
    {/* instance#19 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[19],  /* pi */
    },
    {/* instance#20 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[20],  /* pi */
    },
    {/* instance#21 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[21],  /* pi */
    },
    {/* instance#22 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[22],  /* pi */
    },
    {/* instance#23 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[23],  /* pi */
    },
    {/* instance#24 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[24],  /* pi */
    },
    {/* instance#25 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[25],  /* pi */
    },
    {/* instance#26 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[26],  /* pi */
    },
    {/* instance#27 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[27],  /* pi */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 28;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = ti_sysbios_hal_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)3923) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = 0;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8035;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)3160) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)3196) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)3241) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4389) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)3132) << 16 | 16);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0x10c6,  /* timeout */
        (xdc_UInt32)0x10c6,  /* currTimeout */
        (xdc_UInt32)4294.967296,  /* period */
        1,  /* active */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_a8_TimestampProvider_autoRefreshFxn__I)),  /* fxn */
        ((xdc_UArg)0),  /* arg */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_timers_dmtimer_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = ti_sysbios_knl_Clock_Object__table__V;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)5017) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)5039) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5057) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)487) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)568) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)5089) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5143) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)638) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)685) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)724) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)767) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)830) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)PIMMainIdle)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[2] = {
    {/* instance#0 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY_PRIORITY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#1 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY_PRIORITY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[1].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[1].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = ti_sysbios_knl_Semaphore_Object__table__V;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5224) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5254) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)978) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1033) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)767) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1098) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1152) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5297) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5344) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5362) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1246) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1303) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)taskfnPIMRun)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        0,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5402) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5470) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5515) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5556) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5588) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5636) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5692) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5723) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5806) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)5892) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3798) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3841) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)3892) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1352) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1421) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1475) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1529) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1592) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1642) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1677) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1710) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1794) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.timers.dmtimer.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_dmtimer_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_timers_dmtimer_Timer_Params ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_timers_dmtimer_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        (xdc_Bits8)0x0,  /* idlemode */
        (xdc_Bits8)0x0,  /* emufree */
        (xdc_Bits8)0x1,  /* softreset */
    },  /* tiocpCfg */
    {
        (xdc_Bits8)0x0,  /* mat_it_ena */
        (xdc_Bits8)0x1,  /* ovf_it_ena */
        (xdc_Bits8)0x0,  /* tcar_it_ena */
    },  /* tier */
    {
        (xdc_Bits8)0x0,  /* mat_wup_ena */
        (xdc_Bits8)0x0,  /* ovf_wup_ena */
        (xdc_Bits8)0x0,  /* tcar_wup_ena */
    },  /* twer */
    {
        (xdc_Bits32)0x0,  /* ptv */
        (xdc_Bits8)0x0,  /* pre */
        (xdc_Bits8)0x0,  /* ce */
        (xdc_Bits8)0x0,  /* scpwm */
        (xdc_Bits16)0x0,  /* tcm */
        (xdc_Bits16)0x0,  /* trg */
        (xdc_Bits8)0x0,  /* pt */
        (xdc_Bits8)0x0,  /* captmode */
        (xdc_Bits8)0x0,  /* gpocfg */
    },  /* tclr */
    {
        (xdc_Bits8)0x0,  /* sft */
        (xdc_Bits8)0x0,  /* posted */
    },  /* tsicr */
    (xdc_UInt32)0x0,  /* tmar */
    (xdc_Int)(-0x0 - 1),  /* intNum */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    ((ti_sysbios_hal_Hwi_Params*)0),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_timers_dmtimer_Timer_Module__ ti_sysbios_timers_dmtimer_Timer_Module__root__V = {
    {&ti_sysbios_timers_dmtimer_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_timers_dmtimer_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_timers_dmtimer_Timer_Object__ ti_sysbios_timers_dmtimer_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        (xdc_UInt)0x1,  /* tiocpCfg */
        (xdc_UInt)0x0,  /* tmar */
        (xdc_UInt)0x2,  /* tier */
        (xdc_UInt)0x0,  /* twer */
        (xdc_UInt)0x0,  /* tclr */
        (xdc_UInt)0x0,  /* tsicr */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x3e8,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
        (xdc_UInt)0x44,  /* intNum */
        (xdc_Int)(-0x0 - 1),  /* eventId */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[27],  /* hwi */
        (xdc_UInt)0x0,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        1,  /* useDefaultEventId */
    },
};

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__intFreqs ti_sysbios_timers_dmtimer_Timer_Module_State_0_intFreqs__A[6] = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x8000,  /* lo */
    },  /* [0] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x8000,  /* lo */
    },  /* [1] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x8000,  /* lo */
    },  /* [2] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x8000,  /* lo */
    },  /* [3] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x8000,  /* lo */
    },  /* [4] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x8000,  /* lo */
    },  /* [5] */
};

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__device ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A[6] = {
    {
        (xdc_Int)0x44,  /* intNum */
        (xdc_Int)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x48040000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_Int)0x45,  /* intNum */
        (xdc_Int)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x48042000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_Int)0x5c,  /* intNum */
        (xdc_Int)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x48044000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_Int)0x5d,  /* intNum */
        (xdc_Int)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x48046000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_Int)0x5e,  /* intNum */
        (xdc_Int)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x48048000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_Int)0x5f,  /* intNum */
        (xdc_Int)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x4804a000)),  /* baseAddr */
    },  /* [5] */
};

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__handles ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A[6] = {
    (ti_sysbios_timers_dmtimer_Timer_Handle)&ti_sysbios_timers_dmtimer_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_timers_dmtimer_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_timers_dmtimer_Timer_Module_State__ ti_sysbios_timers_dmtimer_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_timers_dmtimer_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_timers_dmtimer_Timer_Module_State__ ti_sysbios_timers_dmtimer_Timer_Module__state__V = {
    (xdc_Bits32)0x3e,  /* availMask */
    ((void*)ti_sysbios_timers_dmtimer_Timer_Module_State_0_intFreqs__A),  /* intFreqs */
    ((void*)ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A),  /* handles */
    1,  /* firstInit */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__diagsMask__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__diagsMask ti_sysbios_timers_dmtimer_Timer_Module__diagsMask__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__gateObj__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__gateObj ti_sysbios_timers_dmtimer_Timer_Module__gateObj__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__gatePrms__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__gatePrms ti_sysbios_timers_dmtimer_Timer_Module__gatePrms__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__id__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__id ti_sysbios_timers_dmtimer_Timer_Module__id__C = (xdc_Bits16)0x8038;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerObj__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerObj ti_sysbios_timers_dmtimer_Timer_Module__loggerObj__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__count__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Object__count ti_sysbios_timers_dmtimer_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__heap__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Object__heap ti_sysbios_timers_dmtimer_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__sizeof__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Object__sizeof ti_sysbios_timers_dmtimer_Timer_Object__sizeof__C = sizeof(ti_sysbios_timers_dmtimer_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__table__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Object__table ti_sysbios_timers_dmtimer_Timer_Object__table__C = ti_sysbios_timers_dmtimer_Timer_Object__table__V;

/* A_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_A_notAvailable__C, ".const:ti_sysbios_timers_dmtimer_Timer_A_notAvailable__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_A_notAvailable ti_sysbios_timers_dmtimer_Timer_A_notAvailable__C = (((xdc_runtime_Assert_Id)3503) << 16 | 16);

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_E_invalidTimer__C, ".const:ti_sysbios_timers_dmtimer_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_invalidTimer ti_sysbios_timers_dmtimer_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4425) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_E_notAvailable__C, ".const:ti_sysbios_timers_dmtimer_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_notAvailable ti_sysbios_timers_dmtimer_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4461) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_E_cannotSupport__C, ".const:ti_sysbios_timers_dmtimer_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_cannotSupport ti_sysbios_timers_dmtimer_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4500) << 16 | 0);

/* E_freqMismatch__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_E_freqMismatch__C, ".const:ti_sysbios_timers_dmtimer_Timer_E_freqMismatch__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_freqMismatch ti_sysbios_timers_dmtimer_Timer_E_freqMismatch__C = (((xdc_runtime_Error_Id)4558) << 16 | 0);

/* E_badIntNum__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_E_badIntNum__C, ".const:ti_sysbios_timers_dmtimer_Timer_E_badIntNum__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_badIntNum ti_sysbios_timers_dmtimer_Timer_E_badIntNum__C = (((xdc_runtime_Error_Id)4693) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_anyMask__C, ".const:ti_sysbios_timers_dmtimer_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_anyMask ti_sysbios_timers_dmtimer_Timer_anyMask__C = (xdc_Bits32)0x3f;

/* checkFrequency__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_checkFrequency__C, ".const:ti_sysbios_timers_dmtimer_Timer_checkFrequency__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_checkFrequency ti_sysbios_timers_dmtimer_Timer_checkFrequency__C = 1;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_startupNeeded__C, ".const:ti_sysbios_timers_dmtimer_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_startupNeeded ti_sysbios_timers_dmtimer_Timer_startupNeeded__C = 1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_numTimerDevices__C, ".const:ti_sysbios_timers_dmtimer_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_numTimerDevices ti_sysbios_timers_dmtimer_Timer_numTimerDevices__C = (xdc_Int)0x6;


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3558) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3580) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3584) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3618) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.GateNull INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_GateNull_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__PARAMS__C, ".const:xdc_runtime_GateNull_Object__PARAMS__C");
__FAR__ const xdc_runtime_GateNull_Params xdc_runtime_GateNull_Object__PARAMS__C = {
    sizeof (xdc_runtime_GateNull_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_GateNull_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_GateNull_Module__ xdc_runtime_GateNull_Module__root__V = {
    {&xdc_runtime_GateNull_Module__root__V.link,  /* link.next */
    &xdc_runtime_GateNull_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__diagsEnabled__C, ".const:xdc_runtime_GateNull_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__diagsEnabled xdc_runtime_GateNull_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__diagsIncluded__C, ".const:xdc_runtime_GateNull_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__diagsIncluded xdc_runtime_GateNull_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__diagsMask__C, ".const:xdc_runtime_GateNull_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__diagsMask xdc_runtime_GateNull_Module__diagsMask__C = ((CT__xdc_runtime_GateNull_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__gateObj__C, ".const:xdc_runtime_GateNull_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__gateObj xdc_runtime_GateNull_Module__gateObj__C = ((CT__xdc_runtime_GateNull_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__gatePrms__C, ".const:xdc_runtime_GateNull_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__gatePrms xdc_runtime_GateNull_Module__gatePrms__C = ((CT__xdc_runtime_GateNull_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__id__C, ".const:xdc_runtime_GateNull_Module__id__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__id xdc_runtime_GateNull_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerDefined__C, ".const:xdc_runtime_GateNull_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerDefined xdc_runtime_GateNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerObj__C, ".const:xdc_runtime_GateNull_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerObj xdc_runtime_GateNull_Module__loggerObj__C = ((CT__xdc_runtime_GateNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerFxn0__C, ".const:xdc_runtime_GateNull_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn0 xdc_runtime_GateNull_Module__loggerFxn0__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerFxn1__C, ".const:xdc_runtime_GateNull_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn1 xdc_runtime_GateNull_Module__loggerFxn1__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerFxn2__C, ".const:xdc_runtime_GateNull_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn2 xdc_runtime_GateNull_Module__loggerFxn2__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerFxn4__C, ".const:xdc_runtime_GateNull_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn4 xdc_runtime_GateNull_Module__loggerFxn4__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__loggerFxn8__C, ".const:xdc_runtime_GateNull_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__loggerFxn8 xdc_runtime_GateNull_Module__loggerFxn8__C = ((CT__xdc_runtime_GateNull_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Module__startupDoneFxn__C, ".const:xdc_runtime_GateNull_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_GateNull_Module__startupDoneFxn xdc_runtime_GateNull_Module__startupDoneFxn__C = ((CT__xdc_runtime_GateNull_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__count__C, ".const:xdc_runtime_GateNull_Object__count__C");
__FAR__ const CT__xdc_runtime_GateNull_Object__count xdc_runtime_GateNull_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__heap__C, ".const:xdc_runtime_GateNull_Object__heap__C");
__FAR__ const CT__xdc_runtime_GateNull_Object__heap xdc_runtime_GateNull_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__sizeof__C, ".const:xdc_runtime_GateNull_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_GateNull_Object__sizeof xdc_runtime_GateNull_Object__sizeof__C = sizeof(xdc_runtime_GateNull_Object__);

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__table__C, ".const:xdc_runtime_GateNull_Object__table__C");
__FAR__ const CT__xdc_runtime_GateNull_Object__table xdc_runtime_GateNull_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4841) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4865) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4886) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4905) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4922) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4936) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4952) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4959) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4970) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4980) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4999) << 16 | 32768);


/*
 * ======== xdc.runtime.LoggerBuf INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__PARAMS__C, ".const:xdc_runtime_LoggerBuf_Object__PARAMS__C");
__FAR__ const xdc_runtime_LoggerBuf_Params xdc_runtime_LoggerBuf_Object__PARAMS__C = {
    sizeof (xdc_runtime_LoggerBuf_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_LoggerBuf_Object__PARAMS__C.__iprms, /* instance */
    (xdc_Int)0x40,  /* numEntries */
    xdc_runtime_LoggerBuf_BufType_CIRCULAR,  /* bufType */
    0,  /* exitFlush */
    0,  /* bufHeap */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[16];

/* Module__root__V */
xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V = {
    {&xdc_runtime_LoggerBuf_Module__root__V.link,  /* link.next */
    &xdc_runtime_LoggerBuf_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_LoggerBuf_Module__FXNS__C,
        0,  /* bufHeap */
        ((void*)xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A),  /* entryArr */
        ((xdc_runtime_LoggerBuf_Entry*)((void*)&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* curEntry */
        ((xdc_runtime_LoggerBuf_Entry*)((void*)&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[15])),  /* endEntry */
        ((xdc_runtime_LoggerBuf_Entry*)((void*)&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* readEntry */
        (xdc_Bits32)0x1,  /* serial */
        (xdc_Int16)0x10,  /* numEntries */
        (xdc_Int8)0x0,  /* advance */
        0,  /* enabled */
        0,  /* flush */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_LoggerBuf_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V __attribute__ ((section(".data_xdc_runtime_LoggerBuf_Module__state__V")));
#endif
#endif
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V = {
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsEnabled__C, ".const:xdc_runtime_LoggerBuf_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsEnabled xdc_runtime_LoggerBuf_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsIncluded__C, ".const:xdc_runtime_LoggerBuf_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsIncluded xdc_runtime_LoggerBuf_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsMask__C, ".const:xdc_runtime_LoggerBuf_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsMask xdc_runtime_LoggerBuf_Module__diagsMask__C = ((CT__xdc_runtime_LoggerBuf_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__gateObj__C, ".const:xdc_runtime_LoggerBuf_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gateObj xdc_runtime_LoggerBuf_Module__gateObj__C = ((CT__xdc_runtime_LoggerBuf_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__gatePrms__C, ".const:xdc_runtime_LoggerBuf_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gatePrms xdc_runtime_LoggerBuf_Module__gatePrms__C = ((CT__xdc_runtime_LoggerBuf_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__id__C, ".const:xdc_runtime_LoggerBuf_Module__id__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__id xdc_runtime_LoggerBuf_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerDefined__C, ".const:xdc_runtime_LoggerBuf_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerDefined xdc_runtime_LoggerBuf_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerObj__C, ".const:xdc_runtime_LoggerBuf_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerObj xdc_runtime_LoggerBuf_Module__loggerObj__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn0__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn1__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn2__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn4__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn8__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__startupDoneFxn__C, ".const:xdc_runtime_LoggerBuf_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__startupDoneFxn xdc_runtime_LoggerBuf_Module__startupDoneFxn__C = ((CT__xdc_runtime_LoggerBuf_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__count__C, ".const:xdc_runtime_LoggerBuf_Object__count__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__count xdc_runtime_LoggerBuf_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__heap__C, ".const:xdc_runtime_LoggerBuf_Object__heap__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__heap xdc_runtime_LoggerBuf_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__sizeof__C, ".const:xdc_runtime_LoggerBuf_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__sizeof xdc_runtime_LoggerBuf_Object__sizeof__C = sizeof(xdc_runtime_LoggerBuf_Object__);

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__table__C, ".const:xdc_runtime_LoggerBuf_Object__table__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__table xdc_runtime_LoggerBuf_Object__table__C = xdc_runtime_LoggerBuf_Object__table__V;

/* filterByLevel__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_filterByLevel__C, ".const:xdc_runtime_LoggerBuf_filterByLevel__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_filterByLevel xdc_runtime_LoggerBuf_filterByLevel__C = 0;

/* E_badLevel__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_E_badLevel__C, ".const:xdc_runtime_LoggerBuf_E_badLevel__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_E_badLevel xdc_runtime_LoggerBuf_E_badLevel__C = (((xdc_runtime_Error_Id)3626) << 16 | 0);

/* enableFlush__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_enableFlush__C, ".const:xdc_runtime_LoggerBuf_enableFlush__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_enableFlush xdc_runtime_LoggerBuf_enableFlush__C = 0;

/* statusLogger__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_statusLogger__C, ".const:xdc_runtime_LoggerBuf_statusLogger__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_statusLogger xdc_runtime_LoggerBuf_statusLogger__C = 0;

/* level1Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level1Mask__C, ".const:xdc_runtime_LoggerBuf_level1Mask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_level1Mask xdc_runtime_LoggerBuf_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level2Mask__C, ".const:xdc_runtime_LoggerBuf_level2Mask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_level2Mask xdc_runtime_LoggerBuf_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level3Mask__C, ".const:xdc_runtime_LoggerBuf_level3Mask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_level3Mask xdc_runtime_LoggerBuf_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level4Mask__C, ".const:xdc_runtime_LoggerBuf_level4Mask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_level4Mask xdc_runtime_LoggerBuf_level4Mask__C = (xdc_Bits16)0xff87;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x4090;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x4090;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_a8_Cache_startup__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [2] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[14] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_LoggerBuf_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_a8_Mmu_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_a8_TimestampProvider_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_a8_intcps_Hwi_Module_startup__E)),  /* [10] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_exc_Exception_Module_startup__E)),  /* [11] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Module_startup__E)),  /* [12] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_startup__E)),  /* [13] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[14] = {
    1,  /* [0] */
    1,  /* [1] */
    1,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    1,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
    0,  /* [13] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {3, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_SysMin_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x200;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x4;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6888] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6e,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x6c,  /* [404] */
    (xdc_Char)0x6c,  /* [405] */
    (xdc_Char)0x50,  /* [406] */
    (xdc_Char)0x6f,  /* [407] */
    (xdc_Char)0x69,  /* [408] */
    (xdc_Char)0x6e,  /* [409] */
    (xdc_Char)0x74,  /* [410] */
    (xdc_Char)0x65,  /* [411] */
    (xdc_Char)0x72,  /* [412] */
    (xdc_Char)0x3a,  /* [413] */
    (xdc_Char)0x20,  /* [414] */
    (xdc_Char)0x50,  /* [415] */
    (xdc_Char)0x6f,  /* [416] */
    (xdc_Char)0x69,  /* [417] */
    (xdc_Char)0x6e,  /* [418] */
    (xdc_Char)0x74,  /* [419] */
    (xdc_Char)0x65,  /* [420] */
    (xdc_Char)0x72,  /* [421] */
    (xdc_Char)0x20,  /* [422] */
    (xdc_Char)0x69,  /* [423] */
    (xdc_Char)0x73,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x6e,  /* [426] */
    (xdc_Char)0x75,  /* [427] */
    (xdc_Char)0x6c,  /* [428] */
    (xdc_Char)0x6c,  /* [429] */
    (xdc_Char)0x0,  /* [430] */
    (xdc_Char)0x41,  /* [431] */
    (xdc_Char)0x5f,  /* [432] */
    (xdc_Char)0x69,  /* [433] */
    (xdc_Char)0x6e,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x61,  /* [436] */
    (xdc_Char)0x6c,  /* [437] */
    (xdc_Char)0x69,  /* [438] */
    (xdc_Char)0x64,  /* [439] */
    (xdc_Char)0x52,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x67,  /* [442] */
    (xdc_Char)0x69,  /* [443] */
    (xdc_Char)0x6f,  /* [444] */
    (xdc_Char)0x6e,  /* [445] */
    (xdc_Char)0x49,  /* [446] */
    (xdc_Char)0x64,  /* [447] */
    (xdc_Char)0x3a,  /* [448] */
    (xdc_Char)0x20,  /* [449] */
    (xdc_Char)0x4d,  /* [450] */
    (xdc_Char)0x50,  /* [451] */
    (xdc_Char)0x55,  /* [452] */
    (xdc_Char)0x20,  /* [453] */
    (xdc_Char)0x52,  /* [454] */
    (xdc_Char)0x65,  /* [455] */
    (xdc_Char)0x67,  /* [456] */
    (xdc_Char)0x69,  /* [457] */
    (xdc_Char)0x6f,  /* [458] */
    (xdc_Char)0x6e,  /* [459] */
    (xdc_Char)0x20,  /* [460] */
    (xdc_Char)0x6e,  /* [461] */
    (xdc_Char)0x75,  /* [462] */
    (xdc_Char)0x6d,  /* [463] */
    (xdc_Char)0x62,  /* [464] */
    (xdc_Char)0x65,  /* [465] */
    (xdc_Char)0x72,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x70,  /* [468] */
    (xdc_Char)0x61,  /* [469] */
    (xdc_Char)0x73,  /* [470] */
    (xdc_Char)0x73,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x64,  /* [473] */
    (xdc_Char)0x20,  /* [474] */
    (xdc_Char)0x69,  /* [475] */
    (xdc_Char)0x73,  /* [476] */
    (xdc_Char)0x20,  /* [477] */
    (xdc_Char)0x69,  /* [478] */
    (xdc_Char)0x6e,  /* [479] */
    (xdc_Char)0x76,  /* [480] */
    (xdc_Char)0x61,  /* [481] */
    (xdc_Char)0x6c,  /* [482] */
    (xdc_Char)0x69,  /* [483] */
    (xdc_Char)0x64,  /* [484] */
    (xdc_Char)0x2e,  /* [485] */
    (xdc_Char)0x0,  /* [486] */
    (xdc_Char)0x41,  /* [487] */
    (xdc_Char)0x5f,  /* [488] */
    (xdc_Char)0x63,  /* [489] */
    (xdc_Char)0x6c,  /* [490] */
    (xdc_Char)0x6f,  /* [491] */
    (xdc_Char)0x63,  /* [492] */
    (xdc_Char)0x6b,  /* [493] */
    (xdc_Char)0x44,  /* [494] */
    (xdc_Char)0x69,  /* [495] */
    (xdc_Char)0x73,  /* [496] */
    (xdc_Char)0x61,  /* [497] */
    (xdc_Char)0x62,  /* [498] */
    (xdc_Char)0x6c,  /* [499] */
    (xdc_Char)0x65,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x3a,  /* [502] */
    (xdc_Char)0x20,  /* [503] */
    (xdc_Char)0x43,  /* [504] */
    (xdc_Char)0x61,  /* [505] */
    (xdc_Char)0x6e,  /* [506] */
    (xdc_Char)0x6e,  /* [507] */
    (xdc_Char)0x6f,  /* [508] */
    (xdc_Char)0x74,  /* [509] */
    (xdc_Char)0x20,  /* [510] */
    (xdc_Char)0x63,  /* [511] */
    (xdc_Char)0x72,  /* [512] */
    (xdc_Char)0x65,  /* [513] */
    (xdc_Char)0x61,  /* [514] */
    (xdc_Char)0x74,  /* [515] */
    (xdc_Char)0x65,  /* [516] */
    (xdc_Char)0x20,  /* [517] */
    (xdc_Char)0x61,  /* [518] */
    (xdc_Char)0x20,  /* [519] */
    (xdc_Char)0x63,  /* [520] */
    (xdc_Char)0x6c,  /* [521] */
    (xdc_Char)0x6f,  /* [522] */
    (xdc_Char)0x63,  /* [523] */
    (xdc_Char)0x6b,  /* [524] */
    (xdc_Char)0x20,  /* [525] */
    (xdc_Char)0x69,  /* [526] */
    (xdc_Char)0x6e,  /* [527] */
    (xdc_Char)0x73,  /* [528] */
    (xdc_Char)0x74,  /* [529] */
    (xdc_Char)0x61,  /* [530] */
    (xdc_Char)0x6e,  /* [531] */
    (xdc_Char)0x63,  /* [532] */
    (xdc_Char)0x65,  /* [533] */
    (xdc_Char)0x20,  /* [534] */
    (xdc_Char)0x77,  /* [535] */
    (xdc_Char)0x68,  /* [536] */
    (xdc_Char)0x65,  /* [537] */
    (xdc_Char)0x6e,  /* [538] */
    (xdc_Char)0x20,  /* [539] */
    (xdc_Char)0x42,  /* [540] */
    (xdc_Char)0x49,  /* [541] */
    (xdc_Char)0x4f,  /* [542] */
    (xdc_Char)0x53,  /* [543] */
    (xdc_Char)0x2e,  /* [544] */
    (xdc_Char)0x63,  /* [545] */
    (xdc_Char)0x6c,  /* [546] */
    (xdc_Char)0x6f,  /* [547] */
    (xdc_Char)0x63,  /* [548] */
    (xdc_Char)0x6b,  /* [549] */
    (xdc_Char)0x45,  /* [550] */
    (xdc_Char)0x6e,  /* [551] */
    (xdc_Char)0x61,  /* [552] */
    (xdc_Char)0x62,  /* [553] */
    (xdc_Char)0x6c,  /* [554] */
    (xdc_Char)0x65,  /* [555] */
    (xdc_Char)0x64,  /* [556] */
    (xdc_Char)0x20,  /* [557] */
    (xdc_Char)0x69,  /* [558] */
    (xdc_Char)0x73,  /* [559] */
    (xdc_Char)0x20,  /* [560] */
    (xdc_Char)0x66,  /* [561] */
    (xdc_Char)0x61,  /* [562] */
    (xdc_Char)0x6c,  /* [563] */
    (xdc_Char)0x73,  /* [564] */
    (xdc_Char)0x65,  /* [565] */
    (xdc_Char)0x2e,  /* [566] */
    (xdc_Char)0x0,  /* [567] */
    (xdc_Char)0x41,  /* [568] */
    (xdc_Char)0x5f,  /* [569] */
    (xdc_Char)0x62,  /* [570] */
    (xdc_Char)0x61,  /* [571] */
    (xdc_Char)0x64,  /* [572] */
    (xdc_Char)0x54,  /* [573] */
    (xdc_Char)0x68,  /* [574] */
    (xdc_Char)0x72,  /* [575] */
    (xdc_Char)0x65,  /* [576] */
    (xdc_Char)0x61,  /* [577] */
    (xdc_Char)0x64,  /* [578] */
    (xdc_Char)0x54,  /* [579] */
    (xdc_Char)0x79,  /* [580] */
    (xdc_Char)0x70,  /* [581] */
    (xdc_Char)0x65,  /* [582] */
    (xdc_Char)0x3a,  /* [583] */
    (xdc_Char)0x20,  /* [584] */
    (xdc_Char)0x43,  /* [585] */
    (xdc_Char)0x61,  /* [586] */
    (xdc_Char)0x6e,  /* [587] */
    (xdc_Char)0x6e,  /* [588] */
    (xdc_Char)0x6f,  /* [589] */
    (xdc_Char)0x74,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x63,  /* [592] */
    (xdc_Char)0x72,  /* [593] */
    (xdc_Char)0x65,  /* [594] */
    (xdc_Char)0x61,  /* [595] */
    (xdc_Char)0x74,  /* [596] */
    (xdc_Char)0x65,  /* [597] */
    (xdc_Char)0x2f,  /* [598] */
    (xdc_Char)0x64,  /* [599] */
    (xdc_Char)0x65,  /* [600] */
    (xdc_Char)0x6c,  /* [601] */
    (xdc_Char)0x65,  /* [602] */
    (xdc_Char)0x74,  /* [603] */
    (xdc_Char)0x65,  /* [604] */
    (xdc_Char)0x20,  /* [605] */
    (xdc_Char)0x61,  /* [606] */
    (xdc_Char)0x20,  /* [607] */
    (xdc_Char)0x43,  /* [608] */
    (xdc_Char)0x6c,  /* [609] */
    (xdc_Char)0x6f,  /* [610] */
    (xdc_Char)0x63,  /* [611] */
    (xdc_Char)0x6b,  /* [612] */
    (xdc_Char)0x20,  /* [613] */
    (xdc_Char)0x66,  /* [614] */
    (xdc_Char)0x72,  /* [615] */
    (xdc_Char)0x6f,  /* [616] */
    (xdc_Char)0x6d,  /* [617] */
    (xdc_Char)0x20,  /* [618] */
    (xdc_Char)0x48,  /* [619] */
    (xdc_Char)0x77,  /* [620] */
    (xdc_Char)0x69,  /* [621] */
    (xdc_Char)0x20,  /* [622] */
    (xdc_Char)0x6f,  /* [623] */
    (xdc_Char)0x72,  /* [624] */
    (xdc_Char)0x20,  /* [625] */
    (xdc_Char)0x53,  /* [626] */
    (xdc_Char)0x77,  /* [627] */
    (xdc_Char)0x69,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x74,  /* [630] */
    (xdc_Char)0x68,  /* [631] */
    (xdc_Char)0x72,  /* [632] */
    (xdc_Char)0x65,  /* [633] */
    (xdc_Char)0x61,  /* [634] */
    (xdc_Char)0x64,  /* [635] */
    (xdc_Char)0x2e,  /* [636] */
    (xdc_Char)0x0,  /* [637] */
    (xdc_Char)0x41,  /* [638] */
    (xdc_Char)0x5f,  /* [639] */
    (xdc_Char)0x6e,  /* [640] */
    (xdc_Char)0x75,  /* [641] */
    (xdc_Char)0x6c,  /* [642] */
    (xdc_Char)0x6c,  /* [643] */
    (xdc_Char)0x45,  /* [644] */
    (xdc_Char)0x76,  /* [645] */
    (xdc_Char)0x65,  /* [646] */
    (xdc_Char)0x6e,  /* [647] */
    (xdc_Char)0x74,  /* [648] */
    (xdc_Char)0x4d,  /* [649] */
    (xdc_Char)0x61,  /* [650] */
    (xdc_Char)0x73,  /* [651] */
    (xdc_Char)0x6b,  /* [652] */
    (xdc_Char)0x73,  /* [653] */
    (xdc_Char)0x3a,  /* [654] */
    (xdc_Char)0x20,  /* [655] */
    (xdc_Char)0x6f,  /* [656] */
    (xdc_Char)0x72,  /* [657] */
    (xdc_Char)0x4d,  /* [658] */
    (xdc_Char)0x61,  /* [659] */
    (xdc_Char)0x73,  /* [660] */
    (xdc_Char)0x6b,  /* [661] */
    (xdc_Char)0x20,  /* [662] */
    (xdc_Char)0x61,  /* [663] */
    (xdc_Char)0x6e,  /* [664] */
    (xdc_Char)0x64,  /* [665] */
    (xdc_Char)0x20,  /* [666] */
    (xdc_Char)0x61,  /* [667] */
    (xdc_Char)0x6e,  /* [668] */
    (xdc_Char)0x64,  /* [669] */
    (xdc_Char)0x4d,  /* [670] */
    (xdc_Char)0x61,  /* [671] */
    (xdc_Char)0x73,  /* [672] */
    (xdc_Char)0x6b,  /* [673] */
    (xdc_Char)0x20,  /* [674] */
    (xdc_Char)0x61,  /* [675] */
    (xdc_Char)0x72,  /* [676] */
    (xdc_Char)0x65,  /* [677] */
    (xdc_Char)0x20,  /* [678] */
    (xdc_Char)0x6e,  /* [679] */
    (xdc_Char)0x75,  /* [680] */
    (xdc_Char)0x6c,  /* [681] */
    (xdc_Char)0x6c,  /* [682] */
    (xdc_Char)0x2e,  /* [683] */
    (xdc_Char)0x0,  /* [684] */
    (xdc_Char)0x41,  /* [685] */
    (xdc_Char)0x5f,  /* [686] */
    (xdc_Char)0x6e,  /* [687] */
    (xdc_Char)0x75,  /* [688] */
    (xdc_Char)0x6c,  /* [689] */
    (xdc_Char)0x6c,  /* [690] */
    (xdc_Char)0x45,  /* [691] */
    (xdc_Char)0x76,  /* [692] */
    (xdc_Char)0x65,  /* [693] */
    (xdc_Char)0x6e,  /* [694] */
    (xdc_Char)0x74,  /* [695] */
    (xdc_Char)0x49,  /* [696] */
    (xdc_Char)0x64,  /* [697] */
    (xdc_Char)0x3a,  /* [698] */
    (xdc_Char)0x20,  /* [699] */
    (xdc_Char)0x70,  /* [700] */
    (xdc_Char)0x6f,  /* [701] */
    (xdc_Char)0x73,  /* [702] */
    (xdc_Char)0x74,  /* [703] */
    (xdc_Char)0x65,  /* [704] */
    (xdc_Char)0x64,  /* [705] */
    (xdc_Char)0x20,  /* [706] */
    (xdc_Char)0x65,  /* [707] */
    (xdc_Char)0x76,  /* [708] */
    (xdc_Char)0x65,  /* [709] */
    (xdc_Char)0x6e,  /* [710] */
    (xdc_Char)0x74,  /* [711] */
    (xdc_Char)0x49,  /* [712] */
    (xdc_Char)0x64,  /* [713] */
    (xdc_Char)0x20,  /* [714] */
    (xdc_Char)0x69,  /* [715] */
    (xdc_Char)0x73,  /* [716] */
    (xdc_Char)0x20,  /* [717] */
    (xdc_Char)0x6e,  /* [718] */
    (xdc_Char)0x75,  /* [719] */
    (xdc_Char)0x6c,  /* [720] */
    (xdc_Char)0x6c,  /* [721] */
    (xdc_Char)0x2e,  /* [722] */
    (xdc_Char)0x0,  /* [723] */
    (xdc_Char)0x41,  /* [724] */
    (xdc_Char)0x5f,  /* [725] */
    (xdc_Char)0x65,  /* [726] */
    (xdc_Char)0x76,  /* [727] */
    (xdc_Char)0x65,  /* [728] */
    (xdc_Char)0x6e,  /* [729] */
    (xdc_Char)0x74,  /* [730] */
    (xdc_Char)0x49,  /* [731] */
    (xdc_Char)0x6e,  /* [732] */
    (xdc_Char)0x55,  /* [733] */
    (xdc_Char)0x73,  /* [734] */
    (xdc_Char)0x65,  /* [735] */
    (xdc_Char)0x3a,  /* [736] */
    (xdc_Char)0x20,  /* [737] */
    (xdc_Char)0x45,  /* [738] */
    (xdc_Char)0x76,  /* [739] */
    (xdc_Char)0x65,  /* [740] */
    (xdc_Char)0x6e,  /* [741] */
    (xdc_Char)0x74,  /* [742] */
    (xdc_Char)0x20,  /* [743] */
    (xdc_Char)0x6f,  /* [744] */
    (xdc_Char)0x62,  /* [745] */
    (xdc_Char)0x6a,  /* [746] */
    (xdc_Char)0x65,  /* [747] */
    (xdc_Char)0x63,  /* [748] */
    (xdc_Char)0x74,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x61,  /* [751] */
    (xdc_Char)0x6c,  /* [752] */
    (xdc_Char)0x72,  /* [753] */
    (xdc_Char)0x65,  /* [754] */
    (xdc_Char)0x61,  /* [755] */
    (xdc_Char)0x64,  /* [756] */
    (xdc_Char)0x79,  /* [757] */
    (xdc_Char)0x20,  /* [758] */
    (xdc_Char)0x69,  /* [759] */
    (xdc_Char)0x6e,  /* [760] */
    (xdc_Char)0x20,  /* [761] */
    (xdc_Char)0x75,  /* [762] */
    (xdc_Char)0x73,  /* [763] */
    (xdc_Char)0x65,  /* [764] */
    (xdc_Char)0x2e,  /* [765] */
    (xdc_Char)0x0,  /* [766] */
    (xdc_Char)0x41,  /* [767] */
    (xdc_Char)0x5f,  /* [768] */
    (xdc_Char)0x62,  /* [769] */
    (xdc_Char)0x61,  /* [770] */
    (xdc_Char)0x64,  /* [771] */
    (xdc_Char)0x43,  /* [772] */
    (xdc_Char)0x6f,  /* [773] */
    (xdc_Char)0x6e,  /* [774] */
    (xdc_Char)0x74,  /* [775] */
    (xdc_Char)0x65,  /* [776] */
    (xdc_Char)0x78,  /* [777] */
    (xdc_Char)0x74,  /* [778] */
    (xdc_Char)0x3a,  /* [779] */
    (xdc_Char)0x20,  /* [780] */
    (xdc_Char)0x62,  /* [781] */
    (xdc_Char)0x61,  /* [782] */
    (xdc_Char)0x64,  /* [783] */
    (xdc_Char)0x20,  /* [784] */
    (xdc_Char)0x63,  /* [785] */
    (xdc_Char)0x61,  /* [786] */
    (xdc_Char)0x6c,  /* [787] */
    (xdc_Char)0x6c,  /* [788] */
    (xdc_Char)0x69,  /* [789] */
    (xdc_Char)0x6e,  /* [790] */
    (xdc_Char)0x67,  /* [791] */
    (xdc_Char)0x20,  /* [792] */
    (xdc_Char)0x63,  /* [793] */
    (xdc_Char)0x6f,  /* [794] */
    (xdc_Char)0x6e,  /* [795] */
    (xdc_Char)0x74,  /* [796] */
    (xdc_Char)0x65,  /* [797] */
    (xdc_Char)0x78,  /* [798] */
    (xdc_Char)0x74,  /* [799] */
    (xdc_Char)0x2e,  /* [800] */
    (xdc_Char)0x20,  /* [801] */
    (xdc_Char)0x4d,  /* [802] */
    (xdc_Char)0x75,  /* [803] */
    (xdc_Char)0x73,  /* [804] */
    (xdc_Char)0x74,  /* [805] */
    (xdc_Char)0x20,  /* [806] */
    (xdc_Char)0x62,  /* [807] */
    (xdc_Char)0x65,  /* [808] */
    (xdc_Char)0x20,  /* [809] */
    (xdc_Char)0x63,  /* [810] */
    (xdc_Char)0x61,  /* [811] */
    (xdc_Char)0x6c,  /* [812] */
    (xdc_Char)0x6c,  /* [813] */
    (xdc_Char)0x65,  /* [814] */
    (xdc_Char)0x64,  /* [815] */
    (xdc_Char)0x20,  /* [816] */
    (xdc_Char)0x66,  /* [817] */
    (xdc_Char)0x72,  /* [818] */
    (xdc_Char)0x6f,  /* [819] */
    (xdc_Char)0x6d,  /* [820] */
    (xdc_Char)0x20,  /* [821] */
    (xdc_Char)0x61,  /* [822] */
    (xdc_Char)0x20,  /* [823] */
    (xdc_Char)0x54,  /* [824] */
    (xdc_Char)0x61,  /* [825] */
    (xdc_Char)0x73,  /* [826] */
    (xdc_Char)0x6b,  /* [827] */
    (xdc_Char)0x2e,  /* [828] */
    (xdc_Char)0x0,  /* [829] */
    (xdc_Char)0x41,  /* [830] */
    (xdc_Char)0x5f,  /* [831] */
    (xdc_Char)0x70,  /* [832] */
    (xdc_Char)0x65,  /* [833] */
    (xdc_Char)0x6e,  /* [834] */
    (xdc_Char)0x64,  /* [835] */
    (xdc_Char)0x54,  /* [836] */
    (xdc_Char)0x61,  /* [837] */
    (xdc_Char)0x73,  /* [838] */
    (xdc_Char)0x6b,  /* [839] */
    (xdc_Char)0x44,  /* [840] */
    (xdc_Char)0x69,  /* [841] */
    (xdc_Char)0x73,  /* [842] */
    (xdc_Char)0x61,  /* [843] */
    (xdc_Char)0x62,  /* [844] */
    (xdc_Char)0x6c,  /* [845] */
    (xdc_Char)0x65,  /* [846] */
    (xdc_Char)0x64,  /* [847] */
    (xdc_Char)0x3a,  /* [848] */
    (xdc_Char)0x20,  /* [849] */
    (xdc_Char)0x43,  /* [850] */
    (xdc_Char)0x61,  /* [851] */
    (xdc_Char)0x6e,  /* [852] */
    (xdc_Char)0x6e,  /* [853] */
    (xdc_Char)0x6f,  /* [854] */
    (xdc_Char)0x74,  /* [855] */
    (xdc_Char)0x20,  /* [856] */
    (xdc_Char)0x63,  /* [857] */
    (xdc_Char)0x61,  /* [858] */
    (xdc_Char)0x6c,  /* [859] */
    (xdc_Char)0x6c,  /* [860] */
    (xdc_Char)0x20,  /* [861] */
    (xdc_Char)0x45,  /* [862] */
    (xdc_Char)0x76,  /* [863] */
    (xdc_Char)0x65,  /* [864] */
    (xdc_Char)0x6e,  /* [865] */
    (xdc_Char)0x74,  /* [866] */
    (xdc_Char)0x5f,  /* [867] */
    (xdc_Char)0x70,  /* [868] */
    (xdc_Char)0x65,  /* [869] */
    (xdc_Char)0x6e,  /* [870] */
    (xdc_Char)0x64,  /* [871] */
    (xdc_Char)0x28,  /* [872] */
    (xdc_Char)0x29,  /* [873] */
    (xdc_Char)0x20,  /* [874] */
    (xdc_Char)0x77,  /* [875] */
    (xdc_Char)0x68,  /* [876] */
    (xdc_Char)0x69,  /* [877] */
    (xdc_Char)0x6c,  /* [878] */
    (xdc_Char)0x65,  /* [879] */
    (xdc_Char)0x20,  /* [880] */
    (xdc_Char)0x74,  /* [881] */
    (xdc_Char)0x68,  /* [882] */
    (xdc_Char)0x65,  /* [883] */
    (xdc_Char)0x20,  /* [884] */
    (xdc_Char)0x54,  /* [885] */
    (xdc_Char)0x61,  /* [886] */
    (xdc_Char)0x73,  /* [887] */
    (xdc_Char)0x6b,  /* [888] */
    (xdc_Char)0x20,  /* [889] */
    (xdc_Char)0x6f,  /* [890] */
    (xdc_Char)0x72,  /* [891] */
    (xdc_Char)0x20,  /* [892] */
    (xdc_Char)0x53,  /* [893] */
    (xdc_Char)0x77,  /* [894] */
    (xdc_Char)0x69,  /* [895] */
    (xdc_Char)0x20,  /* [896] */
    (xdc_Char)0x73,  /* [897] */
    (xdc_Char)0x63,  /* [898] */
    (xdc_Char)0x68,  /* [899] */
    (xdc_Char)0x65,  /* [900] */
    (xdc_Char)0x64,  /* [901] */
    (xdc_Char)0x75,  /* [902] */
    (xdc_Char)0x6c,  /* [903] */
    (xdc_Char)0x65,  /* [904] */
    (xdc_Char)0x72,  /* [905] */
    (xdc_Char)0x20,  /* [906] */
    (xdc_Char)0x69,  /* [907] */
    (xdc_Char)0x73,  /* [908] */
    (xdc_Char)0x20,  /* [909] */
    (xdc_Char)0x64,  /* [910] */
    (xdc_Char)0x69,  /* [911] */
    (xdc_Char)0x73,  /* [912] */
    (xdc_Char)0x61,  /* [913] */
    (xdc_Char)0x62,  /* [914] */
    (xdc_Char)0x6c,  /* [915] */
    (xdc_Char)0x65,  /* [916] */
    (xdc_Char)0x64,  /* [917] */
    (xdc_Char)0x2e,  /* [918] */
    (xdc_Char)0x0,  /* [919] */
    (xdc_Char)0x4d,  /* [920] */
    (xdc_Char)0x61,  /* [921] */
    (xdc_Char)0x69,  /* [922] */
    (xdc_Char)0x6c,  /* [923] */
    (xdc_Char)0x62,  /* [924] */
    (xdc_Char)0x6f,  /* [925] */
    (xdc_Char)0x78,  /* [926] */
    (xdc_Char)0x5f,  /* [927] */
    (xdc_Char)0x63,  /* [928] */
    (xdc_Char)0x72,  /* [929] */
    (xdc_Char)0x65,  /* [930] */
    (xdc_Char)0x61,  /* [931] */
    (xdc_Char)0x74,  /* [932] */
    (xdc_Char)0x65,  /* [933] */
    (xdc_Char)0x27,  /* [934] */
    (xdc_Char)0x73,  /* [935] */
    (xdc_Char)0x20,  /* [936] */
    (xdc_Char)0x62,  /* [937] */
    (xdc_Char)0x75,  /* [938] */
    (xdc_Char)0x66,  /* [939] */
    (xdc_Char)0x53,  /* [940] */
    (xdc_Char)0x69,  /* [941] */
    (xdc_Char)0x7a,  /* [942] */
    (xdc_Char)0x65,  /* [943] */
    (xdc_Char)0x20,  /* [944] */
    (xdc_Char)0x70,  /* [945] */
    (xdc_Char)0x61,  /* [946] */
    (xdc_Char)0x72,  /* [947] */
    (xdc_Char)0x61,  /* [948] */
    (xdc_Char)0x6d,  /* [949] */
    (xdc_Char)0x65,  /* [950] */
    (xdc_Char)0x74,  /* [951] */
    (xdc_Char)0x65,  /* [952] */
    (xdc_Char)0x72,  /* [953] */
    (xdc_Char)0x20,  /* [954] */
    (xdc_Char)0x69,  /* [955] */
    (xdc_Char)0x73,  /* [956] */
    (xdc_Char)0x20,  /* [957] */
    (xdc_Char)0x69,  /* [958] */
    (xdc_Char)0x6e,  /* [959] */
    (xdc_Char)0x76,  /* [960] */
    (xdc_Char)0x61,  /* [961] */
    (xdc_Char)0x6c,  /* [962] */
    (xdc_Char)0x69,  /* [963] */
    (xdc_Char)0x64,  /* [964] */
    (xdc_Char)0x20,  /* [965] */
    (xdc_Char)0x28,  /* [966] */
    (xdc_Char)0x74,  /* [967] */
    (xdc_Char)0x6f,  /* [968] */
    (xdc_Char)0x6f,  /* [969] */
    (xdc_Char)0x20,  /* [970] */
    (xdc_Char)0x73,  /* [971] */
    (xdc_Char)0x6d,  /* [972] */
    (xdc_Char)0x61,  /* [973] */
    (xdc_Char)0x6c,  /* [974] */
    (xdc_Char)0x6c,  /* [975] */
    (xdc_Char)0x29,  /* [976] */
    (xdc_Char)0x0,  /* [977] */
    (xdc_Char)0x41,  /* [978] */
    (xdc_Char)0x5f,  /* [979] */
    (xdc_Char)0x6e,  /* [980] */
    (xdc_Char)0x6f,  /* [981] */
    (xdc_Char)0x45,  /* [982] */
    (xdc_Char)0x76,  /* [983] */
    (xdc_Char)0x65,  /* [984] */
    (xdc_Char)0x6e,  /* [985] */
    (xdc_Char)0x74,  /* [986] */
    (xdc_Char)0x73,  /* [987] */
    (xdc_Char)0x3a,  /* [988] */
    (xdc_Char)0x20,  /* [989] */
    (xdc_Char)0x54,  /* [990] */
    (xdc_Char)0x68,  /* [991] */
    (xdc_Char)0x65,  /* [992] */
    (xdc_Char)0x20,  /* [993] */
    (xdc_Char)0x45,  /* [994] */
    (xdc_Char)0x76,  /* [995] */
    (xdc_Char)0x65,  /* [996] */
    (xdc_Char)0x6e,  /* [997] */
    (xdc_Char)0x74,  /* [998] */
    (xdc_Char)0x2e,  /* [999] */
    (xdc_Char)0x73,  /* [1000] */
    (xdc_Char)0x75,  /* [1001] */
    (xdc_Char)0x70,  /* [1002] */
    (xdc_Char)0x70,  /* [1003] */
    (xdc_Char)0x6f,  /* [1004] */
    (xdc_Char)0x72,  /* [1005] */
    (xdc_Char)0x74,  /* [1006] */
    (xdc_Char)0x73,  /* [1007] */
    (xdc_Char)0x45,  /* [1008] */
    (xdc_Char)0x76,  /* [1009] */
    (xdc_Char)0x65,  /* [1010] */
    (xdc_Char)0x6e,  /* [1011] */
    (xdc_Char)0x74,  /* [1012] */
    (xdc_Char)0x73,  /* [1013] */
    (xdc_Char)0x20,  /* [1014] */
    (xdc_Char)0x66,  /* [1015] */
    (xdc_Char)0x6c,  /* [1016] */
    (xdc_Char)0x61,  /* [1017] */
    (xdc_Char)0x67,  /* [1018] */
    (xdc_Char)0x20,  /* [1019] */
    (xdc_Char)0x69,  /* [1020] */
    (xdc_Char)0x73,  /* [1021] */
    (xdc_Char)0x20,  /* [1022] */
    (xdc_Char)0x64,  /* [1023] */
    (xdc_Char)0x69,  /* [1024] */
    (xdc_Char)0x73,  /* [1025] */
    (xdc_Char)0x61,  /* [1026] */
    (xdc_Char)0x62,  /* [1027] */
    (xdc_Char)0x6c,  /* [1028] */
    (xdc_Char)0x65,  /* [1029] */
    (xdc_Char)0x64,  /* [1030] */
    (xdc_Char)0x2e,  /* [1031] */
    (xdc_Char)0x0,  /* [1032] */
    (xdc_Char)0x41,  /* [1033] */
    (xdc_Char)0x5f,  /* [1034] */
    (xdc_Char)0x69,  /* [1035] */
    (xdc_Char)0x6e,  /* [1036] */
    (xdc_Char)0x76,  /* [1037] */
    (xdc_Char)0x54,  /* [1038] */
    (xdc_Char)0x69,  /* [1039] */
    (xdc_Char)0x6d,  /* [1040] */
    (xdc_Char)0x65,  /* [1041] */
    (xdc_Char)0x6f,  /* [1042] */
    (xdc_Char)0x75,  /* [1043] */
    (xdc_Char)0x74,  /* [1044] */
    (xdc_Char)0x3a,  /* [1045] */
    (xdc_Char)0x20,  /* [1046] */
    (xdc_Char)0x43,  /* [1047] */
    (xdc_Char)0x61,  /* [1048] */
    (xdc_Char)0x6e,  /* [1049] */
    (xdc_Char)0x27,  /* [1050] */
    (xdc_Char)0x74,  /* [1051] */
    (xdc_Char)0x20,  /* [1052] */
    (xdc_Char)0x75,  /* [1053] */
    (xdc_Char)0x73,  /* [1054] */
    (xdc_Char)0x65,  /* [1055] */
    (xdc_Char)0x20,  /* [1056] */
    (xdc_Char)0x42,  /* [1057] */
    (xdc_Char)0x49,  /* [1058] */
    (xdc_Char)0x4f,  /* [1059] */
    (xdc_Char)0x53,  /* [1060] */
    (xdc_Char)0x5f,  /* [1061] */
    (xdc_Char)0x45,  /* [1062] */
    (xdc_Char)0x56,  /* [1063] */
    (xdc_Char)0x45,  /* [1064] */
    (xdc_Char)0x4e,  /* [1065] */
    (xdc_Char)0x54,  /* [1066] */
    (xdc_Char)0x5f,  /* [1067] */
    (xdc_Char)0x41,  /* [1068] */
    (xdc_Char)0x43,  /* [1069] */
    (xdc_Char)0x51,  /* [1070] */
    (xdc_Char)0x55,  /* [1071] */
    (xdc_Char)0x49,  /* [1072] */
    (xdc_Char)0x52,  /* [1073] */
    (xdc_Char)0x45,  /* [1074] */
    (xdc_Char)0x44,  /* [1075] */
    (xdc_Char)0x20,  /* [1076] */
    (xdc_Char)0x77,  /* [1077] */
    (xdc_Char)0x69,  /* [1078] */
    (xdc_Char)0x74,  /* [1079] */
    (xdc_Char)0x68,  /* [1080] */
    (xdc_Char)0x20,  /* [1081] */
    (xdc_Char)0x74,  /* [1082] */
    (xdc_Char)0x68,  /* [1083] */
    (xdc_Char)0x69,  /* [1084] */
    (xdc_Char)0x73,  /* [1085] */
    (xdc_Char)0x20,  /* [1086] */
    (xdc_Char)0x53,  /* [1087] */
    (xdc_Char)0x65,  /* [1088] */
    (xdc_Char)0x6d,  /* [1089] */
    (xdc_Char)0x61,  /* [1090] */
    (xdc_Char)0x70,  /* [1091] */
    (xdc_Char)0x68,  /* [1092] */
    (xdc_Char)0x6f,  /* [1093] */
    (xdc_Char)0x72,  /* [1094] */
    (xdc_Char)0x65,  /* [1095] */
    (xdc_Char)0x2e,  /* [1096] */
    (xdc_Char)0x0,  /* [1097] */
    (xdc_Char)0x41,  /* [1098] */
    (xdc_Char)0x5f,  /* [1099] */
    (xdc_Char)0x6f,  /* [1100] */
    (xdc_Char)0x76,  /* [1101] */
    (xdc_Char)0x65,  /* [1102] */
    (xdc_Char)0x72,  /* [1103] */
    (xdc_Char)0x66,  /* [1104] */
    (xdc_Char)0x6c,  /* [1105] */
    (xdc_Char)0x6f,  /* [1106] */
    (xdc_Char)0x77,  /* [1107] */
    (xdc_Char)0x3a,  /* [1108] */
    (xdc_Char)0x20,  /* [1109] */
    (xdc_Char)0x43,  /* [1110] */
    (xdc_Char)0x6f,  /* [1111] */
    (xdc_Char)0x75,  /* [1112] */
    (xdc_Char)0x6e,  /* [1113] */
    (xdc_Char)0x74,  /* [1114] */
    (xdc_Char)0x20,  /* [1115] */
    (xdc_Char)0x68,  /* [1116] */
    (xdc_Char)0x61,  /* [1117] */
    (xdc_Char)0x73,  /* [1118] */
    (xdc_Char)0x20,  /* [1119] */
    (xdc_Char)0x65,  /* [1120] */
    (xdc_Char)0x78,  /* [1121] */
    (xdc_Char)0x63,  /* [1122] */
    (xdc_Char)0x65,  /* [1123] */
    (xdc_Char)0x65,  /* [1124] */
    (xdc_Char)0x64,  /* [1125] */
    (xdc_Char)0x65,  /* [1126] */
    (xdc_Char)0x64,  /* [1127] */
    (xdc_Char)0x20,  /* [1128] */
    (xdc_Char)0x36,  /* [1129] */
    (xdc_Char)0x35,  /* [1130] */
    (xdc_Char)0x35,  /* [1131] */
    (xdc_Char)0x33,  /* [1132] */
    (xdc_Char)0x35,  /* [1133] */
    (xdc_Char)0x20,  /* [1134] */
    (xdc_Char)0x61,  /* [1135] */
    (xdc_Char)0x6e,  /* [1136] */
    (xdc_Char)0x64,  /* [1137] */
    (xdc_Char)0x20,  /* [1138] */
    (xdc_Char)0x72,  /* [1139] */
    (xdc_Char)0x6f,  /* [1140] */
    (xdc_Char)0x6c,  /* [1141] */
    (xdc_Char)0x6c,  /* [1142] */
    (xdc_Char)0x65,  /* [1143] */
    (xdc_Char)0x64,  /* [1144] */
    (xdc_Char)0x20,  /* [1145] */
    (xdc_Char)0x6f,  /* [1146] */
    (xdc_Char)0x76,  /* [1147] */
    (xdc_Char)0x65,  /* [1148] */
    (xdc_Char)0x72,  /* [1149] */
    (xdc_Char)0x2e,  /* [1150] */
    (xdc_Char)0x0,  /* [1151] */
    (xdc_Char)0x41,  /* [1152] */
    (xdc_Char)0x5f,  /* [1153] */
    (xdc_Char)0x70,  /* [1154] */
    (xdc_Char)0x65,  /* [1155] */
    (xdc_Char)0x6e,  /* [1156] */
    (xdc_Char)0x64,  /* [1157] */
    (xdc_Char)0x54,  /* [1158] */
    (xdc_Char)0x61,  /* [1159] */
    (xdc_Char)0x73,  /* [1160] */
    (xdc_Char)0x6b,  /* [1161] */
    (xdc_Char)0x44,  /* [1162] */
    (xdc_Char)0x69,  /* [1163] */
    (xdc_Char)0x73,  /* [1164] */
    (xdc_Char)0x61,  /* [1165] */
    (xdc_Char)0x62,  /* [1166] */
    (xdc_Char)0x6c,  /* [1167] */
    (xdc_Char)0x65,  /* [1168] */
    (xdc_Char)0x64,  /* [1169] */
    (xdc_Char)0x3a,  /* [1170] */
    (xdc_Char)0x20,  /* [1171] */
    (xdc_Char)0x43,  /* [1172] */
    (xdc_Char)0x61,  /* [1173] */
    (xdc_Char)0x6e,  /* [1174] */
    (xdc_Char)0x6e,  /* [1175] */
    (xdc_Char)0x6f,  /* [1176] */
    (xdc_Char)0x74,  /* [1177] */
    (xdc_Char)0x20,  /* [1178] */
    (xdc_Char)0x63,  /* [1179] */
    (xdc_Char)0x61,  /* [1180] */
    (xdc_Char)0x6c,  /* [1181] */
    (xdc_Char)0x6c,  /* [1182] */
    (xdc_Char)0x20,  /* [1183] */
    (xdc_Char)0x53,  /* [1184] */
    (xdc_Char)0x65,  /* [1185] */
    (xdc_Char)0x6d,  /* [1186] */
    (xdc_Char)0x61,  /* [1187] */
    (xdc_Char)0x70,  /* [1188] */
    (xdc_Char)0x68,  /* [1189] */
    (xdc_Char)0x6f,  /* [1190] */
    (xdc_Char)0x72,  /* [1191] */
    (xdc_Char)0x65,  /* [1192] */
    (xdc_Char)0x5f,  /* [1193] */
    (xdc_Char)0x70,  /* [1194] */
    (xdc_Char)0x65,  /* [1195] */
    (xdc_Char)0x6e,  /* [1196] */
    (xdc_Char)0x64,  /* [1197] */
    (xdc_Char)0x28,  /* [1198] */
    (xdc_Char)0x29,  /* [1199] */
    (xdc_Char)0x20,  /* [1200] */
    (xdc_Char)0x77,  /* [1201] */
    (xdc_Char)0x68,  /* [1202] */
    (xdc_Char)0x69,  /* [1203] */
    (xdc_Char)0x6c,  /* [1204] */
    (xdc_Char)0x65,  /* [1205] */
    (xdc_Char)0x20,  /* [1206] */
    (xdc_Char)0x74,  /* [1207] */
    (xdc_Char)0x68,  /* [1208] */
    (xdc_Char)0x65,  /* [1209] */
    (xdc_Char)0x20,  /* [1210] */
    (xdc_Char)0x54,  /* [1211] */
    (xdc_Char)0x61,  /* [1212] */
    (xdc_Char)0x73,  /* [1213] */
    (xdc_Char)0x6b,  /* [1214] */
    (xdc_Char)0x20,  /* [1215] */
    (xdc_Char)0x6f,  /* [1216] */
    (xdc_Char)0x72,  /* [1217] */
    (xdc_Char)0x20,  /* [1218] */
    (xdc_Char)0x53,  /* [1219] */
    (xdc_Char)0x77,  /* [1220] */
    (xdc_Char)0x69,  /* [1221] */
    (xdc_Char)0x20,  /* [1222] */
    (xdc_Char)0x73,  /* [1223] */
    (xdc_Char)0x63,  /* [1224] */
    (xdc_Char)0x68,  /* [1225] */
    (xdc_Char)0x65,  /* [1226] */
    (xdc_Char)0x64,  /* [1227] */
    (xdc_Char)0x75,  /* [1228] */
    (xdc_Char)0x6c,  /* [1229] */
    (xdc_Char)0x65,  /* [1230] */
    (xdc_Char)0x72,  /* [1231] */
    (xdc_Char)0x20,  /* [1232] */
    (xdc_Char)0x69,  /* [1233] */
    (xdc_Char)0x73,  /* [1234] */
    (xdc_Char)0x20,  /* [1235] */
    (xdc_Char)0x64,  /* [1236] */
    (xdc_Char)0x69,  /* [1237] */
    (xdc_Char)0x73,  /* [1238] */
    (xdc_Char)0x61,  /* [1239] */
    (xdc_Char)0x62,  /* [1240] */
    (xdc_Char)0x6c,  /* [1241] */
    (xdc_Char)0x65,  /* [1242] */
    (xdc_Char)0x64,  /* [1243] */
    (xdc_Char)0x2e,  /* [1244] */
    (xdc_Char)0x0,  /* [1245] */
    (xdc_Char)0x41,  /* [1246] */
    (xdc_Char)0x5f,  /* [1247] */
    (xdc_Char)0x73,  /* [1248] */
    (xdc_Char)0x77,  /* [1249] */
    (xdc_Char)0x69,  /* [1250] */
    (xdc_Char)0x44,  /* [1251] */
    (xdc_Char)0x69,  /* [1252] */
    (xdc_Char)0x73,  /* [1253] */
    (xdc_Char)0x61,  /* [1254] */
    (xdc_Char)0x62,  /* [1255] */
    (xdc_Char)0x6c,  /* [1256] */
    (xdc_Char)0x65,  /* [1257] */
    (xdc_Char)0x64,  /* [1258] */
    (xdc_Char)0x3a,  /* [1259] */
    (xdc_Char)0x20,  /* [1260] */
    (xdc_Char)0x43,  /* [1261] */
    (xdc_Char)0x61,  /* [1262] */
    (xdc_Char)0x6e,  /* [1263] */
    (xdc_Char)0x6e,  /* [1264] */
    (xdc_Char)0x6f,  /* [1265] */
    (xdc_Char)0x74,  /* [1266] */
    (xdc_Char)0x20,  /* [1267] */
    (xdc_Char)0x63,  /* [1268] */
    (xdc_Char)0x72,  /* [1269] */
    (xdc_Char)0x65,  /* [1270] */
    (xdc_Char)0x61,  /* [1271] */
    (xdc_Char)0x74,  /* [1272] */
    (xdc_Char)0x65,  /* [1273] */
    (xdc_Char)0x20,  /* [1274] */
    (xdc_Char)0x61,  /* [1275] */
    (xdc_Char)0x20,  /* [1276] */
    (xdc_Char)0x53,  /* [1277] */
    (xdc_Char)0x77,  /* [1278] */
    (xdc_Char)0x69,  /* [1279] */
    (xdc_Char)0x20,  /* [1280] */
    (xdc_Char)0x77,  /* [1281] */
    (xdc_Char)0x68,  /* [1282] */
    (xdc_Char)0x65,  /* [1283] */
    (xdc_Char)0x6e,  /* [1284] */
    (xdc_Char)0x20,  /* [1285] */
    (xdc_Char)0x53,  /* [1286] */
    (xdc_Char)0x77,  /* [1287] */
    (xdc_Char)0x69,  /* [1288] */
    (xdc_Char)0x20,  /* [1289] */
    (xdc_Char)0x69,  /* [1290] */
    (xdc_Char)0x73,  /* [1291] */
    (xdc_Char)0x20,  /* [1292] */
    (xdc_Char)0x64,  /* [1293] */
    (xdc_Char)0x69,  /* [1294] */
    (xdc_Char)0x73,  /* [1295] */
    (xdc_Char)0x61,  /* [1296] */
    (xdc_Char)0x62,  /* [1297] */
    (xdc_Char)0x6c,  /* [1298] */
    (xdc_Char)0x65,  /* [1299] */
    (xdc_Char)0x64,  /* [1300] */
    (xdc_Char)0x2e,  /* [1301] */
    (xdc_Char)0x0,  /* [1302] */
    (xdc_Char)0x41,  /* [1303] */
    (xdc_Char)0x5f,  /* [1304] */
    (xdc_Char)0x62,  /* [1305] */
    (xdc_Char)0x61,  /* [1306] */
    (xdc_Char)0x64,  /* [1307] */
    (xdc_Char)0x50,  /* [1308] */
    (xdc_Char)0x72,  /* [1309] */
    (xdc_Char)0x69,  /* [1310] */
    (xdc_Char)0x6f,  /* [1311] */
    (xdc_Char)0x72,  /* [1312] */
    (xdc_Char)0x69,  /* [1313] */
    (xdc_Char)0x74,  /* [1314] */
    (xdc_Char)0x79,  /* [1315] */
    (xdc_Char)0x3a,  /* [1316] */
    (xdc_Char)0x20,  /* [1317] */
    (xdc_Char)0x41,  /* [1318] */
    (xdc_Char)0x6e,  /* [1319] */
    (xdc_Char)0x20,  /* [1320] */
    (xdc_Char)0x69,  /* [1321] */
    (xdc_Char)0x6e,  /* [1322] */
    (xdc_Char)0x76,  /* [1323] */
    (xdc_Char)0x61,  /* [1324] */
    (xdc_Char)0x6c,  /* [1325] */
    (xdc_Char)0x69,  /* [1326] */
    (xdc_Char)0x64,  /* [1327] */
    (xdc_Char)0x20,  /* [1328] */
    (xdc_Char)0x53,  /* [1329] */
    (xdc_Char)0x77,  /* [1330] */
    (xdc_Char)0x69,  /* [1331] */
    (xdc_Char)0x20,  /* [1332] */
    (xdc_Char)0x70,  /* [1333] */
    (xdc_Char)0x72,  /* [1334] */
    (xdc_Char)0x69,  /* [1335] */
    (xdc_Char)0x6f,  /* [1336] */
    (xdc_Char)0x72,  /* [1337] */
    (xdc_Char)0x69,  /* [1338] */
    (xdc_Char)0x74,  /* [1339] */
    (xdc_Char)0x79,  /* [1340] */
    (xdc_Char)0x20,  /* [1341] */
    (xdc_Char)0x77,  /* [1342] */
    (xdc_Char)0x61,  /* [1343] */
    (xdc_Char)0x73,  /* [1344] */
    (xdc_Char)0x20,  /* [1345] */
    (xdc_Char)0x75,  /* [1346] */
    (xdc_Char)0x73,  /* [1347] */
    (xdc_Char)0x65,  /* [1348] */
    (xdc_Char)0x64,  /* [1349] */
    (xdc_Char)0x2e,  /* [1350] */
    (xdc_Char)0x0,  /* [1351] */
    (xdc_Char)0x41,  /* [1352] */
    (xdc_Char)0x5f,  /* [1353] */
    (xdc_Char)0x62,  /* [1354] */
    (xdc_Char)0x61,  /* [1355] */
    (xdc_Char)0x64,  /* [1356] */
    (xdc_Char)0x54,  /* [1357] */
    (xdc_Char)0x68,  /* [1358] */
    (xdc_Char)0x72,  /* [1359] */
    (xdc_Char)0x65,  /* [1360] */
    (xdc_Char)0x61,  /* [1361] */
    (xdc_Char)0x64,  /* [1362] */
    (xdc_Char)0x54,  /* [1363] */
    (xdc_Char)0x79,  /* [1364] */
    (xdc_Char)0x70,  /* [1365] */
    (xdc_Char)0x65,  /* [1366] */
    (xdc_Char)0x3a,  /* [1367] */
    (xdc_Char)0x20,  /* [1368] */
    (xdc_Char)0x43,  /* [1369] */
    (xdc_Char)0x61,  /* [1370] */
    (xdc_Char)0x6e,  /* [1371] */
    (xdc_Char)0x6e,  /* [1372] */
    (xdc_Char)0x6f,  /* [1373] */
    (xdc_Char)0x74,  /* [1374] */
    (xdc_Char)0x20,  /* [1375] */
    (xdc_Char)0x63,  /* [1376] */
    (xdc_Char)0x72,  /* [1377] */
    (xdc_Char)0x65,  /* [1378] */
    (xdc_Char)0x61,  /* [1379] */
    (xdc_Char)0x74,  /* [1380] */
    (xdc_Char)0x65,  /* [1381] */
    (xdc_Char)0x2f,  /* [1382] */
    (xdc_Char)0x64,  /* [1383] */
    (xdc_Char)0x65,  /* [1384] */
    (xdc_Char)0x6c,  /* [1385] */
    (xdc_Char)0x65,  /* [1386] */
    (xdc_Char)0x74,  /* [1387] */
    (xdc_Char)0x65,  /* [1388] */
    (xdc_Char)0x20,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x20,  /* [1391] */
    (xdc_Char)0x74,  /* [1392] */
    (xdc_Char)0x61,  /* [1393] */
    (xdc_Char)0x73,  /* [1394] */
    (xdc_Char)0x6b,  /* [1395] */
    (xdc_Char)0x20,  /* [1396] */
    (xdc_Char)0x66,  /* [1397] */
    (xdc_Char)0x72,  /* [1398] */
    (xdc_Char)0x6f,  /* [1399] */
    (xdc_Char)0x6d,  /* [1400] */
    (xdc_Char)0x20,  /* [1401] */
    (xdc_Char)0x48,  /* [1402] */
    (xdc_Char)0x77,  /* [1403] */
    (xdc_Char)0x69,  /* [1404] */
    (xdc_Char)0x20,  /* [1405] */
    (xdc_Char)0x6f,  /* [1406] */
    (xdc_Char)0x72,  /* [1407] */
    (xdc_Char)0x20,  /* [1408] */
    (xdc_Char)0x53,  /* [1409] */
    (xdc_Char)0x77,  /* [1410] */
    (xdc_Char)0x69,  /* [1411] */
    (xdc_Char)0x20,  /* [1412] */
    (xdc_Char)0x74,  /* [1413] */
    (xdc_Char)0x68,  /* [1414] */
    (xdc_Char)0x72,  /* [1415] */
    (xdc_Char)0x65,  /* [1416] */
    (xdc_Char)0x61,  /* [1417] */
    (xdc_Char)0x64,  /* [1418] */
    (xdc_Char)0x2e,  /* [1419] */
    (xdc_Char)0x0,  /* [1420] */
    (xdc_Char)0x41,  /* [1421] */
    (xdc_Char)0x5f,  /* [1422] */
    (xdc_Char)0x62,  /* [1423] */
    (xdc_Char)0x61,  /* [1424] */
    (xdc_Char)0x64,  /* [1425] */
    (xdc_Char)0x54,  /* [1426] */
    (xdc_Char)0x61,  /* [1427] */
    (xdc_Char)0x73,  /* [1428] */
    (xdc_Char)0x6b,  /* [1429] */
    (xdc_Char)0x53,  /* [1430] */
    (xdc_Char)0x74,  /* [1431] */
    (xdc_Char)0x61,  /* [1432] */
    (xdc_Char)0x74,  /* [1433] */
    (xdc_Char)0x65,  /* [1434] */
    (xdc_Char)0x3a,  /* [1435] */
    (xdc_Char)0x20,  /* [1436] */
    (xdc_Char)0x43,  /* [1437] */
    (xdc_Char)0x61,  /* [1438] */
    (xdc_Char)0x6e,  /* [1439] */
    (xdc_Char)0x27,  /* [1440] */
    (xdc_Char)0x74,  /* [1441] */
    (xdc_Char)0x20,  /* [1442] */
    (xdc_Char)0x64,  /* [1443] */
    (xdc_Char)0x65,  /* [1444] */
    (xdc_Char)0x6c,  /* [1445] */
    (xdc_Char)0x65,  /* [1446] */
    (xdc_Char)0x74,  /* [1447] */
    (xdc_Char)0x65,  /* [1448] */
    (xdc_Char)0x20,  /* [1449] */
    (xdc_Char)0x61,  /* [1450] */
    (xdc_Char)0x20,  /* [1451] */
    (xdc_Char)0x74,  /* [1452] */
    (xdc_Char)0x61,  /* [1453] */
    (xdc_Char)0x73,  /* [1454] */
    (xdc_Char)0x6b,  /* [1455] */
    (xdc_Char)0x20,  /* [1456] */
    (xdc_Char)0x69,  /* [1457] */
    (xdc_Char)0x6e,  /* [1458] */
    (xdc_Char)0x20,  /* [1459] */
    (xdc_Char)0x52,  /* [1460] */
    (xdc_Char)0x55,  /* [1461] */
    (xdc_Char)0x4e,  /* [1462] */
    (xdc_Char)0x4e,  /* [1463] */
    (xdc_Char)0x49,  /* [1464] */
    (xdc_Char)0x4e,  /* [1465] */
    (xdc_Char)0x47,  /* [1466] */
    (xdc_Char)0x20,  /* [1467] */
    (xdc_Char)0x73,  /* [1468] */
    (xdc_Char)0x74,  /* [1469] */
    (xdc_Char)0x61,  /* [1470] */
    (xdc_Char)0x74,  /* [1471] */
    (xdc_Char)0x65,  /* [1472] */
    (xdc_Char)0x2e,  /* [1473] */
    (xdc_Char)0x0,  /* [1474] */
    (xdc_Char)0x41,  /* [1475] */
    (xdc_Char)0x5f,  /* [1476] */
    (xdc_Char)0x6e,  /* [1477] */
    (xdc_Char)0x6f,  /* [1478] */
    (xdc_Char)0x50,  /* [1479] */
    (xdc_Char)0x65,  /* [1480] */
    (xdc_Char)0x6e,  /* [1481] */
    (xdc_Char)0x64,  /* [1482] */
    (xdc_Char)0x45,  /* [1483] */
    (xdc_Char)0x6c,  /* [1484] */
    (xdc_Char)0x65,  /* [1485] */
    (xdc_Char)0x6d,  /* [1486] */
    (xdc_Char)0x3a,  /* [1487] */
    (xdc_Char)0x20,  /* [1488] */
    (xdc_Char)0x4e,  /* [1489] */
    (xdc_Char)0x6f,  /* [1490] */
    (xdc_Char)0x74,  /* [1491] */
    (xdc_Char)0x20,  /* [1492] */
    (xdc_Char)0x65,  /* [1493] */
    (xdc_Char)0x6e,  /* [1494] */
    (xdc_Char)0x6f,  /* [1495] */
    (xdc_Char)0x75,  /* [1496] */
    (xdc_Char)0x67,  /* [1497] */
    (xdc_Char)0x68,  /* [1498] */
    (xdc_Char)0x20,  /* [1499] */
    (xdc_Char)0x69,  /* [1500] */
    (xdc_Char)0x6e,  /* [1501] */
    (xdc_Char)0x66,  /* [1502] */
    (xdc_Char)0x6f,  /* [1503] */
    (xdc_Char)0x20,  /* [1504] */
    (xdc_Char)0x74,  /* [1505] */
    (xdc_Char)0x6f,  /* [1506] */
    (xdc_Char)0x20,  /* [1507] */
    (xdc_Char)0x64,  /* [1508] */
    (xdc_Char)0x65,  /* [1509] */
    (xdc_Char)0x6c,  /* [1510] */
    (xdc_Char)0x65,  /* [1511] */
    (xdc_Char)0x74,  /* [1512] */
    (xdc_Char)0x65,  /* [1513] */
    (xdc_Char)0x20,  /* [1514] */
    (xdc_Char)0x42,  /* [1515] */
    (xdc_Char)0x4c,  /* [1516] */
    (xdc_Char)0x4f,  /* [1517] */
    (xdc_Char)0x43,  /* [1518] */
    (xdc_Char)0x4b,  /* [1519] */
    (xdc_Char)0x45,  /* [1520] */
    (xdc_Char)0x44,  /* [1521] */
    (xdc_Char)0x20,  /* [1522] */
    (xdc_Char)0x74,  /* [1523] */
    (xdc_Char)0x61,  /* [1524] */
    (xdc_Char)0x73,  /* [1525] */
    (xdc_Char)0x6b,  /* [1526] */
    (xdc_Char)0x2e,  /* [1527] */
    (xdc_Char)0x0,  /* [1528] */
    (xdc_Char)0x41,  /* [1529] */
    (xdc_Char)0x5f,  /* [1530] */
    (xdc_Char)0x74,  /* [1531] */
    (xdc_Char)0x61,  /* [1532] */
    (xdc_Char)0x73,  /* [1533] */
    (xdc_Char)0x6b,  /* [1534] */
    (xdc_Char)0x44,  /* [1535] */
    (xdc_Char)0x69,  /* [1536] */
    (xdc_Char)0x73,  /* [1537] */
    (xdc_Char)0x61,  /* [1538] */
    (xdc_Char)0x62,  /* [1539] */
    (xdc_Char)0x6c,  /* [1540] */
    (xdc_Char)0x65,  /* [1541] */
    (xdc_Char)0x64,  /* [1542] */
    (xdc_Char)0x3a,  /* [1543] */
    (xdc_Char)0x20,  /* [1544] */
    (xdc_Char)0x43,  /* [1545] */
    (xdc_Char)0x61,  /* [1546] */
    (xdc_Char)0x6e,  /* [1547] */
    (xdc_Char)0x6e,  /* [1548] */
    (xdc_Char)0x6f,  /* [1549] */
    (xdc_Char)0x74,  /* [1550] */
    (xdc_Char)0x20,  /* [1551] */
    (xdc_Char)0x63,  /* [1552] */
    (xdc_Char)0x72,  /* [1553] */
    (xdc_Char)0x65,  /* [1554] */
    (xdc_Char)0x61,  /* [1555] */
    (xdc_Char)0x74,  /* [1556] */
    (xdc_Char)0x65,  /* [1557] */
    (xdc_Char)0x20,  /* [1558] */
    (xdc_Char)0x61,  /* [1559] */
    (xdc_Char)0x20,  /* [1560] */
    (xdc_Char)0x74,  /* [1561] */
    (xdc_Char)0x61,  /* [1562] */
    (xdc_Char)0x73,  /* [1563] */
    (xdc_Char)0x6b,  /* [1564] */
    (xdc_Char)0x20,  /* [1565] */
    (xdc_Char)0x77,  /* [1566] */
    (xdc_Char)0x68,  /* [1567] */
    (xdc_Char)0x65,  /* [1568] */
    (xdc_Char)0x6e,  /* [1569] */
    (xdc_Char)0x20,  /* [1570] */
    (xdc_Char)0x74,  /* [1571] */
    (xdc_Char)0x61,  /* [1572] */
    (xdc_Char)0x73,  /* [1573] */
    (xdc_Char)0x6b,  /* [1574] */
    (xdc_Char)0x69,  /* [1575] */
    (xdc_Char)0x6e,  /* [1576] */
    (xdc_Char)0x67,  /* [1577] */
    (xdc_Char)0x20,  /* [1578] */
    (xdc_Char)0x69,  /* [1579] */
    (xdc_Char)0x73,  /* [1580] */
    (xdc_Char)0x20,  /* [1581] */
    (xdc_Char)0x64,  /* [1582] */
    (xdc_Char)0x69,  /* [1583] */
    (xdc_Char)0x73,  /* [1584] */
    (xdc_Char)0x61,  /* [1585] */
    (xdc_Char)0x62,  /* [1586] */
    (xdc_Char)0x6c,  /* [1587] */
    (xdc_Char)0x65,  /* [1588] */
    (xdc_Char)0x64,  /* [1589] */
    (xdc_Char)0x2e,  /* [1590] */
    (xdc_Char)0x0,  /* [1591] */
    (xdc_Char)0x41,  /* [1592] */
    (xdc_Char)0x5f,  /* [1593] */
    (xdc_Char)0x62,  /* [1594] */
    (xdc_Char)0x61,  /* [1595] */
    (xdc_Char)0x64,  /* [1596] */
    (xdc_Char)0x50,  /* [1597] */
    (xdc_Char)0x72,  /* [1598] */
    (xdc_Char)0x69,  /* [1599] */
    (xdc_Char)0x6f,  /* [1600] */
    (xdc_Char)0x72,  /* [1601] */
    (xdc_Char)0x69,  /* [1602] */
    (xdc_Char)0x74,  /* [1603] */
    (xdc_Char)0x79,  /* [1604] */
    (xdc_Char)0x3a,  /* [1605] */
    (xdc_Char)0x20,  /* [1606] */
    (xdc_Char)0x41,  /* [1607] */
    (xdc_Char)0x6e,  /* [1608] */
    (xdc_Char)0x20,  /* [1609] */
    (xdc_Char)0x69,  /* [1610] */
    (xdc_Char)0x6e,  /* [1611] */
    (xdc_Char)0x76,  /* [1612] */
    (xdc_Char)0x61,  /* [1613] */
    (xdc_Char)0x6c,  /* [1614] */
    (xdc_Char)0x69,  /* [1615] */
    (xdc_Char)0x64,  /* [1616] */
    (xdc_Char)0x20,  /* [1617] */
    (xdc_Char)0x74,  /* [1618] */
    (xdc_Char)0x61,  /* [1619] */
    (xdc_Char)0x73,  /* [1620] */
    (xdc_Char)0x6b,  /* [1621] */
    (xdc_Char)0x20,  /* [1622] */
    (xdc_Char)0x70,  /* [1623] */
    (xdc_Char)0x72,  /* [1624] */
    (xdc_Char)0x69,  /* [1625] */
    (xdc_Char)0x6f,  /* [1626] */
    (xdc_Char)0x72,  /* [1627] */
    (xdc_Char)0x69,  /* [1628] */
    (xdc_Char)0x74,  /* [1629] */
    (xdc_Char)0x79,  /* [1630] */
    (xdc_Char)0x20,  /* [1631] */
    (xdc_Char)0x77,  /* [1632] */
    (xdc_Char)0x61,  /* [1633] */
    (xdc_Char)0x73,  /* [1634] */
    (xdc_Char)0x20,  /* [1635] */
    (xdc_Char)0x75,  /* [1636] */
    (xdc_Char)0x73,  /* [1637] */
    (xdc_Char)0x65,  /* [1638] */
    (xdc_Char)0x64,  /* [1639] */
    (xdc_Char)0x2e,  /* [1640] */
    (xdc_Char)0x0,  /* [1641] */
    (xdc_Char)0x41,  /* [1642] */
    (xdc_Char)0x5f,  /* [1643] */
    (xdc_Char)0x62,  /* [1644] */
    (xdc_Char)0x61,  /* [1645] */
    (xdc_Char)0x64,  /* [1646] */
    (xdc_Char)0x54,  /* [1647] */
    (xdc_Char)0x69,  /* [1648] */
    (xdc_Char)0x6d,  /* [1649] */
    (xdc_Char)0x65,  /* [1650] */
    (xdc_Char)0x6f,  /* [1651] */
    (xdc_Char)0x75,  /* [1652] */
    (xdc_Char)0x74,  /* [1653] */
    (xdc_Char)0x3a,  /* [1654] */
    (xdc_Char)0x20,  /* [1655] */
    (xdc_Char)0x43,  /* [1656] */
    (xdc_Char)0x61,  /* [1657] */
    (xdc_Char)0x6e,  /* [1658] */
    (xdc_Char)0x27,  /* [1659] */
    (xdc_Char)0x74,  /* [1660] */
    (xdc_Char)0x20,  /* [1661] */
    (xdc_Char)0x73,  /* [1662] */
    (xdc_Char)0x6c,  /* [1663] */
    (xdc_Char)0x65,  /* [1664] */
    (xdc_Char)0x65,  /* [1665] */
    (xdc_Char)0x70,  /* [1666] */
    (xdc_Char)0x20,  /* [1667] */
    (xdc_Char)0x46,  /* [1668] */
    (xdc_Char)0x4f,  /* [1669] */
    (xdc_Char)0x52,  /* [1670] */
    (xdc_Char)0x45,  /* [1671] */
    (xdc_Char)0x56,  /* [1672] */
    (xdc_Char)0x45,  /* [1673] */
    (xdc_Char)0x52,  /* [1674] */
    (xdc_Char)0x2e,  /* [1675] */
    (xdc_Char)0x0,  /* [1676] */
    (xdc_Char)0x41,  /* [1677] */
    (xdc_Char)0x5f,  /* [1678] */
    (xdc_Char)0x62,  /* [1679] */
    (xdc_Char)0x61,  /* [1680] */
    (xdc_Char)0x64,  /* [1681] */
    (xdc_Char)0x41,  /* [1682] */
    (xdc_Char)0x66,  /* [1683] */
    (xdc_Char)0x66,  /* [1684] */
    (xdc_Char)0x69,  /* [1685] */
    (xdc_Char)0x6e,  /* [1686] */
    (xdc_Char)0x69,  /* [1687] */
    (xdc_Char)0x74,  /* [1688] */
    (xdc_Char)0x79,  /* [1689] */
    (xdc_Char)0x3a,  /* [1690] */
    (xdc_Char)0x20,  /* [1691] */
    (xdc_Char)0x49,  /* [1692] */
    (xdc_Char)0x6e,  /* [1693] */
    (xdc_Char)0x76,  /* [1694] */
    (xdc_Char)0x61,  /* [1695] */
    (xdc_Char)0x6c,  /* [1696] */
    (xdc_Char)0x69,  /* [1697] */
    (xdc_Char)0x64,  /* [1698] */
    (xdc_Char)0x20,  /* [1699] */
    (xdc_Char)0x61,  /* [1700] */
    (xdc_Char)0x66,  /* [1701] */
    (xdc_Char)0x66,  /* [1702] */
    (xdc_Char)0x69,  /* [1703] */
    (xdc_Char)0x6e,  /* [1704] */
    (xdc_Char)0x69,  /* [1705] */
    (xdc_Char)0x74,  /* [1706] */
    (xdc_Char)0x79,  /* [1707] */
    (xdc_Char)0x2e,  /* [1708] */
    (xdc_Char)0x0,  /* [1709] */
    (xdc_Char)0x41,  /* [1710] */
    (xdc_Char)0x5f,  /* [1711] */
    (xdc_Char)0x73,  /* [1712] */
    (xdc_Char)0x6c,  /* [1713] */
    (xdc_Char)0x65,  /* [1714] */
    (xdc_Char)0x65,  /* [1715] */
    (xdc_Char)0x70,  /* [1716] */
    (xdc_Char)0x54,  /* [1717] */
    (xdc_Char)0x61,  /* [1718] */
    (xdc_Char)0x73,  /* [1719] */
    (xdc_Char)0x6b,  /* [1720] */
    (xdc_Char)0x44,  /* [1721] */
    (xdc_Char)0x69,  /* [1722] */
    (xdc_Char)0x73,  /* [1723] */
    (xdc_Char)0x61,  /* [1724] */
    (xdc_Char)0x62,  /* [1725] */
    (xdc_Char)0x6c,  /* [1726] */
    (xdc_Char)0x65,  /* [1727] */
    (xdc_Char)0x64,  /* [1728] */
    (xdc_Char)0x3a,  /* [1729] */
    (xdc_Char)0x20,  /* [1730] */
    (xdc_Char)0x43,  /* [1731] */
    (xdc_Char)0x61,  /* [1732] */
    (xdc_Char)0x6e,  /* [1733] */
    (xdc_Char)0x6e,  /* [1734] */
    (xdc_Char)0x6f,  /* [1735] */
    (xdc_Char)0x74,  /* [1736] */
    (xdc_Char)0x20,  /* [1737] */
    (xdc_Char)0x63,  /* [1738] */
    (xdc_Char)0x61,  /* [1739] */
    (xdc_Char)0x6c,  /* [1740] */
    (xdc_Char)0x6c,  /* [1741] */
    (xdc_Char)0x20,  /* [1742] */
    (xdc_Char)0x54,  /* [1743] */
    (xdc_Char)0x61,  /* [1744] */
    (xdc_Char)0x73,  /* [1745] */
    (xdc_Char)0x6b,  /* [1746] */
    (xdc_Char)0x5f,  /* [1747] */
    (xdc_Char)0x73,  /* [1748] */
    (xdc_Char)0x6c,  /* [1749] */
    (xdc_Char)0x65,  /* [1750] */
    (xdc_Char)0x65,  /* [1751] */
    (xdc_Char)0x70,  /* [1752] */
    (xdc_Char)0x28,  /* [1753] */
    (xdc_Char)0x29,  /* [1754] */
    (xdc_Char)0x20,  /* [1755] */
    (xdc_Char)0x77,  /* [1756] */
    (xdc_Char)0x68,  /* [1757] */
    (xdc_Char)0x69,  /* [1758] */
    (xdc_Char)0x6c,  /* [1759] */
    (xdc_Char)0x65,  /* [1760] */
    (xdc_Char)0x20,  /* [1761] */
    (xdc_Char)0x74,  /* [1762] */
    (xdc_Char)0x68,  /* [1763] */
    (xdc_Char)0x65,  /* [1764] */
    (xdc_Char)0x20,  /* [1765] */
    (xdc_Char)0x54,  /* [1766] */
    (xdc_Char)0x61,  /* [1767] */
    (xdc_Char)0x73,  /* [1768] */
    (xdc_Char)0x6b,  /* [1769] */
    (xdc_Char)0x20,  /* [1770] */
    (xdc_Char)0x73,  /* [1771] */
    (xdc_Char)0x63,  /* [1772] */
    (xdc_Char)0x68,  /* [1773] */
    (xdc_Char)0x65,  /* [1774] */
    (xdc_Char)0x64,  /* [1775] */
    (xdc_Char)0x75,  /* [1776] */
    (xdc_Char)0x6c,  /* [1777] */
    (xdc_Char)0x65,  /* [1778] */
    (xdc_Char)0x72,  /* [1779] */
    (xdc_Char)0x20,  /* [1780] */
    (xdc_Char)0x69,  /* [1781] */
    (xdc_Char)0x73,  /* [1782] */
    (xdc_Char)0x20,  /* [1783] */
    (xdc_Char)0x64,  /* [1784] */
    (xdc_Char)0x69,  /* [1785] */
    (xdc_Char)0x73,  /* [1786] */
    (xdc_Char)0x61,  /* [1787] */
    (xdc_Char)0x62,  /* [1788] */
    (xdc_Char)0x6c,  /* [1789] */
    (xdc_Char)0x65,  /* [1790] */
    (xdc_Char)0x64,  /* [1791] */
    (xdc_Char)0x2e,  /* [1792] */
    (xdc_Char)0x0,  /* [1793] */
    (xdc_Char)0x41,  /* [1794] */
    (xdc_Char)0x5f,  /* [1795] */
    (xdc_Char)0x69,  /* [1796] */
    (xdc_Char)0x6e,  /* [1797] */
    (xdc_Char)0x76,  /* [1798] */
    (xdc_Char)0x61,  /* [1799] */
    (xdc_Char)0x6c,  /* [1800] */
    (xdc_Char)0x69,  /* [1801] */
    (xdc_Char)0x64,  /* [1802] */
    (xdc_Char)0x43,  /* [1803] */
    (xdc_Char)0x6f,  /* [1804] */
    (xdc_Char)0x72,  /* [1805] */
    (xdc_Char)0x65,  /* [1806] */
    (xdc_Char)0x49,  /* [1807] */
    (xdc_Char)0x64,  /* [1808] */
    (xdc_Char)0x3a,  /* [1809] */
    (xdc_Char)0x20,  /* [1810] */
    (xdc_Char)0x43,  /* [1811] */
    (xdc_Char)0x61,  /* [1812] */
    (xdc_Char)0x6e,  /* [1813] */
    (xdc_Char)0x6e,  /* [1814] */
    (xdc_Char)0x6f,  /* [1815] */
    (xdc_Char)0x74,  /* [1816] */
    (xdc_Char)0x20,  /* [1817] */
    (xdc_Char)0x70,  /* [1818] */
    (xdc_Char)0x61,  /* [1819] */
    (xdc_Char)0x73,  /* [1820] */
    (xdc_Char)0x73,  /* [1821] */
    (xdc_Char)0x20,  /* [1822] */
    (xdc_Char)0x61,  /* [1823] */
    (xdc_Char)0x20,  /* [1824] */
    (xdc_Char)0x6e,  /* [1825] */
    (xdc_Char)0x6f,  /* [1826] */
    (xdc_Char)0x6e,  /* [1827] */
    (xdc_Char)0x2d,  /* [1828] */
    (xdc_Char)0x7a,  /* [1829] */
    (xdc_Char)0x65,  /* [1830] */
    (xdc_Char)0x72,  /* [1831] */
    (xdc_Char)0x6f,  /* [1832] */
    (xdc_Char)0x20,  /* [1833] */
    (xdc_Char)0x43,  /* [1834] */
    (xdc_Char)0x6f,  /* [1835] */
    (xdc_Char)0x72,  /* [1836] */
    (xdc_Char)0x65,  /* [1837] */
    (xdc_Char)0x49,  /* [1838] */
    (xdc_Char)0x64,  /* [1839] */
    (xdc_Char)0x20,  /* [1840] */
    (xdc_Char)0x69,  /* [1841] */
    (xdc_Char)0x6e,  /* [1842] */
    (xdc_Char)0x20,  /* [1843] */
    (xdc_Char)0x61,  /* [1844] */
    (xdc_Char)0x20,  /* [1845] */
    (xdc_Char)0x6e,  /* [1846] */
    (xdc_Char)0x6f,  /* [1847] */
    (xdc_Char)0x6e,  /* [1848] */
    (xdc_Char)0x2d,  /* [1849] */
    (xdc_Char)0x53,  /* [1850] */
    (xdc_Char)0x4d,  /* [1851] */
    (xdc_Char)0x50,  /* [1852] */
    (xdc_Char)0x20,  /* [1853] */
    (xdc_Char)0x61,  /* [1854] */
    (xdc_Char)0x70,  /* [1855] */
    (xdc_Char)0x70,  /* [1856] */
    (xdc_Char)0x6c,  /* [1857] */
    (xdc_Char)0x69,  /* [1858] */
    (xdc_Char)0x63,  /* [1859] */
    (xdc_Char)0x61,  /* [1860] */
    (xdc_Char)0x74,  /* [1861] */
    (xdc_Char)0x69,  /* [1862] */
    (xdc_Char)0x6f,  /* [1863] */
    (xdc_Char)0x6e,  /* [1864] */
    (xdc_Char)0x2e,  /* [1865] */
    (xdc_Char)0x0,  /* [1866] */
    (xdc_Char)0x41,  /* [1867] */
    (xdc_Char)0x5f,  /* [1868] */
    (xdc_Char)0x62,  /* [1869] */
    (xdc_Char)0x61,  /* [1870] */
    (xdc_Char)0x64,  /* [1871] */
    (xdc_Char)0x42,  /* [1872] */
    (xdc_Char)0x6c,  /* [1873] */
    (xdc_Char)0x6f,  /* [1874] */
    (xdc_Char)0x63,  /* [1875] */
    (xdc_Char)0x6b,  /* [1876] */
    (xdc_Char)0x4c,  /* [1877] */
    (xdc_Char)0x65,  /* [1878] */
    (xdc_Char)0x6e,  /* [1879] */
    (xdc_Char)0x67,  /* [1880] */
    (xdc_Char)0x74,  /* [1881] */
    (xdc_Char)0x68,  /* [1882] */
    (xdc_Char)0x3a,  /* [1883] */
    (xdc_Char)0x20,  /* [1884] */
    (xdc_Char)0x42,  /* [1885] */
    (xdc_Char)0x6c,  /* [1886] */
    (xdc_Char)0x6f,  /* [1887] */
    (xdc_Char)0x63,  /* [1888] */
    (xdc_Char)0x6b,  /* [1889] */
    (xdc_Char)0x20,  /* [1890] */
    (xdc_Char)0x6c,  /* [1891] */
    (xdc_Char)0x65,  /* [1892] */
    (xdc_Char)0x6e,  /* [1893] */
    (xdc_Char)0x67,  /* [1894] */
    (xdc_Char)0x74,  /* [1895] */
    (xdc_Char)0x68,  /* [1896] */
    (xdc_Char)0x20,  /* [1897] */
    (xdc_Char)0x74,  /* [1898] */
    (xdc_Char)0x6f,  /* [1899] */
    (xdc_Char)0x6f,  /* [1900] */
    (xdc_Char)0x20,  /* [1901] */
    (xdc_Char)0x6c,  /* [1902] */
    (xdc_Char)0x61,  /* [1903] */
    (xdc_Char)0x72,  /* [1904] */
    (xdc_Char)0x67,  /* [1905] */
    (xdc_Char)0x65,  /* [1906] */
    (xdc_Char)0x2e,  /* [1907] */
    (xdc_Char)0x20,  /* [1908] */
    (xdc_Char)0x4d,  /* [1909] */
    (xdc_Char)0x75,  /* [1910] */
    (xdc_Char)0x73,  /* [1911] */
    (xdc_Char)0x74,  /* [1912] */
    (xdc_Char)0x20,  /* [1913] */
    (xdc_Char)0x62,  /* [1914] */
    (xdc_Char)0x65,  /* [1915] */
    (xdc_Char)0x20,  /* [1916] */
    (xdc_Char)0x3c,  /* [1917] */
    (xdc_Char)0x3d,  /* [1918] */
    (xdc_Char)0x20,  /* [1919] */
    (xdc_Char)0x4c,  /* [1920] */
    (xdc_Char)0x32,  /* [1921] */
    (xdc_Char)0x20,  /* [1922] */
    (xdc_Char)0x77,  /* [1923] */
    (xdc_Char)0x61,  /* [1924] */
    (xdc_Char)0x79,  /* [1925] */
    (xdc_Char)0x20,  /* [1926] */
    (xdc_Char)0x73,  /* [1927] */
    (xdc_Char)0x69,  /* [1928] */
    (xdc_Char)0x7a,  /* [1929] */
    (xdc_Char)0x65,  /* [1930] */
    (xdc_Char)0x2e,  /* [1931] */
    (xdc_Char)0x0,  /* [1932] */
    (xdc_Char)0x41,  /* [1933] */
    (xdc_Char)0x5f,  /* [1934] */
    (xdc_Char)0x62,  /* [1935] */
    (xdc_Char)0x6c,  /* [1936] */
    (xdc_Char)0x6f,  /* [1937] */
    (xdc_Char)0x63,  /* [1938] */
    (xdc_Char)0x6b,  /* [1939] */
    (xdc_Char)0x43,  /* [1940] */
    (xdc_Char)0x72,  /* [1941] */
    (xdc_Char)0x6f,  /* [1942] */
    (xdc_Char)0x73,  /* [1943] */
    (xdc_Char)0x73,  /* [1944] */
    (xdc_Char)0x65,  /* [1945] */
    (xdc_Char)0x73,  /* [1946] */
    (xdc_Char)0x50,  /* [1947] */
    (xdc_Char)0x61,  /* [1948] */
    (xdc_Char)0x67,  /* [1949] */
    (xdc_Char)0x65,  /* [1950] */
    (xdc_Char)0x3a,  /* [1951] */
    (xdc_Char)0x20,  /* [1952] */
    (xdc_Char)0x4d,  /* [1953] */
    (xdc_Char)0x65,  /* [1954] */
    (xdc_Char)0x6d,  /* [1955] */
    (xdc_Char)0x6f,  /* [1956] */
    (xdc_Char)0x72,  /* [1957] */
    (xdc_Char)0x79,  /* [1958] */
    (xdc_Char)0x20,  /* [1959] */
    (xdc_Char)0x62,  /* [1960] */
    (xdc_Char)0x6c,  /* [1961] */
    (xdc_Char)0x6f,  /* [1962] */
    (xdc_Char)0x63,  /* [1963] */
    (xdc_Char)0x6b,  /* [1964] */
    (xdc_Char)0x20,  /* [1965] */
    (xdc_Char)0x63,  /* [1966] */
    (xdc_Char)0x72,  /* [1967] */
    (xdc_Char)0x6f,  /* [1968] */
    (xdc_Char)0x73,  /* [1969] */
    (xdc_Char)0x73,  /* [1970] */
    (xdc_Char)0x65,  /* [1971] */
    (xdc_Char)0x73,  /* [1972] */
    (xdc_Char)0x20,  /* [1973] */
    (xdc_Char)0x4c,  /* [1974] */
    (xdc_Char)0x32,  /* [1975] */
    (xdc_Char)0x20,  /* [1976] */
    (xdc_Char)0x77,  /* [1977] */
    (xdc_Char)0x61,  /* [1978] */
    (xdc_Char)0x79,  /* [1979] */
    (xdc_Char)0x20,  /* [1980] */
    (xdc_Char)0x70,  /* [1981] */
    (xdc_Char)0x61,  /* [1982] */
    (xdc_Char)0x67,  /* [1983] */
    (xdc_Char)0x65,  /* [1984] */
    (xdc_Char)0x20,  /* [1985] */
    (xdc_Char)0x62,  /* [1986] */
    (xdc_Char)0x6f,  /* [1987] */
    (xdc_Char)0x75,  /* [1988] */
    (xdc_Char)0x6e,  /* [1989] */
    (xdc_Char)0x64,  /* [1990] */
    (xdc_Char)0x61,  /* [1991] */
    (xdc_Char)0x72,  /* [1992] */
    (xdc_Char)0x79,  /* [1993] */
    (xdc_Char)0x2e,  /* [1994] */
    (xdc_Char)0x0,  /* [1995] */
    (xdc_Char)0x41,  /* [1996] */
    (xdc_Char)0x5f,  /* [1997] */
    (xdc_Char)0x75,  /* [1998] */
    (xdc_Char)0x6e,  /* [1999] */
    (xdc_Char)0x6b,  /* [2000] */
    (xdc_Char)0x6e,  /* [2001] */
    (xdc_Char)0x6f,  /* [2002] */
    (xdc_Char)0x77,  /* [2003] */
    (xdc_Char)0x6e,  /* [2004] */
    (xdc_Char)0x44,  /* [2005] */
    (xdc_Char)0x65,  /* [2006] */
    (xdc_Char)0x73,  /* [2007] */
    (xdc_Char)0x63,  /* [2008] */
    (xdc_Char)0x54,  /* [2009] */
    (xdc_Char)0x79,  /* [2010] */
    (xdc_Char)0x70,  /* [2011] */
    (xdc_Char)0x65,  /* [2012] */
    (xdc_Char)0x3a,  /* [2013] */
    (xdc_Char)0x20,  /* [2014] */
    (xdc_Char)0x44,  /* [2015] */
    (xdc_Char)0x65,  /* [2016] */
    (xdc_Char)0x73,  /* [2017] */
    (xdc_Char)0x63,  /* [2018] */
    (xdc_Char)0x72,  /* [2019] */
    (xdc_Char)0x69,  /* [2020] */
    (xdc_Char)0x70,  /* [2021] */
    (xdc_Char)0x74,  /* [2022] */
    (xdc_Char)0x6f,  /* [2023] */
    (xdc_Char)0x72,  /* [2024] */
    (xdc_Char)0x20,  /* [2025] */
    (xdc_Char)0x74,  /* [2026] */
    (xdc_Char)0x79,  /* [2027] */
    (xdc_Char)0x70,  /* [2028] */
    (xdc_Char)0x65,  /* [2029] */
    (xdc_Char)0x20,  /* [2030] */
    (xdc_Char)0x69,  /* [2031] */
    (xdc_Char)0x73,  /* [2032] */
    (xdc_Char)0x20,  /* [2033] */
    (xdc_Char)0x6e,  /* [2034] */
    (xdc_Char)0x6f,  /* [2035] */
    (xdc_Char)0x74,  /* [2036] */
    (xdc_Char)0x20,  /* [2037] */
    (xdc_Char)0x72,  /* [2038] */
    (xdc_Char)0x65,  /* [2039] */
    (xdc_Char)0x63,  /* [2040] */
    (xdc_Char)0x6f,  /* [2041] */
    (xdc_Char)0x67,  /* [2042] */
    (xdc_Char)0x6e,  /* [2043] */
    (xdc_Char)0x69,  /* [2044] */
    (xdc_Char)0x7a,  /* [2045] */
    (xdc_Char)0x65,  /* [2046] */
    (xdc_Char)0x64,  /* [2047] */
    (xdc_Char)0x0,  /* [2048] */
    (xdc_Char)0x41,  /* [2049] */
    (xdc_Char)0x5f,  /* [2050] */
    (xdc_Char)0x7a,  /* [2051] */
    (xdc_Char)0x65,  /* [2052] */
    (xdc_Char)0x72,  /* [2053] */
    (xdc_Char)0x6f,  /* [2054] */
    (xdc_Char)0x54,  /* [2055] */
    (xdc_Char)0x69,  /* [2056] */
    (xdc_Char)0x6d,  /* [2057] */
    (xdc_Char)0x65,  /* [2058] */
    (xdc_Char)0x6f,  /* [2059] */
    (xdc_Char)0x75,  /* [2060] */
    (xdc_Char)0x74,  /* [2061] */
    (xdc_Char)0x3a,  /* [2062] */
    (xdc_Char)0x20,  /* [2063] */
    (xdc_Char)0x54,  /* [2064] */
    (xdc_Char)0x69,  /* [2065] */
    (xdc_Char)0x6d,  /* [2066] */
    (xdc_Char)0x65,  /* [2067] */
    (xdc_Char)0x6f,  /* [2068] */
    (xdc_Char)0x75,  /* [2069] */
    (xdc_Char)0x74,  /* [2070] */
    (xdc_Char)0x20,  /* [2071] */
    (xdc_Char)0x76,  /* [2072] */
    (xdc_Char)0x61,  /* [2073] */
    (xdc_Char)0x6c,  /* [2074] */
    (xdc_Char)0x75,  /* [2075] */
    (xdc_Char)0x65,  /* [2076] */
    (xdc_Char)0x20,  /* [2077] */
    (xdc_Char)0x61,  /* [2078] */
    (xdc_Char)0x6e,  /* [2079] */
    (xdc_Char)0x6e,  /* [2080] */
    (xdc_Char)0x6f,  /* [2081] */
    (xdc_Char)0x74,  /* [2082] */
    (xdc_Char)0x20,  /* [2083] */
    (xdc_Char)0x62,  /* [2084] */
    (xdc_Char)0x65,  /* [2085] */
    (xdc_Char)0x20,  /* [2086] */
    (xdc_Char)0x7a,  /* [2087] */
    (xdc_Char)0x65,  /* [2088] */
    (xdc_Char)0x72,  /* [2089] */
    (xdc_Char)0x6f,  /* [2090] */
    (xdc_Char)0x0,  /* [2091] */
    (xdc_Char)0x41,  /* [2092] */
    (xdc_Char)0x5f,  /* [2093] */
    (xdc_Char)0x69,  /* [2094] */
    (xdc_Char)0x6e,  /* [2095] */
    (xdc_Char)0x76,  /* [2096] */
    (xdc_Char)0x61,  /* [2097] */
    (xdc_Char)0x6c,  /* [2098] */
    (xdc_Char)0x69,  /* [2099] */
    (xdc_Char)0x64,  /* [2100] */
    (xdc_Char)0x4b,  /* [2101] */
    (xdc_Char)0x65,  /* [2102] */
    (xdc_Char)0x79,  /* [2103] */
    (xdc_Char)0x3a,  /* [2104] */
    (xdc_Char)0x20,  /* [2105] */
    (xdc_Char)0x74,  /* [2106] */
    (xdc_Char)0x68,  /* [2107] */
    (xdc_Char)0x65,  /* [2108] */
    (xdc_Char)0x20,  /* [2109] */
    (xdc_Char)0x6b,  /* [2110] */
    (xdc_Char)0x65,  /* [2111] */
    (xdc_Char)0x79,  /* [2112] */
    (xdc_Char)0x20,  /* [2113] */
    (xdc_Char)0x6d,  /* [2114] */
    (xdc_Char)0x75,  /* [2115] */
    (xdc_Char)0x73,  /* [2116] */
    (xdc_Char)0x74,  /* [2117] */
    (xdc_Char)0x20,  /* [2118] */
    (xdc_Char)0x62,  /* [2119] */
    (xdc_Char)0x65,  /* [2120] */
    (xdc_Char)0x20,  /* [2121] */
    (xdc_Char)0x73,  /* [2122] */
    (xdc_Char)0x65,  /* [2123] */
    (xdc_Char)0x74,  /* [2124] */
    (xdc_Char)0x20,  /* [2125] */
    (xdc_Char)0x74,  /* [2126] */
    (xdc_Char)0x6f,  /* [2127] */
    (xdc_Char)0x20,  /* [2128] */
    (xdc_Char)0x61,  /* [2129] */
    (xdc_Char)0x20,  /* [2130] */
    (xdc_Char)0x6e,  /* [2131] */
    (xdc_Char)0x6f,  /* [2132] */
    (xdc_Char)0x6e,  /* [2133] */
    (xdc_Char)0x2d,  /* [2134] */
    (xdc_Char)0x64,  /* [2135] */
    (xdc_Char)0x65,  /* [2136] */
    (xdc_Char)0x66,  /* [2137] */
    (xdc_Char)0x61,  /* [2138] */
    (xdc_Char)0x75,  /* [2139] */
    (xdc_Char)0x6c,  /* [2140] */
    (xdc_Char)0x74,  /* [2141] */
    (xdc_Char)0x20,  /* [2142] */
    (xdc_Char)0x76,  /* [2143] */
    (xdc_Char)0x61,  /* [2144] */
    (xdc_Char)0x6c,  /* [2145] */
    (xdc_Char)0x75,  /* [2146] */
    (xdc_Char)0x65,  /* [2147] */
    (xdc_Char)0x0,  /* [2148] */
    (xdc_Char)0x41,  /* [2149] */
    (xdc_Char)0x5f,  /* [2150] */
    (xdc_Char)0x62,  /* [2151] */
    (xdc_Char)0x61,  /* [2152] */
    (xdc_Char)0x64,  /* [2153] */
    (xdc_Char)0x43,  /* [2154] */
    (xdc_Char)0x6f,  /* [2155] */
    (xdc_Char)0x6e,  /* [2156] */
    (xdc_Char)0x74,  /* [2157] */
    (xdc_Char)0x65,  /* [2158] */
    (xdc_Char)0x78,  /* [2159] */
    (xdc_Char)0x74,  /* [2160] */
    (xdc_Char)0x3a,  /* [2161] */
    (xdc_Char)0x20,  /* [2162] */
    (xdc_Char)0x62,  /* [2163] */
    (xdc_Char)0x61,  /* [2164] */
    (xdc_Char)0x64,  /* [2165] */
    (xdc_Char)0x20,  /* [2166] */
    (xdc_Char)0x63,  /* [2167] */
    (xdc_Char)0x61,  /* [2168] */
    (xdc_Char)0x6c,  /* [2169] */
    (xdc_Char)0x6c,  /* [2170] */
    (xdc_Char)0x69,  /* [2171] */
    (xdc_Char)0x6e,  /* [2172] */
    (xdc_Char)0x67,  /* [2173] */
    (xdc_Char)0x20,  /* [2174] */
    (xdc_Char)0x63,  /* [2175] */
    (xdc_Char)0x6f,  /* [2176] */
    (xdc_Char)0x6e,  /* [2177] */
    (xdc_Char)0x74,  /* [2178] */
    (xdc_Char)0x65,  /* [2179] */
    (xdc_Char)0x78,  /* [2180] */
    (xdc_Char)0x74,  /* [2181] */
    (xdc_Char)0x2e,  /* [2182] */
    (xdc_Char)0x20,  /* [2183] */
    (xdc_Char)0x4d,  /* [2184] */
    (xdc_Char)0x61,  /* [2185] */
    (xdc_Char)0x79,  /* [2186] */
    (xdc_Char)0x20,  /* [2187] */
    (xdc_Char)0x6e,  /* [2188] */
    (xdc_Char)0x6f,  /* [2189] */
    (xdc_Char)0x74,  /* [2190] */
    (xdc_Char)0x20,  /* [2191] */
    (xdc_Char)0x62,  /* [2192] */
    (xdc_Char)0x65,  /* [2193] */
    (xdc_Char)0x20,  /* [2194] */
    (xdc_Char)0x65,  /* [2195] */
    (xdc_Char)0x6e,  /* [2196] */
    (xdc_Char)0x74,  /* [2197] */
    (xdc_Char)0x65,  /* [2198] */
    (xdc_Char)0x72,  /* [2199] */
    (xdc_Char)0x65,  /* [2200] */
    (xdc_Char)0x64,  /* [2201] */
    (xdc_Char)0x20,  /* [2202] */
    (xdc_Char)0x66,  /* [2203] */
    (xdc_Char)0x72,  /* [2204] */
    (xdc_Char)0x6f,  /* [2205] */
    (xdc_Char)0x6d,  /* [2206] */
    (xdc_Char)0x20,  /* [2207] */
    (xdc_Char)0x61,  /* [2208] */
    (xdc_Char)0x20,  /* [2209] */
    (xdc_Char)0x68,  /* [2210] */
    (xdc_Char)0x61,  /* [2211] */
    (xdc_Char)0x72,  /* [2212] */
    (xdc_Char)0x64,  /* [2213] */
    (xdc_Char)0x77,  /* [2214] */
    (xdc_Char)0x61,  /* [2215] */
    (xdc_Char)0x72,  /* [2216] */
    (xdc_Char)0x65,  /* [2217] */
    (xdc_Char)0x20,  /* [2218] */
    (xdc_Char)0x69,  /* [2219] */
    (xdc_Char)0x6e,  /* [2220] */
    (xdc_Char)0x74,  /* [2221] */
    (xdc_Char)0x65,  /* [2222] */
    (xdc_Char)0x72,  /* [2223] */
    (xdc_Char)0x72,  /* [2224] */
    (xdc_Char)0x75,  /* [2225] */
    (xdc_Char)0x70,  /* [2226] */
    (xdc_Char)0x74,  /* [2227] */
    (xdc_Char)0x20,  /* [2228] */
    (xdc_Char)0x74,  /* [2229] */
    (xdc_Char)0x68,  /* [2230] */
    (xdc_Char)0x72,  /* [2231] */
    (xdc_Char)0x65,  /* [2232] */
    (xdc_Char)0x61,  /* [2233] */
    (xdc_Char)0x64,  /* [2234] */
    (xdc_Char)0x2e,  /* [2235] */
    (xdc_Char)0x0,  /* [2236] */
    (xdc_Char)0x41,  /* [2237] */
    (xdc_Char)0x5f,  /* [2238] */
    (xdc_Char)0x62,  /* [2239] */
    (xdc_Char)0x61,  /* [2240] */
    (xdc_Char)0x64,  /* [2241] */
    (xdc_Char)0x43,  /* [2242] */
    (xdc_Char)0x6f,  /* [2243] */
    (xdc_Char)0x6e,  /* [2244] */
    (xdc_Char)0x74,  /* [2245] */
    (xdc_Char)0x65,  /* [2246] */
    (xdc_Char)0x78,  /* [2247] */
    (xdc_Char)0x74,  /* [2248] */
    (xdc_Char)0x3a,  /* [2249] */
    (xdc_Char)0x20,  /* [2250] */
    (xdc_Char)0x62,  /* [2251] */
    (xdc_Char)0x61,  /* [2252] */
    (xdc_Char)0x64,  /* [2253] */
    (xdc_Char)0x20,  /* [2254] */
    (xdc_Char)0x63,  /* [2255] */
    (xdc_Char)0x61,  /* [2256] */
    (xdc_Char)0x6c,  /* [2257] */
    (xdc_Char)0x6c,  /* [2258] */
    (xdc_Char)0x69,  /* [2259] */
    (xdc_Char)0x6e,  /* [2260] */
    (xdc_Char)0x67,  /* [2261] */
    (xdc_Char)0x20,  /* [2262] */
    (xdc_Char)0x63,  /* [2263] */
    (xdc_Char)0x6f,  /* [2264] */
    (xdc_Char)0x6e,  /* [2265] */
    (xdc_Char)0x74,  /* [2266] */
    (xdc_Char)0x65,  /* [2267] */
    (xdc_Char)0x78,  /* [2268] */
    (xdc_Char)0x74,  /* [2269] */
    (xdc_Char)0x2e,  /* [2270] */
    (xdc_Char)0x20,  /* [2271] */
    (xdc_Char)0x4d,  /* [2272] */
    (xdc_Char)0x61,  /* [2273] */
    (xdc_Char)0x79,  /* [2274] */
    (xdc_Char)0x20,  /* [2275] */
    (xdc_Char)0x6e,  /* [2276] */
    (xdc_Char)0x6f,  /* [2277] */
    (xdc_Char)0x74,  /* [2278] */
    (xdc_Char)0x20,  /* [2279] */
    (xdc_Char)0x62,  /* [2280] */
    (xdc_Char)0x65,  /* [2281] */
    (xdc_Char)0x20,  /* [2282] */
    (xdc_Char)0x65,  /* [2283] */
    (xdc_Char)0x6e,  /* [2284] */
    (xdc_Char)0x74,  /* [2285] */
    (xdc_Char)0x65,  /* [2286] */
    (xdc_Char)0x72,  /* [2287] */
    (xdc_Char)0x65,  /* [2288] */
    (xdc_Char)0x64,  /* [2289] */
    (xdc_Char)0x20,  /* [2290] */
    (xdc_Char)0x66,  /* [2291] */
    (xdc_Char)0x72,  /* [2292] */
    (xdc_Char)0x6f,  /* [2293] */
    (xdc_Char)0x6d,  /* [2294] */
    (xdc_Char)0x20,  /* [2295] */
    (xdc_Char)0x61,  /* [2296] */
    (xdc_Char)0x20,  /* [2297] */
    (xdc_Char)0x73,  /* [2298] */
    (xdc_Char)0x6f,  /* [2299] */
    (xdc_Char)0x66,  /* [2300] */
    (xdc_Char)0x74,  /* [2301] */
    (xdc_Char)0x77,  /* [2302] */
    (xdc_Char)0x61,  /* [2303] */
    (xdc_Char)0x72,  /* [2304] */
    (xdc_Char)0x65,  /* [2305] */
    (xdc_Char)0x20,  /* [2306] */
    (xdc_Char)0x6f,  /* [2307] */
    (xdc_Char)0x72,  /* [2308] */
    (xdc_Char)0x20,  /* [2309] */
    (xdc_Char)0x68,  /* [2310] */
    (xdc_Char)0x61,  /* [2311] */
    (xdc_Char)0x72,  /* [2312] */
    (xdc_Char)0x64,  /* [2313] */
    (xdc_Char)0x77,  /* [2314] */
    (xdc_Char)0x61,  /* [2315] */
    (xdc_Char)0x72,  /* [2316] */
    (xdc_Char)0x65,  /* [2317] */
    (xdc_Char)0x20,  /* [2318] */
    (xdc_Char)0x69,  /* [2319] */
    (xdc_Char)0x6e,  /* [2320] */
    (xdc_Char)0x74,  /* [2321] */
    (xdc_Char)0x65,  /* [2322] */
    (xdc_Char)0x72,  /* [2323] */
    (xdc_Char)0x72,  /* [2324] */
    (xdc_Char)0x75,  /* [2325] */
    (xdc_Char)0x70,  /* [2326] */
    (xdc_Char)0x74,  /* [2327] */
    (xdc_Char)0x20,  /* [2328] */
    (xdc_Char)0x74,  /* [2329] */
    (xdc_Char)0x68,  /* [2330] */
    (xdc_Char)0x72,  /* [2331] */
    (xdc_Char)0x65,  /* [2332] */
    (xdc_Char)0x61,  /* [2333] */
    (xdc_Char)0x64,  /* [2334] */
    (xdc_Char)0x2e,  /* [2335] */
    (xdc_Char)0x0,  /* [2336] */
    (xdc_Char)0x41,  /* [2337] */
    (xdc_Char)0x5f,  /* [2338] */
    (xdc_Char)0x62,  /* [2339] */
    (xdc_Char)0x61,  /* [2340] */
    (xdc_Char)0x64,  /* [2341] */
    (xdc_Char)0x43,  /* [2342] */
    (xdc_Char)0x6f,  /* [2343] */
    (xdc_Char)0x6e,  /* [2344] */
    (xdc_Char)0x74,  /* [2345] */
    (xdc_Char)0x65,  /* [2346] */
    (xdc_Char)0x78,  /* [2347] */
    (xdc_Char)0x74,  /* [2348] */
    (xdc_Char)0x3a,  /* [2349] */
    (xdc_Char)0x20,  /* [2350] */
    (xdc_Char)0x62,  /* [2351] */
    (xdc_Char)0x61,  /* [2352] */
    (xdc_Char)0x64,  /* [2353] */
    (xdc_Char)0x20,  /* [2354] */
    (xdc_Char)0x63,  /* [2355] */
    (xdc_Char)0x61,  /* [2356] */
    (xdc_Char)0x6c,  /* [2357] */
    (xdc_Char)0x6c,  /* [2358] */
    (xdc_Char)0x69,  /* [2359] */
    (xdc_Char)0x6e,  /* [2360] */
    (xdc_Char)0x67,  /* [2361] */
    (xdc_Char)0x20,  /* [2362] */
    (xdc_Char)0x63,  /* [2363] */
    (xdc_Char)0x6f,  /* [2364] */
    (xdc_Char)0x6e,  /* [2365] */
    (xdc_Char)0x74,  /* [2366] */
    (xdc_Char)0x65,  /* [2367] */
    (xdc_Char)0x78,  /* [2368] */
    (xdc_Char)0x74,  /* [2369] */
    (xdc_Char)0x2e,  /* [2370] */
    (xdc_Char)0x20,  /* [2371] */
    (xdc_Char)0x53,  /* [2372] */
    (xdc_Char)0x65,  /* [2373] */
    (xdc_Char)0x65,  /* [2374] */
    (xdc_Char)0x20,  /* [2375] */
    (xdc_Char)0x47,  /* [2376] */
    (xdc_Char)0x61,  /* [2377] */
    (xdc_Char)0x74,  /* [2378] */
    (xdc_Char)0x65,  /* [2379] */
    (xdc_Char)0x4d,  /* [2380] */
    (xdc_Char)0x75,  /* [2381] */
    (xdc_Char)0x74,  /* [2382] */
    (xdc_Char)0x65,  /* [2383] */
    (xdc_Char)0x78,  /* [2384] */
    (xdc_Char)0x50,  /* [2385] */
    (xdc_Char)0x72,  /* [2386] */
    (xdc_Char)0x69,  /* [2387] */
    (xdc_Char)0x20,  /* [2388] */
    (xdc_Char)0x41,  /* [2389] */
    (xdc_Char)0x50,  /* [2390] */
    (xdc_Char)0x49,  /* [2391] */
    (xdc_Char)0x20,  /* [2392] */
    (xdc_Char)0x64,  /* [2393] */
    (xdc_Char)0x6f,  /* [2394] */
    (xdc_Char)0x63,  /* [2395] */
    (xdc_Char)0x20,  /* [2396] */
    (xdc_Char)0x66,  /* [2397] */
    (xdc_Char)0x6f,  /* [2398] */
    (xdc_Char)0x72,  /* [2399] */
    (xdc_Char)0x20,  /* [2400] */
    (xdc_Char)0x64,  /* [2401] */
    (xdc_Char)0x65,  /* [2402] */
    (xdc_Char)0x74,  /* [2403] */
    (xdc_Char)0x61,  /* [2404] */
    (xdc_Char)0x69,  /* [2405] */
    (xdc_Char)0x6c,  /* [2406] */
    (xdc_Char)0x73,  /* [2407] */
    (xdc_Char)0x2e,  /* [2408] */
    (xdc_Char)0x0,  /* [2409] */
    (xdc_Char)0x41,  /* [2410] */
    (xdc_Char)0x5f,  /* [2411] */
    (xdc_Char)0x65,  /* [2412] */
    (xdc_Char)0x6e,  /* [2413] */
    (xdc_Char)0x74,  /* [2414] */
    (xdc_Char)0x65,  /* [2415] */
    (xdc_Char)0x72,  /* [2416] */
    (xdc_Char)0x54,  /* [2417] */
    (xdc_Char)0x61,  /* [2418] */
    (xdc_Char)0x73,  /* [2419] */
    (xdc_Char)0x6b,  /* [2420] */
    (xdc_Char)0x44,  /* [2421] */
    (xdc_Char)0x69,  /* [2422] */
    (xdc_Char)0x73,  /* [2423] */
    (xdc_Char)0x61,  /* [2424] */
    (xdc_Char)0x62,  /* [2425] */
    (xdc_Char)0x6c,  /* [2426] */
    (xdc_Char)0x65,  /* [2427] */
    (xdc_Char)0x64,  /* [2428] */
    (xdc_Char)0x3a,  /* [2429] */
    (xdc_Char)0x20,  /* [2430] */
    (xdc_Char)0x43,  /* [2431] */
    (xdc_Char)0x61,  /* [2432] */
    (xdc_Char)0x6e,  /* [2433] */
    (xdc_Char)0x6e,  /* [2434] */
    (xdc_Char)0x6f,  /* [2435] */
    (xdc_Char)0x74,  /* [2436] */
    (xdc_Char)0x20,  /* [2437] */
    (xdc_Char)0x63,  /* [2438] */
    (xdc_Char)0x61,  /* [2439] */
    (xdc_Char)0x6c,  /* [2440] */
    (xdc_Char)0x6c,  /* [2441] */
    (xdc_Char)0x20,  /* [2442] */
    (xdc_Char)0x47,  /* [2443] */
    (xdc_Char)0x61,  /* [2444] */
    (xdc_Char)0x74,  /* [2445] */
    (xdc_Char)0x65,  /* [2446] */
    (xdc_Char)0x4d,  /* [2447] */
    (xdc_Char)0x75,  /* [2448] */
    (xdc_Char)0x74,  /* [2449] */
    (xdc_Char)0x65,  /* [2450] */
    (xdc_Char)0x78,  /* [2451] */
    (xdc_Char)0x50,  /* [2452] */
    (xdc_Char)0x72,  /* [2453] */
    (xdc_Char)0x69,  /* [2454] */
    (xdc_Char)0x5f,  /* [2455] */
    (xdc_Char)0x65,  /* [2456] */
    (xdc_Char)0x6e,  /* [2457] */
    (xdc_Char)0x74,  /* [2458] */
    (xdc_Char)0x65,  /* [2459] */
    (xdc_Char)0x72,  /* [2460] */
    (xdc_Char)0x28,  /* [2461] */
    (xdc_Char)0x29,  /* [2462] */
    (xdc_Char)0x20,  /* [2463] */
    (xdc_Char)0x77,  /* [2464] */
    (xdc_Char)0x68,  /* [2465] */
    (xdc_Char)0x69,  /* [2466] */
    (xdc_Char)0x6c,  /* [2467] */
    (xdc_Char)0x65,  /* [2468] */
    (xdc_Char)0x20,  /* [2469] */
    (xdc_Char)0x74,  /* [2470] */
    (xdc_Char)0x68,  /* [2471] */
    (xdc_Char)0x65,  /* [2472] */
    (xdc_Char)0x20,  /* [2473] */
    (xdc_Char)0x54,  /* [2474] */
    (xdc_Char)0x61,  /* [2475] */
    (xdc_Char)0x73,  /* [2476] */
    (xdc_Char)0x6b,  /* [2477] */
    (xdc_Char)0x20,  /* [2478] */
    (xdc_Char)0x6f,  /* [2479] */
    (xdc_Char)0x72,  /* [2480] */
    (xdc_Char)0x20,  /* [2481] */
    (xdc_Char)0x53,  /* [2482] */
    (xdc_Char)0x77,  /* [2483] */
    (xdc_Char)0x69,  /* [2484] */
    (xdc_Char)0x20,  /* [2485] */
    (xdc_Char)0x73,  /* [2486] */
    (xdc_Char)0x63,  /* [2487] */
    (xdc_Char)0x68,  /* [2488] */
    (xdc_Char)0x65,  /* [2489] */
    (xdc_Char)0x64,  /* [2490] */
    (xdc_Char)0x75,  /* [2491] */
    (xdc_Char)0x6c,  /* [2492] */
    (xdc_Char)0x65,  /* [2493] */
    (xdc_Char)0x72,  /* [2494] */
    (xdc_Char)0x20,  /* [2495] */
    (xdc_Char)0x69,  /* [2496] */
    (xdc_Char)0x73,  /* [2497] */
    (xdc_Char)0x20,  /* [2498] */
    (xdc_Char)0x64,  /* [2499] */
    (xdc_Char)0x69,  /* [2500] */
    (xdc_Char)0x73,  /* [2501] */
    (xdc_Char)0x61,  /* [2502] */
    (xdc_Char)0x62,  /* [2503] */
    (xdc_Char)0x6c,  /* [2504] */
    (xdc_Char)0x65,  /* [2505] */
    (xdc_Char)0x64,  /* [2506] */
    (xdc_Char)0x2e,  /* [2507] */
    (xdc_Char)0x0,  /* [2508] */
    (xdc_Char)0x41,  /* [2509] */
    (xdc_Char)0x5f,  /* [2510] */
    (xdc_Char)0x62,  /* [2511] */
    (xdc_Char)0x61,  /* [2512] */
    (xdc_Char)0x64,  /* [2513] */
    (xdc_Char)0x43,  /* [2514] */
    (xdc_Char)0x6f,  /* [2515] */
    (xdc_Char)0x6e,  /* [2516] */
    (xdc_Char)0x74,  /* [2517] */
    (xdc_Char)0x65,  /* [2518] */
    (xdc_Char)0x78,  /* [2519] */
    (xdc_Char)0x74,  /* [2520] */
    (xdc_Char)0x3a,  /* [2521] */
    (xdc_Char)0x20,  /* [2522] */
    (xdc_Char)0x62,  /* [2523] */
    (xdc_Char)0x61,  /* [2524] */
    (xdc_Char)0x64,  /* [2525] */
    (xdc_Char)0x20,  /* [2526] */
    (xdc_Char)0x63,  /* [2527] */
    (xdc_Char)0x61,  /* [2528] */
    (xdc_Char)0x6c,  /* [2529] */
    (xdc_Char)0x6c,  /* [2530] */
    (xdc_Char)0x69,  /* [2531] */
    (xdc_Char)0x6e,  /* [2532] */
    (xdc_Char)0x67,  /* [2533] */
    (xdc_Char)0x20,  /* [2534] */
    (xdc_Char)0x63,  /* [2535] */
    (xdc_Char)0x6f,  /* [2536] */
    (xdc_Char)0x6e,  /* [2537] */
    (xdc_Char)0x74,  /* [2538] */
    (xdc_Char)0x65,  /* [2539] */
    (xdc_Char)0x78,  /* [2540] */
    (xdc_Char)0x74,  /* [2541] */
    (xdc_Char)0x2e,  /* [2542] */
    (xdc_Char)0x20,  /* [2543] */
    (xdc_Char)0x53,  /* [2544] */
    (xdc_Char)0x65,  /* [2545] */
    (xdc_Char)0x65,  /* [2546] */
    (xdc_Char)0x20,  /* [2547] */
    (xdc_Char)0x47,  /* [2548] */
    (xdc_Char)0x61,  /* [2549] */
    (xdc_Char)0x74,  /* [2550] */
    (xdc_Char)0x65,  /* [2551] */
    (xdc_Char)0x4d,  /* [2552] */
    (xdc_Char)0x75,  /* [2553] */
    (xdc_Char)0x74,  /* [2554] */
    (xdc_Char)0x65,  /* [2555] */
    (xdc_Char)0x78,  /* [2556] */
    (xdc_Char)0x20,  /* [2557] */
    (xdc_Char)0x41,  /* [2558] */
    (xdc_Char)0x50,  /* [2559] */
    (xdc_Char)0x49,  /* [2560] */
    (xdc_Char)0x20,  /* [2561] */
    (xdc_Char)0x64,  /* [2562] */
    (xdc_Char)0x6f,  /* [2563] */
    (xdc_Char)0x63,  /* [2564] */
    (xdc_Char)0x20,  /* [2565] */
    (xdc_Char)0x66,  /* [2566] */
    (xdc_Char)0x6f,  /* [2567] */
    (xdc_Char)0x72,  /* [2568] */
    (xdc_Char)0x20,  /* [2569] */
    (xdc_Char)0x64,  /* [2570] */
    (xdc_Char)0x65,  /* [2571] */
    (xdc_Char)0x74,  /* [2572] */
    (xdc_Char)0x61,  /* [2573] */
    (xdc_Char)0x69,  /* [2574] */
    (xdc_Char)0x6c,  /* [2575] */
    (xdc_Char)0x73,  /* [2576] */
    (xdc_Char)0x2e,  /* [2577] */
    (xdc_Char)0x0,  /* [2578] */
    (xdc_Char)0x41,  /* [2579] */
    (xdc_Char)0x5f,  /* [2580] */
    (xdc_Char)0x62,  /* [2581] */
    (xdc_Char)0x61,  /* [2582] */
    (xdc_Char)0x64,  /* [2583] */
    (xdc_Char)0x43,  /* [2584] */
    (xdc_Char)0x6f,  /* [2585] */
    (xdc_Char)0x6e,  /* [2586] */
    (xdc_Char)0x74,  /* [2587] */
    (xdc_Char)0x65,  /* [2588] */
    (xdc_Char)0x78,  /* [2589] */
    (xdc_Char)0x74,  /* [2590] */
    (xdc_Char)0x3a,  /* [2591] */
    (xdc_Char)0x20,  /* [2592] */
    (xdc_Char)0x62,  /* [2593] */
    (xdc_Char)0x61,  /* [2594] */
    (xdc_Char)0x64,  /* [2595] */
    (xdc_Char)0x20,  /* [2596] */
    (xdc_Char)0x63,  /* [2597] */
    (xdc_Char)0x61,  /* [2598] */
    (xdc_Char)0x6c,  /* [2599] */
    (xdc_Char)0x6c,  /* [2600] */
    (xdc_Char)0x69,  /* [2601] */
    (xdc_Char)0x6e,  /* [2602] */
    (xdc_Char)0x67,  /* [2603] */
    (xdc_Char)0x20,  /* [2604] */
    (xdc_Char)0x63,  /* [2605] */
    (xdc_Char)0x6f,  /* [2606] */
    (xdc_Char)0x6e,  /* [2607] */
    (xdc_Char)0x74,  /* [2608] */
    (xdc_Char)0x65,  /* [2609] */
    (xdc_Char)0x78,  /* [2610] */
    (xdc_Char)0x74,  /* [2611] */
    (xdc_Char)0x2e,  /* [2612] */
    (xdc_Char)0x20,  /* [2613] */
    (xdc_Char)0x53,  /* [2614] */
    (xdc_Char)0x65,  /* [2615] */
    (xdc_Char)0x65,  /* [2616] */
    (xdc_Char)0x20,  /* [2617] */
    (xdc_Char)0x47,  /* [2618] */
    (xdc_Char)0x61,  /* [2619] */
    (xdc_Char)0x74,  /* [2620] */
    (xdc_Char)0x65,  /* [2621] */
    (xdc_Char)0x53,  /* [2622] */
    (xdc_Char)0x70,  /* [2623] */
    (xdc_Char)0x69,  /* [2624] */
    (xdc_Char)0x6e,  /* [2625] */
    (xdc_Char)0x6c,  /* [2626] */
    (xdc_Char)0x6f,  /* [2627] */
    (xdc_Char)0x63,  /* [2628] */
    (xdc_Char)0x6b,  /* [2629] */
    (xdc_Char)0x20,  /* [2630] */
    (xdc_Char)0x41,  /* [2631] */
    (xdc_Char)0x50,  /* [2632] */
    (xdc_Char)0x49,  /* [2633] */
    (xdc_Char)0x20,  /* [2634] */
    (xdc_Char)0x64,  /* [2635] */
    (xdc_Char)0x6f,  /* [2636] */
    (xdc_Char)0x63,  /* [2637] */
    (xdc_Char)0x20,  /* [2638] */
    (xdc_Char)0x66,  /* [2639] */
    (xdc_Char)0x6f,  /* [2640] */
    (xdc_Char)0x72,  /* [2641] */
    (xdc_Char)0x20,  /* [2642] */
    (xdc_Char)0x64,  /* [2643] */
    (xdc_Char)0x65,  /* [2644] */
    (xdc_Char)0x74,  /* [2645] */
    (xdc_Char)0x61,  /* [2646] */
    (xdc_Char)0x69,  /* [2647] */
    (xdc_Char)0x6c,  /* [2648] */
    (xdc_Char)0x73,  /* [2649] */
    (xdc_Char)0x2e,  /* [2650] */
    (xdc_Char)0x0,  /* [2651] */
    (xdc_Char)0x41,  /* [2652] */
    (xdc_Char)0x5f,  /* [2653] */
    (xdc_Char)0x69,  /* [2654] */
    (xdc_Char)0x6e,  /* [2655] */
    (xdc_Char)0x76,  /* [2656] */
    (xdc_Char)0x61,  /* [2657] */
    (xdc_Char)0x6c,  /* [2658] */
    (xdc_Char)0x69,  /* [2659] */
    (xdc_Char)0x64,  /* [2660] */
    (xdc_Char)0x51,  /* [2661] */
    (xdc_Char)0x75,  /* [2662] */
    (xdc_Char)0x61,  /* [2663] */
    (xdc_Char)0x6c,  /* [2664] */
    (xdc_Char)0x69,  /* [2665] */
    (xdc_Char)0x74,  /* [2666] */
    (xdc_Char)0x79,  /* [2667] */
    (xdc_Char)0x3a,  /* [2668] */
    (xdc_Char)0x20,  /* [2669] */
    (xdc_Char)0x53,  /* [2670] */
    (xdc_Char)0x65,  /* [2671] */
    (xdc_Char)0x65,  /* [2672] */
    (xdc_Char)0x20,  /* [2673] */
    (xdc_Char)0x47,  /* [2674] */
    (xdc_Char)0x61,  /* [2675] */
    (xdc_Char)0x74,  /* [2676] */
    (xdc_Char)0x65,  /* [2677] */
    (xdc_Char)0x53,  /* [2678] */
    (xdc_Char)0x70,  /* [2679] */
    (xdc_Char)0x69,  /* [2680] */
    (xdc_Char)0x6e,  /* [2681] */
    (xdc_Char)0x6c,  /* [2682] */
    (xdc_Char)0x6f,  /* [2683] */
    (xdc_Char)0x63,  /* [2684] */
    (xdc_Char)0x6b,  /* [2685] */
    (xdc_Char)0x20,  /* [2686] */
    (xdc_Char)0x41,  /* [2687] */
    (xdc_Char)0x50,  /* [2688] */
    (xdc_Char)0x49,  /* [2689] */
    (xdc_Char)0x20,  /* [2690] */
    (xdc_Char)0x64,  /* [2691] */
    (xdc_Char)0x6f,  /* [2692] */
    (xdc_Char)0x63,  /* [2693] */
    (xdc_Char)0x20,  /* [2694] */
    (xdc_Char)0x66,  /* [2695] */
    (xdc_Char)0x6f,  /* [2696] */
    (xdc_Char)0x72,  /* [2697] */
    (xdc_Char)0x20,  /* [2698] */
    (xdc_Char)0x64,  /* [2699] */
    (xdc_Char)0x65,  /* [2700] */
    (xdc_Char)0x74,  /* [2701] */
    (xdc_Char)0x61,  /* [2702] */
    (xdc_Char)0x69,  /* [2703] */
    (xdc_Char)0x6c,  /* [2704] */
    (xdc_Char)0x73,  /* [2705] */
    (xdc_Char)0x2e,  /* [2706] */
    (xdc_Char)0x0,  /* [2707] */
    (xdc_Char)0x62,  /* [2708] */
    (xdc_Char)0x75,  /* [2709] */
    (xdc_Char)0x66,  /* [2710] */
    (xdc_Char)0x20,  /* [2711] */
    (xdc_Char)0x70,  /* [2712] */
    (xdc_Char)0x61,  /* [2713] */
    (xdc_Char)0x72,  /* [2714] */
    (xdc_Char)0x61,  /* [2715] */
    (xdc_Char)0x6d,  /* [2716] */
    (xdc_Char)0x65,  /* [2717] */
    (xdc_Char)0x74,  /* [2718] */
    (xdc_Char)0x65,  /* [2719] */
    (xdc_Char)0x72,  /* [2720] */
    (xdc_Char)0x20,  /* [2721] */
    (xdc_Char)0x63,  /* [2722] */
    (xdc_Char)0x61,  /* [2723] */
    (xdc_Char)0x6e,  /* [2724] */
    (xdc_Char)0x6e,  /* [2725] */
    (xdc_Char)0x6f,  /* [2726] */
    (xdc_Char)0x74,  /* [2727] */
    (xdc_Char)0x20,  /* [2728] */
    (xdc_Char)0x62,  /* [2729] */
    (xdc_Char)0x65,  /* [2730] */
    (xdc_Char)0x20,  /* [2731] */
    (xdc_Char)0x6e,  /* [2732] */
    (xdc_Char)0x75,  /* [2733] */
    (xdc_Char)0x6c,  /* [2734] */
    (xdc_Char)0x6c,  /* [2735] */
    (xdc_Char)0x0,  /* [2736] */
    (xdc_Char)0x62,  /* [2737] */
    (xdc_Char)0x75,  /* [2738] */
    (xdc_Char)0x66,  /* [2739] */
    (xdc_Char)0x20,  /* [2740] */
    (xdc_Char)0x6e,  /* [2741] */
    (xdc_Char)0x6f,  /* [2742] */
    (xdc_Char)0x74,  /* [2743] */
    (xdc_Char)0x20,  /* [2744] */
    (xdc_Char)0x70,  /* [2745] */
    (xdc_Char)0x72,  /* [2746] */
    (xdc_Char)0x6f,  /* [2747] */
    (xdc_Char)0x70,  /* [2748] */
    (xdc_Char)0x65,  /* [2749] */
    (xdc_Char)0x72,  /* [2750] */
    (xdc_Char)0x6c,  /* [2751] */
    (xdc_Char)0x79,  /* [2752] */
    (xdc_Char)0x20,  /* [2753] */
    (xdc_Char)0x61,  /* [2754] */
    (xdc_Char)0x6c,  /* [2755] */
    (xdc_Char)0x69,  /* [2756] */
    (xdc_Char)0x67,  /* [2757] */
    (xdc_Char)0x6e,  /* [2758] */
    (xdc_Char)0x65,  /* [2759] */
    (xdc_Char)0x64,  /* [2760] */
    (xdc_Char)0x0,  /* [2761] */
    (xdc_Char)0x61,  /* [2762] */
    (xdc_Char)0x6c,  /* [2763] */
    (xdc_Char)0x69,  /* [2764] */
    (xdc_Char)0x67,  /* [2765] */
    (xdc_Char)0x6e,  /* [2766] */
    (xdc_Char)0x20,  /* [2767] */
    (xdc_Char)0x70,  /* [2768] */
    (xdc_Char)0x61,  /* [2769] */
    (xdc_Char)0x72,  /* [2770] */
    (xdc_Char)0x61,  /* [2771] */
    (xdc_Char)0x6d,  /* [2772] */
    (xdc_Char)0x65,  /* [2773] */
    (xdc_Char)0x74,  /* [2774] */
    (xdc_Char)0x65,  /* [2775] */
    (xdc_Char)0x72,  /* [2776] */
    (xdc_Char)0x20,  /* [2777] */
    (xdc_Char)0x6d,  /* [2778] */
    (xdc_Char)0x75,  /* [2779] */
    (xdc_Char)0x73,  /* [2780] */
    (xdc_Char)0x74,  /* [2781] */
    (xdc_Char)0x20,  /* [2782] */
    (xdc_Char)0x62,  /* [2783] */
    (xdc_Char)0x65,  /* [2784] */
    (xdc_Char)0x20,  /* [2785] */
    (xdc_Char)0x30,  /* [2786] */
    (xdc_Char)0x20,  /* [2787] */
    (xdc_Char)0x6f,  /* [2788] */
    (xdc_Char)0x72,  /* [2789] */
    (xdc_Char)0x20,  /* [2790] */
    (xdc_Char)0x61,  /* [2791] */
    (xdc_Char)0x20,  /* [2792] */
    (xdc_Char)0x70,  /* [2793] */
    (xdc_Char)0x6f,  /* [2794] */
    (xdc_Char)0x77,  /* [2795] */
    (xdc_Char)0x65,  /* [2796] */
    (xdc_Char)0x72,  /* [2797] */
    (xdc_Char)0x20,  /* [2798] */
    (xdc_Char)0x6f,  /* [2799] */
    (xdc_Char)0x66,  /* [2800] */
    (xdc_Char)0x20,  /* [2801] */
    (xdc_Char)0x32,  /* [2802] */
    (xdc_Char)0x20,  /* [2803] */
    (xdc_Char)0x3e,  /* [2804] */
    (xdc_Char)0x3d,  /* [2805] */
    (xdc_Char)0x20,  /* [2806] */
    (xdc_Char)0x74,  /* [2807] */
    (xdc_Char)0x68,  /* [2808] */
    (xdc_Char)0x65,  /* [2809] */
    (xdc_Char)0x20,  /* [2810] */
    (xdc_Char)0x76,  /* [2811] */
    (xdc_Char)0x61,  /* [2812] */
    (xdc_Char)0x6c,  /* [2813] */
    (xdc_Char)0x75,  /* [2814] */
    (xdc_Char)0x65,  /* [2815] */
    (xdc_Char)0x20,  /* [2816] */
    (xdc_Char)0x6f,  /* [2817] */
    (xdc_Char)0x66,  /* [2818] */
    (xdc_Char)0x20,  /* [2819] */
    (xdc_Char)0x4d,  /* [2820] */
    (xdc_Char)0x65,  /* [2821] */
    (xdc_Char)0x6d,  /* [2822] */
    (xdc_Char)0x6f,  /* [2823] */
    (xdc_Char)0x72,  /* [2824] */
    (xdc_Char)0x79,  /* [2825] */
    (xdc_Char)0x5f,  /* [2826] */
    (xdc_Char)0x67,  /* [2827] */
    (xdc_Char)0x65,  /* [2828] */
    (xdc_Char)0x74,  /* [2829] */
    (xdc_Char)0x4d,  /* [2830] */
    (xdc_Char)0x61,  /* [2831] */
    (xdc_Char)0x78,  /* [2832] */
    (xdc_Char)0x44,  /* [2833] */
    (xdc_Char)0x65,  /* [2834] */
    (xdc_Char)0x66,  /* [2835] */
    (xdc_Char)0x61,  /* [2836] */
    (xdc_Char)0x75,  /* [2837] */
    (xdc_Char)0x6c,  /* [2838] */
    (xdc_Char)0x74,  /* [2839] */
    (xdc_Char)0x54,  /* [2840] */
    (xdc_Char)0x79,  /* [2841] */
    (xdc_Char)0x70,  /* [2842] */
    (xdc_Char)0x65,  /* [2843] */
    (xdc_Char)0x41,  /* [2844] */
    (xdc_Char)0x6c,  /* [2845] */
    (xdc_Char)0x69,  /* [2846] */
    (xdc_Char)0x67,  /* [2847] */
    (xdc_Char)0x6e,  /* [2848] */
    (xdc_Char)0x28,  /* [2849] */
    (xdc_Char)0x29,  /* [2850] */
    (xdc_Char)0x0,  /* [2851] */
    (xdc_Char)0x61,  /* [2852] */
    (xdc_Char)0x6c,  /* [2853] */
    (xdc_Char)0x69,  /* [2854] */
    (xdc_Char)0x67,  /* [2855] */
    (xdc_Char)0x6e,  /* [2856] */
    (xdc_Char)0x20,  /* [2857] */
    (xdc_Char)0x70,  /* [2858] */
    (xdc_Char)0x61,  /* [2859] */
    (xdc_Char)0x72,  /* [2860] */
    (xdc_Char)0x61,  /* [2861] */
    (xdc_Char)0x6d,  /* [2862] */
    (xdc_Char)0x65,  /* [2863] */
    (xdc_Char)0x74,  /* [2864] */
    (xdc_Char)0x65,  /* [2865] */
    (xdc_Char)0x72,  /* [2866] */
    (xdc_Char)0x20,  /* [2867] */
    (xdc_Char)0x31,  /* [2868] */
    (xdc_Char)0x29,  /* [2869] */
    (xdc_Char)0x20,  /* [2870] */
    (xdc_Char)0x6d,  /* [2871] */
    (xdc_Char)0x75,  /* [2872] */
    (xdc_Char)0x73,  /* [2873] */
    (xdc_Char)0x74,  /* [2874] */
    (xdc_Char)0x20,  /* [2875] */
    (xdc_Char)0x62,  /* [2876] */
    (xdc_Char)0x65,  /* [2877] */
    (xdc_Char)0x20,  /* [2878] */
    (xdc_Char)0x30,  /* [2879] */
    (xdc_Char)0x20,  /* [2880] */
    (xdc_Char)0x6f,  /* [2881] */
    (xdc_Char)0x72,  /* [2882] */
    (xdc_Char)0x20,  /* [2883] */
    (xdc_Char)0x61,  /* [2884] */
    (xdc_Char)0x20,  /* [2885] */
    (xdc_Char)0x70,  /* [2886] */
    (xdc_Char)0x6f,  /* [2887] */
    (xdc_Char)0x77,  /* [2888] */
    (xdc_Char)0x65,  /* [2889] */
    (xdc_Char)0x72,  /* [2890] */
    (xdc_Char)0x20,  /* [2891] */
    (xdc_Char)0x6f,  /* [2892] */
    (xdc_Char)0x66,  /* [2893] */
    (xdc_Char)0x20,  /* [2894] */
    (xdc_Char)0x32,  /* [2895] */
    (xdc_Char)0x20,  /* [2896] */
    (xdc_Char)0x61,  /* [2897] */
    (xdc_Char)0x6e,  /* [2898] */
    (xdc_Char)0x64,  /* [2899] */
    (xdc_Char)0x20,  /* [2900] */
    (xdc_Char)0x32,  /* [2901] */
    (xdc_Char)0x29,  /* [2902] */
    (xdc_Char)0x20,  /* [2903] */
    (xdc_Char)0x6e,  /* [2904] */
    (xdc_Char)0x6f,  /* [2905] */
    (xdc_Char)0x74,  /* [2906] */
    (xdc_Char)0x20,  /* [2907] */
    (xdc_Char)0x67,  /* [2908] */
    (xdc_Char)0x72,  /* [2909] */
    (xdc_Char)0x65,  /* [2910] */
    (xdc_Char)0x61,  /* [2911] */
    (xdc_Char)0x74,  /* [2912] */
    (xdc_Char)0x65,  /* [2913] */
    (xdc_Char)0x72,  /* [2914] */
    (xdc_Char)0x20,  /* [2915] */
    (xdc_Char)0x74,  /* [2916] */
    (xdc_Char)0x68,  /* [2917] */
    (xdc_Char)0x61,  /* [2918] */
    (xdc_Char)0x6e,  /* [2919] */
    (xdc_Char)0x20,  /* [2920] */
    (xdc_Char)0x74,  /* [2921] */
    (xdc_Char)0x68,  /* [2922] */
    (xdc_Char)0x65,  /* [2923] */
    (xdc_Char)0x20,  /* [2924] */
    (xdc_Char)0x68,  /* [2925] */
    (xdc_Char)0x65,  /* [2926] */
    (xdc_Char)0x61,  /* [2927] */
    (xdc_Char)0x70,  /* [2928] */
    (xdc_Char)0x73,  /* [2929] */
    (xdc_Char)0x20,  /* [2930] */
    (xdc_Char)0x61,  /* [2931] */
    (xdc_Char)0x6c,  /* [2932] */
    (xdc_Char)0x69,  /* [2933] */
    (xdc_Char)0x67,  /* [2934] */
    (xdc_Char)0x6e,  /* [2935] */
    (xdc_Char)0x6d,  /* [2936] */
    (xdc_Char)0x65,  /* [2937] */
    (xdc_Char)0x6e,  /* [2938] */
    (xdc_Char)0x74,  /* [2939] */
    (xdc_Char)0x0,  /* [2940] */
    (xdc_Char)0x62,  /* [2941] */
    (xdc_Char)0x6c,  /* [2942] */
    (xdc_Char)0x6f,  /* [2943] */
    (xdc_Char)0x63,  /* [2944] */
    (xdc_Char)0x6b,  /* [2945] */
    (xdc_Char)0x53,  /* [2946] */
    (xdc_Char)0x69,  /* [2947] */
    (xdc_Char)0x7a,  /* [2948] */
    (xdc_Char)0x65,  /* [2949] */
    (xdc_Char)0x20,  /* [2950] */
    (xdc_Char)0x63,  /* [2951] */
    (xdc_Char)0x61,  /* [2952] */
    (xdc_Char)0x6e,  /* [2953] */
    (xdc_Char)0x6e,  /* [2954] */
    (xdc_Char)0x6f,  /* [2955] */
    (xdc_Char)0x74,  /* [2956] */
    (xdc_Char)0x20,  /* [2957] */
    (xdc_Char)0x62,  /* [2958] */
    (xdc_Char)0x65,  /* [2959] */
    (xdc_Char)0x20,  /* [2960] */
    (xdc_Char)0x7a,  /* [2961] */
    (xdc_Char)0x65,  /* [2962] */
    (xdc_Char)0x72,  /* [2963] */
    (xdc_Char)0x6f,  /* [2964] */
    (xdc_Char)0x0,  /* [2965] */
    (xdc_Char)0x6e,  /* [2966] */
    (xdc_Char)0x75,  /* [2967] */
    (xdc_Char)0x6d,  /* [2968] */
    (xdc_Char)0x42,  /* [2969] */
    (xdc_Char)0x6c,  /* [2970] */
    (xdc_Char)0x6f,  /* [2971] */
    (xdc_Char)0x63,  /* [2972] */
    (xdc_Char)0x6b,  /* [2973] */
    (xdc_Char)0x73,  /* [2974] */
    (xdc_Char)0x20,  /* [2975] */
    (xdc_Char)0x63,  /* [2976] */
    (xdc_Char)0x61,  /* [2977] */
    (xdc_Char)0x6e,  /* [2978] */
    (xdc_Char)0x6e,  /* [2979] */
    (xdc_Char)0x6f,  /* [2980] */
    (xdc_Char)0x74,  /* [2981] */
    (xdc_Char)0x20,  /* [2982] */
    (xdc_Char)0x62,  /* [2983] */
    (xdc_Char)0x65,  /* [2984] */
    (xdc_Char)0x20,  /* [2985] */
    (xdc_Char)0x7a,  /* [2986] */
    (xdc_Char)0x65,  /* [2987] */
    (xdc_Char)0x72,  /* [2988] */
    (xdc_Char)0x6f,  /* [2989] */
    (xdc_Char)0x0,  /* [2990] */
    (xdc_Char)0x62,  /* [2991] */
    (xdc_Char)0x75,  /* [2992] */
    (xdc_Char)0x66,  /* [2993] */
    (xdc_Char)0x53,  /* [2994] */
    (xdc_Char)0x69,  /* [2995] */
    (xdc_Char)0x7a,  /* [2996] */
    (xdc_Char)0x65,  /* [2997] */
    (xdc_Char)0x20,  /* [2998] */
    (xdc_Char)0x63,  /* [2999] */
    (xdc_Char)0x61,  /* [3000] */
    (xdc_Char)0x6e,  /* [3001] */
    (xdc_Char)0x6e,  /* [3002] */
    (xdc_Char)0x6f,  /* [3003] */
    (xdc_Char)0x74,  /* [3004] */
    (xdc_Char)0x20,  /* [3005] */
    (xdc_Char)0x62,  /* [3006] */
    (xdc_Char)0x65,  /* [3007] */
    (xdc_Char)0x20,  /* [3008] */
    (xdc_Char)0x7a,  /* [3009] */
    (xdc_Char)0x65,  /* [3010] */
    (xdc_Char)0x72,  /* [3011] */
    (xdc_Char)0x6f,  /* [3012] */
    (xdc_Char)0x0,  /* [3013] */
    (xdc_Char)0x48,  /* [3014] */
    (xdc_Char)0x65,  /* [3015] */
    (xdc_Char)0x61,  /* [3016] */
    (xdc_Char)0x70,  /* [3017] */
    (xdc_Char)0x42,  /* [3018] */
    (xdc_Char)0x75,  /* [3019] */
    (xdc_Char)0x66,  /* [3020] */
    (xdc_Char)0x5f,  /* [3021] */
    (xdc_Char)0x63,  /* [3022] */
    (xdc_Char)0x72,  /* [3023] */
    (xdc_Char)0x65,  /* [3024] */
    (xdc_Char)0x61,  /* [3025] */
    (xdc_Char)0x74,  /* [3026] */
    (xdc_Char)0x65,  /* [3027] */
    (xdc_Char)0x27,  /* [3028] */
    (xdc_Char)0x73,  /* [3029] */
    (xdc_Char)0x20,  /* [3030] */
    (xdc_Char)0x62,  /* [3031] */
    (xdc_Char)0x75,  /* [3032] */
    (xdc_Char)0x66,  /* [3033] */
    (xdc_Char)0x53,  /* [3034] */
    (xdc_Char)0x69,  /* [3035] */
    (xdc_Char)0x7a,  /* [3036] */
    (xdc_Char)0x65,  /* [3037] */
    (xdc_Char)0x20,  /* [3038] */
    (xdc_Char)0x70,  /* [3039] */
    (xdc_Char)0x61,  /* [3040] */
    (xdc_Char)0x72,  /* [3041] */
    (xdc_Char)0x61,  /* [3042] */
    (xdc_Char)0x6d,  /* [3043] */
    (xdc_Char)0x65,  /* [3044] */
    (xdc_Char)0x74,  /* [3045] */
    (xdc_Char)0x65,  /* [3046] */
    (xdc_Char)0x72,  /* [3047] */
    (xdc_Char)0x20,  /* [3048] */
    (xdc_Char)0x69,  /* [3049] */
    (xdc_Char)0x73,  /* [3050] */
    (xdc_Char)0x20,  /* [3051] */
    (xdc_Char)0x69,  /* [3052] */
    (xdc_Char)0x6e,  /* [3053] */
    (xdc_Char)0x76,  /* [3054] */
    (xdc_Char)0x61,  /* [3055] */
    (xdc_Char)0x6c,  /* [3056] */
    (xdc_Char)0x69,  /* [3057] */
    (xdc_Char)0x64,  /* [3058] */
    (xdc_Char)0x20,  /* [3059] */
    (xdc_Char)0x28,  /* [3060] */
    (xdc_Char)0x74,  /* [3061] */
    (xdc_Char)0x6f,  /* [3062] */
    (xdc_Char)0x6f,  /* [3063] */
    (xdc_Char)0x20,  /* [3064] */
    (xdc_Char)0x73,  /* [3065] */
    (xdc_Char)0x6d,  /* [3066] */
    (xdc_Char)0x61,  /* [3067] */
    (xdc_Char)0x6c,  /* [3068] */
    (xdc_Char)0x6c,  /* [3069] */
    (xdc_Char)0x29,  /* [3070] */
    (xdc_Char)0x0,  /* [3071] */
    (xdc_Char)0x43,  /* [3072] */
    (xdc_Char)0x61,  /* [3073] */
    (xdc_Char)0x6e,  /* [3074] */
    (xdc_Char)0x6e,  /* [3075] */
    (xdc_Char)0x6f,  /* [3076] */
    (xdc_Char)0x74,  /* [3077] */
    (xdc_Char)0x20,  /* [3078] */
    (xdc_Char)0x63,  /* [3079] */
    (xdc_Char)0x61,  /* [3080] */
    (xdc_Char)0x6c,  /* [3081] */
    (xdc_Char)0x6c,  /* [3082] */
    (xdc_Char)0x20,  /* [3083] */
    (xdc_Char)0x48,  /* [3084] */
    (xdc_Char)0x65,  /* [3085] */
    (xdc_Char)0x61,  /* [3086] */
    (xdc_Char)0x70,  /* [3087] */
    (xdc_Char)0x42,  /* [3088] */
    (xdc_Char)0x75,  /* [3089] */
    (xdc_Char)0x66,  /* [3090] */
    (xdc_Char)0x5f,  /* [3091] */
    (xdc_Char)0x66,  /* [3092] */
    (xdc_Char)0x72,  /* [3093] */
    (xdc_Char)0x65,  /* [3094] */
    (xdc_Char)0x65,  /* [3095] */
    (xdc_Char)0x20,  /* [3096] */
    (xdc_Char)0x77,  /* [3097] */
    (xdc_Char)0x68,  /* [3098] */
    (xdc_Char)0x65,  /* [3099] */
    (xdc_Char)0x6e,  /* [3100] */
    (xdc_Char)0x20,  /* [3101] */
    (xdc_Char)0x6e,  /* [3102] */
    (xdc_Char)0x6f,  /* [3103] */
    (xdc_Char)0x20,  /* [3104] */
    (xdc_Char)0x62,  /* [3105] */
    (xdc_Char)0x6c,  /* [3106] */
    (xdc_Char)0x6f,  /* [3107] */
    (xdc_Char)0x63,  /* [3108] */
    (xdc_Char)0x6b,  /* [3109] */
    (xdc_Char)0x73,  /* [3110] */
    (xdc_Char)0x20,  /* [3111] */
    (xdc_Char)0x68,  /* [3112] */
    (xdc_Char)0x61,  /* [3113] */
    (xdc_Char)0x76,  /* [3114] */
    (xdc_Char)0x65,  /* [3115] */
    (xdc_Char)0x20,  /* [3116] */
    (xdc_Char)0x62,  /* [3117] */
    (xdc_Char)0x65,  /* [3118] */
    (xdc_Char)0x65,  /* [3119] */
    (xdc_Char)0x6e,  /* [3120] */
    (xdc_Char)0x20,  /* [3121] */
    (xdc_Char)0x61,  /* [3122] */
    (xdc_Char)0x6c,  /* [3123] */
    (xdc_Char)0x6c,  /* [3124] */
    (xdc_Char)0x6f,  /* [3125] */
    (xdc_Char)0x63,  /* [3126] */
    (xdc_Char)0x61,  /* [3127] */
    (xdc_Char)0x74,  /* [3128] */
    (xdc_Char)0x65,  /* [3129] */
    (xdc_Char)0x64,  /* [3130] */
    (xdc_Char)0x0,  /* [3131] */
    (xdc_Char)0x41,  /* [3132] */
    (xdc_Char)0x5f,  /* [3133] */
    (xdc_Char)0x69,  /* [3134] */
    (xdc_Char)0x6e,  /* [3135] */
    (xdc_Char)0x76,  /* [3136] */
    (xdc_Char)0x61,  /* [3137] */
    (xdc_Char)0x6c,  /* [3138] */
    (xdc_Char)0x69,  /* [3139] */
    (xdc_Char)0x64,  /* [3140] */
    (xdc_Char)0x46,  /* [3141] */
    (xdc_Char)0x72,  /* [3142] */
    (xdc_Char)0x65,  /* [3143] */
    (xdc_Char)0x65,  /* [3144] */
    (xdc_Char)0x3a,  /* [3145] */
    (xdc_Char)0x20,  /* [3146] */
    (xdc_Char)0x49,  /* [3147] */
    (xdc_Char)0x6e,  /* [3148] */
    (xdc_Char)0x76,  /* [3149] */
    (xdc_Char)0x61,  /* [3150] */
    (xdc_Char)0x6c,  /* [3151] */
    (xdc_Char)0x69,  /* [3152] */
    (xdc_Char)0x64,  /* [3153] */
    (xdc_Char)0x20,  /* [3154] */
    (xdc_Char)0x66,  /* [3155] */
    (xdc_Char)0x72,  /* [3156] */
    (xdc_Char)0x65,  /* [3157] */
    (xdc_Char)0x65,  /* [3158] */
    (xdc_Char)0x0,  /* [3159] */
    (xdc_Char)0x41,  /* [3160] */
    (xdc_Char)0x5f,  /* [3161] */
    (xdc_Char)0x7a,  /* [3162] */
    (xdc_Char)0x65,  /* [3163] */
    (xdc_Char)0x72,  /* [3164] */
    (xdc_Char)0x6f,  /* [3165] */
    (xdc_Char)0x42,  /* [3166] */
    (xdc_Char)0x6c,  /* [3167] */
    (xdc_Char)0x6f,  /* [3168] */
    (xdc_Char)0x63,  /* [3169] */
    (xdc_Char)0x6b,  /* [3170] */
    (xdc_Char)0x3a,  /* [3171] */
    (xdc_Char)0x20,  /* [3172] */
    (xdc_Char)0x43,  /* [3173] */
    (xdc_Char)0x61,  /* [3174] */
    (xdc_Char)0x6e,  /* [3175] */
    (xdc_Char)0x6e,  /* [3176] */
    (xdc_Char)0x6f,  /* [3177] */
    (xdc_Char)0x74,  /* [3178] */
    (xdc_Char)0x20,  /* [3179] */
    (xdc_Char)0x61,  /* [3180] */
    (xdc_Char)0x6c,  /* [3181] */
    (xdc_Char)0x6c,  /* [3182] */
    (xdc_Char)0x6f,  /* [3183] */
    (xdc_Char)0x63,  /* [3184] */
    (xdc_Char)0x61,  /* [3185] */
    (xdc_Char)0x74,  /* [3186] */
    (xdc_Char)0x65,  /* [3187] */
    (xdc_Char)0x20,  /* [3188] */
    (xdc_Char)0x73,  /* [3189] */
    (xdc_Char)0x69,  /* [3190] */
    (xdc_Char)0x7a,  /* [3191] */
    (xdc_Char)0x65,  /* [3192] */
    (xdc_Char)0x20,  /* [3193] */
    (xdc_Char)0x30,  /* [3194] */
    (xdc_Char)0x0,  /* [3195] */
    (xdc_Char)0x41,  /* [3196] */
    (xdc_Char)0x5f,  /* [3197] */
    (xdc_Char)0x68,  /* [3198] */
    (xdc_Char)0x65,  /* [3199] */
    (xdc_Char)0x61,  /* [3200] */
    (xdc_Char)0x70,  /* [3201] */
    (xdc_Char)0x53,  /* [3202] */
    (xdc_Char)0x69,  /* [3203] */
    (xdc_Char)0x7a,  /* [3204] */
    (xdc_Char)0x65,  /* [3205] */
    (xdc_Char)0x3a,  /* [3206] */
    (xdc_Char)0x20,  /* [3207] */
    (xdc_Char)0x52,  /* [3208] */
    (xdc_Char)0x65,  /* [3209] */
    (xdc_Char)0x71,  /* [3210] */
    (xdc_Char)0x75,  /* [3211] */
    (xdc_Char)0x65,  /* [3212] */
    (xdc_Char)0x73,  /* [3213] */
    (xdc_Char)0x74,  /* [3214] */
    (xdc_Char)0x65,  /* [3215] */
    (xdc_Char)0x64,  /* [3216] */
    (xdc_Char)0x20,  /* [3217] */
    (xdc_Char)0x68,  /* [3218] */
    (xdc_Char)0x65,  /* [3219] */
    (xdc_Char)0x61,  /* [3220] */
    (xdc_Char)0x70,  /* [3221] */
    (xdc_Char)0x20,  /* [3222] */
    (xdc_Char)0x73,  /* [3223] */
    (xdc_Char)0x69,  /* [3224] */
    (xdc_Char)0x7a,  /* [3225] */
    (xdc_Char)0x65,  /* [3226] */
    (xdc_Char)0x20,  /* [3227] */
    (xdc_Char)0x69,  /* [3228] */
    (xdc_Char)0x73,  /* [3229] */
    (xdc_Char)0x20,  /* [3230] */
    (xdc_Char)0x74,  /* [3231] */
    (xdc_Char)0x6f,  /* [3232] */
    (xdc_Char)0x6f,  /* [3233] */
    (xdc_Char)0x20,  /* [3234] */
    (xdc_Char)0x73,  /* [3235] */
    (xdc_Char)0x6d,  /* [3236] */
    (xdc_Char)0x61,  /* [3237] */
    (xdc_Char)0x6c,  /* [3238] */
    (xdc_Char)0x6c,  /* [3239] */
    (xdc_Char)0x0,  /* [3240] */
    (xdc_Char)0x41,  /* [3241] */
    (xdc_Char)0x5f,  /* [3242] */
    (xdc_Char)0x61,  /* [3243] */
    (xdc_Char)0x6c,  /* [3244] */
    (xdc_Char)0x69,  /* [3245] */
    (xdc_Char)0x67,  /* [3246] */
    (xdc_Char)0x6e,  /* [3247] */
    (xdc_Char)0x3a,  /* [3248] */
    (xdc_Char)0x20,  /* [3249] */
    (xdc_Char)0x52,  /* [3250] */
    (xdc_Char)0x65,  /* [3251] */
    (xdc_Char)0x71,  /* [3252] */
    (xdc_Char)0x75,  /* [3253] */
    (xdc_Char)0x65,  /* [3254] */
    (xdc_Char)0x73,  /* [3255] */
    (xdc_Char)0x74,  /* [3256] */
    (xdc_Char)0x65,  /* [3257] */
    (xdc_Char)0x64,  /* [3258] */
    (xdc_Char)0x20,  /* [3259] */
    (xdc_Char)0x61,  /* [3260] */
    (xdc_Char)0x6c,  /* [3261] */
    (xdc_Char)0x69,  /* [3262] */
    (xdc_Char)0x67,  /* [3263] */
    (xdc_Char)0x6e,  /* [3264] */
    (xdc_Char)0x20,  /* [3265] */
    (xdc_Char)0x69,  /* [3266] */
    (xdc_Char)0x73,  /* [3267] */
    (xdc_Char)0x20,  /* [3268] */
    (xdc_Char)0x6e,  /* [3269] */
    (xdc_Char)0x6f,  /* [3270] */
    (xdc_Char)0x74,  /* [3271] */
    (xdc_Char)0x20,  /* [3272] */
    (xdc_Char)0x61,  /* [3273] */
    (xdc_Char)0x20,  /* [3274] */
    (xdc_Char)0x70,  /* [3275] */
    (xdc_Char)0x6f,  /* [3276] */
    (xdc_Char)0x77,  /* [3277] */
    (xdc_Char)0x65,  /* [3278] */
    (xdc_Char)0x72,  /* [3279] */
    (xdc_Char)0x20,  /* [3280] */
    (xdc_Char)0x6f,  /* [3281] */
    (xdc_Char)0x66,  /* [3282] */
    (xdc_Char)0x20,  /* [3283] */
    (xdc_Char)0x32,  /* [3284] */
    (xdc_Char)0x0,  /* [3285] */
    (xdc_Char)0x49,  /* [3286] */
    (xdc_Char)0x6e,  /* [3287] */
    (xdc_Char)0x76,  /* [3288] */
    (xdc_Char)0x61,  /* [3289] */
    (xdc_Char)0x6c,  /* [3290] */
    (xdc_Char)0x69,  /* [3291] */
    (xdc_Char)0x64,  /* [3292] */
    (xdc_Char)0x20,  /* [3293] */
    (xdc_Char)0x62,  /* [3294] */
    (xdc_Char)0x6c,  /* [3295] */
    (xdc_Char)0x6f,  /* [3296] */
    (xdc_Char)0x63,  /* [3297] */
    (xdc_Char)0x6b,  /* [3298] */
    (xdc_Char)0x20,  /* [3299] */
    (xdc_Char)0x61,  /* [3300] */
    (xdc_Char)0x64,  /* [3301] */
    (xdc_Char)0x64,  /* [3302] */
    (xdc_Char)0x72,  /* [3303] */
    (xdc_Char)0x65,  /* [3304] */
    (xdc_Char)0x73,  /* [3305] */
    (xdc_Char)0x73,  /* [3306] */
    (xdc_Char)0x20,  /* [3307] */
    (xdc_Char)0x6f,  /* [3308] */
    (xdc_Char)0x6e,  /* [3309] */
    (xdc_Char)0x20,  /* [3310] */
    (xdc_Char)0x74,  /* [3311] */
    (xdc_Char)0x68,  /* [3312] */
    (xdc_Char)0x65,  /* [3313] */
    (xdc_Char)0x20,  /* [3314] */
    (xdc_Char)0x66,  /* [3315] */
    (xdc_Char)0x72,  /* [3316] */
    (xdc_Char)0x65,  /* [3317] */
    (xdc_Char)0x65,  /* [3318] */
    (xdc_Char)0x2e,  /* [3319] */
    (xdc_Char)0x20,  /* [3320] */
    (xdc_Char)0x46,  /* [3321] */
    (xdc_Char)0x61,  /* [3322] */
    (xdc_Char)0x69,  /* [3323] */
    (xdc_Char)0x6c,  /* [3324] */
    (xdc_Char)0x65,  /* [3325] */
    (xdc_Char)0x64,  /* [3326] */
    (xdc_Char)0x20,  /* [3327] */
    (xdc_Char)0x74,  /* [3328] */
    (xdc_Char)0x6f,  /* [3329] */
    (xdc_Char)0x20,  /* [3330] */
    (xdc_Char)0x66,  /* [3331] */
    (xdc_Char)0x72,  /* [3332] */
    (xdc_Char)0x65,  /* [3333] */
    (xdc_Char)0x65,  /* [3334] */
    (xdc_Char)0x20,  /* [3335] */
    (xdc_Char)0x62,  /* [3336] */
    (xdc_Char)0x6c,  /* [3337] */
    (xdc_Char)0x6f,  /* [3338] */
    (xdc_Char)0x63,  /* [3339] */
    (xdc_Char)0x6b,  /* [3340] */
    (xdc_Char)0x20,  /* [3341] */
    (xdc_Char)0x62,  /* [3342] */
    (xdc_Char)0x61,  /* [3343] */
    (xdc_Char)0x63,  /* [3344] */
    (xdc_Char)0x6b,  /* [3345] */
    (xdc_Char)0x20,  /* [3346] */
    (xdc_Char)0x74,  /* [3347] */
    (xdc_Char)0x6f,  /* [3348] */
    (xdc_Char)0x20,  /* [3349] */
    (xdc_Char)0x68,  /* [3350] */
    (xdc_Char)0x65,  /* [3351] */
    (xdc_Char)0x61,  /* [3352] */
    (xdc_Char)0x70,  /* [3353] */
    (xdc_Char)0x2e,  /* [3354] */
    (xdc_Char)0x0,  /* [3355] */
    (xdc_Char)0x41,  /* [3356] */
    (xdc_Char)0x5f,  /* [3357] */
    (xdc_Char)0x64,  /* [3358] */
    (xdc_Char)0x6f,  /* [3359] */
    (xdc_Char)0x75,  /* [3360] */
    (xdc_Char)0x62,  /* [3361] */
    (xdc_Char)0x6c,  /* [3362] */
    (xdc_Char)0x65,  /* [3363] */
    (xdc_Char)0x46,  /* [3364] */
    (xdc_Char)0x72,  /* [3365] */
    (xdc_Char)0x65,  /* [3366] */
    (xdc_Char)0x65,  /* [3367] */
    (xdc_Char)0x3a,  /* [3368] */
    (xdc_Char)0x20,  /* [3369] */
    (xdc_Char)0x42,  /* [3370] */
    (xdc_Char)0x75,  /* [3371] */
    (xdc_Char)0x66,  /* [3372] */
    (xdc_Char)0x66,  /* [3373] */
    (xdc_Char)0x65,  /* [3374] */
    (xdc_Char)0x72,  /* [3375] */
    (xdc_Char)0x20,  /* [3376] */
    (xdc_Char)0x61,  /* [3377] */
    (xdc_Char)0x6c,  /* [3378] */
    (xdc_Char)0x72,  /* [3379] */
    (xdc_Char)0x65,  /* [3380] */
    (xdc_Char)0x61,  /* [3381] */
    (xdc_Char)0x64,  /* [3382] */
    (xdc_Char)0x79,  /* [3383] */
    (xdc_Char)0x20,  /* [3384] */
    (xdc_Char)0x66,  /* [3385] */
    (xdc_Char)0x72,  /* [3386] */
    (xdc_Char)0x65,  /* [3387] */
    (xdc_Char)0x65,  /* [3388] */
    (xdc_Char)0x0,  /* [3389] */
    (xdc_Char)0x41,  /* [3390] */
    (xdc_Char)0x5f,  /* [3391] */
    (xdc_Char)0x62,  /* [3392] */
    (xdc_Char)0x75,  /* [3393] */
    (xdc_Char)0x66,  /* [3394] */
    (xdc_Char)0x4f,  /* [3395] */
    (xdc_Char)0x76,  /* [3396] */
    (xdc_Char)0x65,  /* [3397] */
    (xdc_Char)0x72,  /* [3398] */
    (xdc_Char)0x66,  /* [3399] */
    (xdc_Char)0x6c,  /* [3400] */
    (xdc_Char)0x6f,  /* [3401] */
    (xdc_Char)0x77,  /* [3402] */
    (xdc_Char)0x3a,  /* [3403] */
    (xdc_Char)0x20,  /* [3404] */
    (xdc_Char)0x42,  /* [3405] */
    (xdc_Char)0x75,  /* [3406] */
    (xdc_Char)0x66,  /* [3407] */
    (xdc_Char)0x66,  /* [3408] */
    (xdc_Char)0x65,  /* [3409] */
    (xdc_Char)0x72,  /* [3410] */
    (xdc_Char)0x20,  /* [3411] */
    (xdc_Char)0x6f,  /* [3412] */
    (xdc_Char)0x76,  /* [3413] */
    (xdc_Char)0x65,  /* [3414] */
    (xdc_Char)0x72,  /* [3415] */
    (xdc_Char)0x66,  /* [3416] */
    (xdc_Char)0x6c,  /* [3417] */
    (xdc_Char)0x6f,  /* [3418] */
    (xdc_Char)0x77,  /* [3419] */
    (xdc_Char)0x0,  /* [3420] */
    (xdc_Char)0x41,  /* [3421] */
    (xdc_Char)0x5f,  /* [3422] */
    (xdc_Char)0x6e,  /* [3423] */
    (xdc_Char)0x6f,  /* [3424] */
    (xdc_Char)0x74,  /* [3425] */
    (xdc_Char)0x45,  /* [3426] */
    (xdc_Char)0x6d,  /* [3427] */
    (xdc_Char)0x70,  /* [3428] */
    (xdc_Char)0x74,  /* [3429] */
    (xdc_Char)0x79,  /* [3430] */
    (xdc_Char)0x3a,  /* [3431] */
    (xdc_Char)0x20,  /* [3432] */
    (xdc_Char)0x48,  /* [3433] */
    (xdc_Char)0x65,  /* [3434] */
    (xdc_Char)0x61,  /* [3435] */
    (xdc_Char)0x70,  /* [3436] */
    (xdc_Char)0x20,  /* [3437] */
    (xdc_Char)0x6e,  /* [3438] */
    (xdc_Char)0x6f,  /* [3439] */
    (xdc_Char)0x74,  /* [3440] */
    (xdc_Char)0x20,  /* [3441] */
    (xdc_Char)0x65,  /* [3442] */
    (xdc_Char)0x6d,  /* [3443] */
    (xdc_Char)0x70,  /* [3444] */
    (xdc_Char)0x74,  /* [3445] */
    (xdc_Char)0x79,  /* [3446] */
    (xdc_Char)0x0,  /* [3447] */
    (xdc_Char)0x41,  /* [3448] */
    (xdc_Char)0x5f,  /* [3449] */
    (xdc_Char)0x6e,  /* [3450] */
    (xdc_Char)0x75,  /* [3451] */
    (xdc_Char)0x6c,  /* [3452] */
    (xdc_Char)0x6c,  /* [3453] */
    (xdc_Char)0x4f,  /* [3454] */
    (xdc_Char)0x62,  /* [3455] */
    (xdc_Char)0x6a,  /* [3456] */
    (xdc_Char)0x65,  /* [3457] */
    (xdc_Char)0x63,  /* [3458] */
    (xdc_Char)0x74,  /* [3459] */
    (xdc_Char)0x3a,  /* [3460] */
    (xdc_Char)0x20,  /* [3461] */
    (xdc_Char)0x48,  /* [3462] */
    (xdc_Char)0x65,  /* [3463] */
    (xdc_Char)0x61,  /* [3464] */
    (xdc_Char)0x70,  /* [3465] */
    (xdc_Char)0x54,  /* [3466] */
    (xdc_Char)0x72,  /* [3467] */
    (xdc_Char)0x61,  /* [3468] */
    (xdc_Char)0x63,  /* [3469] */
    (xdc_Char)0x6b,  /* [3470] */
    (xdc_Char)0x5f,  /* [3471] */
    (xdc_Char)0x70,  /* [3472] */
    (xdc_Char)0x72,  /* [3473] */
    (xdc_Char)0x69,  /* [3474] */
    (xdc_Char)0x6e,  /* [3475] */
    (xdc_Char)0x74,  /* [3476] */
    (xdc_Char)0x48,  /* [3477] */
    (xdc_Char)0x65,  /* [3478] */
    (xdc_Char)0x61,  /* [3479] */
    (xdc_Char)0x70,  /* [3480] */
    (xdc_Char)0x20,  /* [3481] */
    (xdc_Char)0x63,  /* [3482] */
    (xdc_Char)0x61,  /* [3483] */
    (xdc_Char)0x6c,  /* [3484] */
    (xdc_Char)0x6c,  /* [3485] */
    (xdc_Char)0x65,  /* [3486] */
    (xdc_Char)0x64,  /* [3487] */
    (xdc_Char)0x20,  /* [3488] */
    (xdc_Char)0x77,  /* [3489] */
    (xdc_Char)0x69,  /* [3490] */
    (xdc_Char)0x74,  /* [3491] */
    (xdc_Char)0x68,  /* [3492] */
    (xdc_Char)0x20,  /* [3493] */
    (xdc_Char)0x6e,  /* [3494] */
    (xdc_Char)0x75,  /* [3495] */
    (xdc_Char)0x6c,  /* [3496] */
    (xdc_Char)0x6c,  /* [3497] */
    (xdc_Char)0x20,  /* [3498] */
    (xdc_Char)0x6f,  /* [3499] */
    (xdc_Char)0x62,  /* [3500] */
    (xdc_Char)0x6a,  /* [3501] */
    (xdc_Char)0x0,  /* [3502] */
    (xdc_Char)0x41,  /* [3503] */
    (xdc_Char)0x5f,  /* [3504] */
    (xdc_Char)0x6e,  /* [3505] */
    (xdc_Char)0x6f,  /* [3506] */
    (xdc_Char)0x74,  /* [3507] */
    (xdc_Char)0x41,  /* [3508] */
    (xdc_Char)0x76,  /* [3509] */
    (xdc_Char)0x61,  /* [3510] */
    (xdc_Char)0x69,  /* [3511] */
    (xdc_Char)0x6c,  /* [3512] */
    (xdc_Char)0x61,  /* [3513] */
    (xdc_Char)0x62,  /* [3514] */
    (xdc_Char)0x6c,  /* [3515] */
    (xdc_Char)0x65,  /* [3516] */
    (xdc_Char)0x3a,  /* [3517] */
    (xdc_Char)0x20,  /* [3518] */
    (xdc_Char)0x73,  /* [3519] */
    (xdc_Char)0x74,  /* [3520] */
    (xdc_Char)0x61,  /* [3521] */
    (xdc_Char)0x74,  /* [3522] */
    (xdc_Char)0x69,  /* [3523] */
    (xdc_Char)0x63,  /* [3524] */
    (xdc_Char)0x61,  /* [3525] */
    (xdc_Char)0x6c,  /* [3526] */
    (xdc_Char)0x6c,  /* [3527] */
    (xdc_Char)0x79,  /* [3528] */
    (xdc_Char)0x20,  /* [3529] */
    (xdc_Char)0x63,  /* [3530] */
    (xdc_Char)0x72,  /* [3531] */
    (xdc_Char)0x65,  /* [3532] */
    (xdc_Char)0x61,  /* [3533] */
    (xdc_Char)0x74,  /* [3534] */
    (xdc_Char)0x65,  /* [3535] */
    (xdc_Char)0x64,  /* [3536] */
    (xdc_Char)0x20,  /* [3537] */
    (xdc_Char)0x74,  /* [3538] */
    (xdc_Char)0x69,  /* [3539] */
    (xdc_Char)0x6d,  /* [3540] */
    (xdc_Char)0x65,  /* [3541] */
    (xdc_Char)0x72,  /* [3542] */
    (xdc_Char)0x20,  /* [3543] */
    (xdc_Char)0x6e,  /* [3544] */
    (xdc_Char)0x6f,  /* [3545] */
    (xdc_Char)0x74,  /* [3546] */
    (xdc_Char)0x20,  /* [3547] */
    (xdc_Char)0x61,  /* [3548] */
    (xdc_Char)0x76,  /* [3549] */
    (xdc_Char)0x61,  /* [3550] */
    (xdc_Char)0x69,  /* [3551] */
    (xdc_Char)0x6c,  /* [3552] */
    (xdc_Char)0x61,  /* [3553] */
    (xdc_Char)0x62,  /* [3554] */
    (xdc_Char)0x6c,  /* [3555] */
    (xdc_Char)0x65,  /* [3556] */
    (xdc_Char)0x0,  /* [3557] */
    (xdc_Char)0x61,  /* [3558] */
    (xdc_Char)0x73,  /* [3559] */
    (xdc_Char)0x73,  /* [3560] */
    (xdc_Char)0x65,  /* [3561] */
    (xdc_Char)0x72,  /* [3562] */
    (xdc_Char)0x74,  /* [3563] */
    (xdc_Char)0x69,  /* [3564] */
    (xdc_Char)0x6f,  /* [3565] */
    (xdc_Char)0x6e,  /* [3566] */
    (xdc_Char)0x20,  /* [3567] */
    (xdc_Char)0x66,  /* [3568] */
    (xdc_Char)0x61,  /* [3569] */
    (xdc_Char)0x69,  /* [3570] */
    (xdc_Char)0x6c,  /* [3571] */
    (xdc_Char)0x75,  /* [3572] */
    (xdc_Char)0x72,  /* [3573] */
    (xdc_Char)0x65,  /* [3574] */
    (xdc_Char)0x25,  /* [3575] */
    (xdc_Char)0x73,  /* [3576] */
    (xdc_Char)0x25,  /* [3577] */
    (xdc_Char)0x73,  /* [3578] */
    (xdc_Char)0x0,  /* [3579] */
    (xdc_Char)0x25,  /* [3580] */
    (xdc_Char)0x24,  /* [3581] */
    (xdc_Char)0x53,  /* [3582] */
    (xdc_Char)0x0,  /* [3583] */
    (xdc_Char)0x6f,  /* [3584] */
    (xdc_Char)0x75,  /* [3585] */
    (xdc_Char)0x74,  /* [3586] */
    (xdc_Char)0x20,  /* [3587] */
    (xdc_Char)0x6f,  /* [3588] */
    (xdc_Char)0x66,  /* [3589] */
    (xdc_Char)0x20,  /* [3590] */
    (xdc_Char)0x6d,  /* [3591] */
    (xdc_Char)0x65,  /* [3592] */
    (xdc_Char)0x6d,  /* [3593] */
    (xdc_Char)0x6f,  /* [3594] */
    (xdc_Char)0x72,  /* [3595] */
    (xdc_Char)0x79,  /* [3596] */
    (xdc_Char)0x3a,  /* [3597] */
    (xdc_Char)0x20,  /* [3598] */
    (xdc_Char)0x68,  /* [3599] */
    (xdc_Char)0x65,  /* [3600] */
    (xdc_Char)0x61,  /* [3601] */
    (xdc_Char)0x70,  /* [3602] */
    (xdc_Char)0x3d,  /* [3603] */
    (xdc_Char)0x30,  /* [3604] */
    (xdc_Char)0x78,  /* [3605] */
    (xdc_Char)0x25,  /* [3606] */
    (xdc_Char)0x78,  /* [3607] */
    (xdc_Char)0x2c,  /* [3608] */
    (xdc_Char)0x20,  /* [3609] */
    (xdc_Char)0x73,  /* [3610] */
    (xdc_Char)0x69,  /* [3611] */
    (xdc_Char)0x7a,  /* [3612] */
    (xdc_Char)0x65,  /* [3613] */
    (xdc_Char)0x3d,  /* [3614] */
    (xdc_Char)0x25,  /* [3615] */
    (xdc_Char)0x75,  /* [3616] */
    (xdc_Char)0x0,  /* [3617] */
    (xdc_Char)0x25,  /* [3618] */
    (xdc_Char)0x73,  /* [3619] */
    (xdc_Char)0x20,  /* [3620] */
    (xdc_Char)0x30,  /* [3621] */
    (xdc_Char)0x78,  /* [3622] */
    (xdc_Char)0x25,  /* [3623] */
    (xdc_Char)0x78,  /* [3624] */
    (xdc_Char)0x0,  /* [3625] */
    (xdc_Char)0x45,  /* [3626] */
    (xdc_Char)0x5f,  /* [3627] */
    (xdc_Char)0x62,  /* [3628] */
    (xdc_Char)0x61,  /* [3629] */
    (xdc_Char)0x64,  /* [3630] */
    (xdc_Char)0x4c,  /* [3631] */
    (xdc_Char)0x65,  /* [3632] */
    (xdc_Char)0x76,  /* [3633] */
    (xdc_Char)0x65,  /* [3634] */
    (xdc_Char)0x6c,  /* [3635] */
    (xdc_Char)0x3a,  /* [3636] */
    (xdc_Char)0x20,  /* [3637] */
    (xdc_Char)0x42,  /* [3638] */
    (xdc_Char)0x61,  /* [3639] */
    (xdc_Char)0x64,  /* [3640] */
    (xdc_Char)0x20,  /* [3641] */
    (xdc_Char)0x66,  /* [3642] */
    (xdc_Char)0x69,  /* [3643] */
    (xdc_Char)0x6c,  /* [3644] */
    (xdc_Char)0x74,  /* [3645] */
    (xdc_Char)0x65,  /* [3646] */
    (xdc_Char)0x72,  /* [3647] */
    (xdc_Char)0x20,  /* [3648] */
    (xdc_Char)0x6c,  /* [3649] */
    (xdc_Char)0x65,  /* [3650] */
    (xdc_Char)0x76,  /* [3651] */
    (xdc_Char)0x65,  /* [3652] */
    (xdc_Char)0x6c,  /* [3653] */
    (xdc_Char)0x20,  /* [3654] */
    (xdc_Char)0x76,  /* [3655] */
    (xdc_Char)0x61,  /* [3656] */
    (xdc_Char)0x6c,  /* [3657] */
    (xdc_Char)0x75,  /* [3658] */
    (xdc_Char)0x65,  /* [3659] */
    (xdc_Char)0x3a,  /* [3660] */
    (xdc_Char)0x20,  /* [3661] */
    (xdc_Char)0x25,  /* [3662] */
    (xdc_Char)0x64,  /* [3663] */
    (xdc_Char)0x0,  /* [3664] */
    (xdc_Char)0x66,  /* [3665] */
    (xdc_Char)0x72,  /* [3666] */
    (xdc_Char)0x65,  /* [3667] */
    (xdc_Char)0x65,  /* [3668] */
    (xdc_Char)0x28,  /* [3669] */
    (xdc_Char)0x29,  /* [3670] */
    (xdc_Char)0x20,  /* [3671] */
    (xdc_Char)0x69,  /* [3672] */
    (xdc_Char)0x6e,  /* [3673] */
    (xdc_Char)0x76,  /* [3674] */
    (xdc_Char)0x61,  /* [3675] */
    (xdc_Char)0x6c,  /* [3676] */
    (xdc_Char)0x69,  /* [3677] */
    (xdc_Char)0x64,  /* [3678] */
    (xdc_Char)0x20,  /* [3679] */
    (xdc_Char)0x69,  /* [3680] */
    (xdc_Char)0x6e,  /* [3681] */
    (xdc_Char)0x20,  /* [3682] */
    (xdc_Char)0x67,  /* [3683] */
    (xdc_Char)0x72,  /* [3684] */
    (xdc_Char)0x6f,  /* [3685] */
    (xdc_Char)0x77,  /* [3686] */
    (xdc_Char)0x74,  /* [3687] */
    (xdc_Char)0x68,  /* [3688] */
    (xdc_Char)0x2d,  /* [3689] */
    (xdc_Char)0x6f,  /* [3690] */
    (xdc_Char)0x6e,  /* [3691] */
    (xdc_Char)0x6c,  /* [3692] */
    (xdc_Char)0x79,  /* [3693] */
    (xdc_Char)0x20,  /* [3694] */
    (xdc_Char)0x48,  /* [3695] */
    (xdc_Char)0x65,  /* [3696] */
    (xdc_Char)0x61,  /* [3697] */
    (xdc_Char)0x70,  /* [3698] */
    (xdc_Char)0x4d,  /* [3699] */
    (xdc_Char)0x69,  /* [3700] */
    (xdc_Char)0x6e,  /* [3701] */
    (xdc_Char)0x0,  /* [3702] */
    (xdc_Char)0x54,  /* [3703] */
    (xdc_Char)0x68,  /* [3704] */
    (xdc_Char)0x65,  /* [3705] */
    (xdc_Char)0x20,  /* [3706] */
    (xdc_Char)0x52,  /* [3707] */
    (xdc_Char)0x54,  /* [3708] */
    (xdc_Char)0x53,  /* [3709] */
    (xdc_Char)0x20,  /* [3710] */
    (xdc_Char)0x68,  /* [3711] */
    (xdc_Char)0x65,  /* [3712] */
    (xdc_Char)0x61,  /* [3713] */
    (xdc_Char)0x70,  /* [3714] */
    (xdc_Char)0x20,  /* [3715] */
    (xdc_Char)0x69,  /* [3716] */
    (xdc_Char)0x73,  /* [3717] */
    (xdc_Char)0x20,  /* [3718] */
    (xdc_Char)0x75,  /* [3719] */
    (xdc_Char)0x73,  /* [3720] */
    (xdc_Char)0x65,  /* [3721] */
    (xdc_Char)0x64,  /* [3722] */
    (xdc_Char)0x20,  /* [3723] */
    (xdc_Char)0x75,  /* [3724] */
    (xdc_Char)0x70,  /* [3725] */
    (xdc_Char)0x2e,  /* [3726] */
    (xdc_Char)0x20,  /* [3727] */
    (xdc_Char)0x45,  /* [3728] */
    (xdc_Char)0x78,  /* [3729] */
    (xdc_Char)0x61,  /* [3730] */
    (xdc_Char)0x6d,  /* [3731] */
    (xdc_Char)0x69,  /* [3732] */
    (xdc_Char)0x6e,  /* [3733] */
    (xdc_Char)0x65,  /* [3734] */
    (xdc_Char)0x20,  /* [3735] */
    (xdc_Char)0x50,  /* [3736] */
    (xdc_Char)0x72,  /* [3737] */
    (xdc_Char)0x6f,  /* [3738] */
    (xdc_Char)0x67,  /* [3739] */
    (xdc_Char)0x72,  /* [3740] */
    (xdc_Char)0x61,  /* [3741] */
    (xdc_Char)0x6d,  /* [3742] */
    (xdc_Char)0x2e,  /* [3743] */
    (xdc_Char)0x68,  /* [3744] */
    (xdc_Char)0x65,  /* [3745] */
    (xdc_Char)0x61,  /* [3746] */
    (xdc_Char)0x70,  /* [3747] */
    (xdc_Char)0x2e,  /* [3748] */
    (xdc_Char)0x0,  /* [3749] */
    (xdc_Char)0x45,  /* [3750] */
    (xdc_Char)0x5f,  /* [3751] */
    (xdc_Char)0x62,  /* [3752] */
    (xdc_Char)0x61,  /* [3753] */
    (xdc_Char)0x64,  /* [3754] */
    (xdc_Char)0x43,  /* [3755] */
    (xdc_Char)0x6f,  /* [3756] */
    (xdc_Char)0x6d,  /* [3757] */
    (xdc_Char)0x6d,  /* [3758] */
    (xdc_Char)0x61,  /* [3759] */
    (xdc_Char)0x6e,  /* [3760] */
    (xdc_Char)0x64,  /* [3761] */
    (xdc_Char)0x3a,  /* [3762] */
    (xdc_Char)0x20,  /* [3763] */
    (xdc_Char)0x52,  /* [3764] */
    (xdc_Char)0x65,  /* [3765] */
    (xdc_Char)0x63,  /* [3766] */
    (xdc_Char)0x65,  /* [3767] */
    (xdc_Char)0x69,  /* [3768] */
    (xdc_Char)0x76,  /* [3769] */
    (xdc_Char)0x65,  /* [3770] */
    (xdc_Char)0x64,  /* [3771] */
    (xdc_Char)0x20,  /* [3772] */
    (xdc_Char)0x69,  /* [3773] */
    (xdc_Char)0x6e,  /* [3774] */
    (xdc_Char)0x76,  /* [3775] */
    (xdc_Char)0x61,  /* [3776] */
    (xdc_Char)0x6c,  /* [3777] */
    (xdc_Char)0x69,  /* [3778] */
    (xdc_Char)0x64,  /* [3779] */
    (xdc_Char)0x20,  /* [3780] */
    (xdc_Char)0x63,  /* [3781] */
    (xdc_Char)0x6f,  /* [3782] */
    (xdc_Char)0x6d,  /* [3783] */
    (xdc_Char)0x6d,  /* [3784] */
    (xdc_Char)0x61,  /* [3785] */
    (xdc_Char)0x6e,  /* [3786] */
    (xdc_Char)0x64,  /* [3787] */
    (xdc_Char)0x2c,  /* [3788] */
    (xdc_Char)0x20,  /* [3789] */
    (xdc_Char)0x69,  /* [3790] */
    (xdc_Char)0x64,  /* [3791] */
    (xdc_Char)0x3a,  /* [3792] */
    (xdc_Char)0x20,  /* [3793] */
    (xdc_Char)0x25,  /* [3794] */
    (xdc_Char)0x64,  /* [3795] */
    (xdc_Char)0x2e,  /* [3796] */
    (xdc_Char)0x0,  /* [3797] */
    (xdc_Char)0x45,  /* [3798] */
    (xdc_Char)0x5f,  /* [3799] */
    (xdc_Char)0x73,  /* [3800] */
    (xdc_Char)0x74,  /* [3801] */
    (xdc_Char)0x61,  /* [3802] */
    (xdc_Char)0x63,  /* [3803] */
    (xdc_Char)0x6b,  /* [3804] */
    (xdc_Char)0x4f,  /* [3805] */
    (xdc_Char)0x76,  /* [3806] */
    (xdc_Char)0x65,  /* [3807] */
    (xdc_Char)0x72,  /* [3808] */
    (xdc_Char)0x66,  /* [3809] */
    (xdc_Char)0x6c,  /* [3810] */
    (xdc_Char)0x6f,  /* [3811] */
    (xdc_Char)0x77,  /* [3812] */
    (xdc_Char)0x3a,  /* [3813] */
    (xdc_Char)0x20,  /* [3814] */
    (xdc_Char)0x54,  /* [3815] */
    (xdc_Char)0x61,  /* [3816] */
    (xdc_Char)0x73,  /* [3817] */
    (xdc_Char)0x6b,  /* [3818] */
    (xdc_Char)0x20,  /* [3819] */
    (xdc_Char)0x30,  /* [3820] */
    (xdc_Char)0x78,  /* [3821] */
    (xdc_Char)0x25,  /* [3822] */
    (xdc_Char)0x78,  /* [3823] */
    (xdc_Char)0x20,  /* [3824] */
    (xdc_Char)0x73,  /* [3825] */
    (xdc_Char)0x74,  /* [3826] */
    (xdc_Char)0x61,  /* [3827] */
    (xdc_Char)0x63,  /* [3828] */
    (xdc_Char)0x6b,  /* [3829] */
    (xdc_Char)0x20,  /* [3830] */
    (xdc_Char)0x6f,  /* [3831] */
    (xdc_Char)0x76,  /* [3832] */
    (xdc_Char)0x65,  /* [3833] */
    (xdc_Char)0x72,  /* [3834] */
    (xdc_Char)0x66,  /* [3835] */
    (xdc_Char)0x6c,  /* [3836] */
    (xdc_Char)0x6f,  /* [3837] */
    (xdc_Char)0x77,  /* [3838] */
    (xdc_Char)0x2e,  /* [3839] */
    (xdc_Char)0x0,  /* [3840] */
    (xdc_Char)0x45,  /* [3841] */
    (xdc_Char)0x5f,  /* [3842] */
    (xdc_Char)0x73,  /* [3843] */
    (xdc_Char)0x70,  /* [3844] */
    (xdc_Char)0x4f,  /* [3845] */
    (xdc_Char)0x75,  /* [3846] */
    (xdc_Char)0x74,  /* [3847] */
    (xdc_Char)0x4f,  /* [3848] */
    (xdc_Char)0x66,  /* [3849] */
    (xdc_Char)0x42,  /* [3850] */
    (xdc_Char)0x6f,  /* [3851] */
    (xdc_Char)0x75,  /* [3852] */
    (xdc_Char)0x6e,  /* [3853] */
    (xdc_Char)0x64,  /* [3854] */
    (xdc_Char)0x73,  /* [3855] */
    (xdc_Char)0x3a,  /* [3856] */
    (xdc_Char)0x20,  /* [3857] */
    (xdc_Char)0x54,  /* [3858] */
    (xdc_Char)0x61,  /* [3859] */
    (xdc_Char)0x73,  /* [3860] */
    (xdc_Char)0x6b,  /* [3861] */
    (xdc_Char)0x20,  /* [3862] */
    (xdc_Char)0x30,  /* [3863] */
    (xdc_Char)0x78,  /* [3864] */
    (xdc_Char)0x25,  /* [3865] */
    (xdc_Char)0x78,  /* [3866] */
    (xdc_Char)0x20,  /* [3867] */
    (xdc_Char)0x73,  /* [3868] */
    (xdc_Char)0x74,  /* [3869] */
    (xdc_Char)0x61,  /* [3870] */
    (xdc_Char)0x63,  /* [3871] */
    (xdc_Char)0x6b,  /* [3872] */
    (xdc_Char)0x20,  /* [3873] */
    (xdc_Char)0x65,  /* [3874] */
    (xdc_Char)0x72,  /* [3875] */
    (xdc_Char)0x72,  /* [3876] */
    (xdc_Char)0x6f,  /* [3877] */
    (xdc_Char)0x72,  /* [3878] */
    (xdc_Char)0x2c,  /* [3879] */
    (xdc_Char)0x20,  /* [3880] */
    (xdc_Char)0x53,  /* [3881] */
    (xdc_Char)0x50,  /* [3882] */
    (xdc_Char)0x20,  /* [3883] */
    (xdc_Char)0x3d,  /* [3884] */
    (xdc_Char)0x20,  /* [3885] */
    (xdc_Char)0x30,  /* [3886] */
    (xdc_Char)0x78,  /* [3887] */
    (xdc_Char)0x25,  /* [3888] */
    (xdc_Char)0x78,  /* [3889] */
    (xdc_Char)0x2e,  /* [3890] */
    (xdc_Char)0x0,  /* [3891] */
    (xdc_Char)0x45,  /* [3892] */
    (xdc_Char)0x5f,  /* [3893] */
    (xdc_Char)0x64,  /* [3894] */
    (xdc_Char)0x65,  /* [3895] */
    (xdc_Char)0x6c,  /* [3896] */
    (xdc_Char)0x65,  /* [3897] */
    (xdc_Char)0x74,  /* [3898] */
    (xdc_Char)0x65,  /* [3899] */
    (xdc_Char)0x4e,  /* [3900] */
    (xdc_Char)0x6f,  /* [3901] */
    (xdc_Char)0x74,  /* [3902] */
    (xdc_Char)0x41,  /* [3903] */
    (xdc_Char)0x6c,  /* [3904] */
    (xdc_Char)0x6c,  /* [3905] */
    (xdc_Char)0x6f,  /* [3906] */
    (xdc_Char)0x77,  /* [3907] */
    (xdc_Char)0x65,  /* [3908] */
    (xdc_Char)0x64,  /* [3909] */
    (xdc_Char)0x3a,  /* [3910] */
    (xdc_Char)0x20,  /* [3911] */
    (xdc_Char)0x54,  /* [3912] */
    (xdc_Char)0x61,  /* [3913] */
    (xdc_Char)0x73,  /* [3914] */
    (xdc_Char)0x6b,  /* [3915] */
    (xdc_Char)0x20,  /* [3916] */
    (xdc_Char)0x30,  /* [3917] */
    (xdc_Char)0x78,  /* [3918] */
    (xdc_Char)0x25,  /* [3919] */
    (xdc_Char)0x78,  /* [3920] */
    (xdc_Char)0x2e,  /* [3921] */
    (xdc_Char)0x0,  /* [3922] */
    (xdc_Char)0x45,  /* [3923] */
    (xdc_Char)0x5f,  /* [3924] */
    (xdc_Char)0x73,  /* [3925] */
    (xdc_Char)0x74,  /* [3926] */
    (xdc_Char)0x61,  /* [3927] */
    (xdc_Char)0x63,  /* [3928] */
    (xdc_Char)0x6b,  /* [3929] */
    (xdc_Char)0x4f,  /* [3930] */
    (xdc_Char)0x76,  /* [3931] */
    (xdc_Char)0x65,  /* [3932] */
    (xdc_Char)0x72,  /* [3933] */
    (xdc_Char)0x66,  /* [3934] */
    (xdc_Char)0x6c,  /* [3935] */
    (xdc_Char)0x6f,  /* [3936] */
    (xdc_Char)0x77,  /* [3937] */
    (xdc_Char)0x3a,  /* [3938] */
    (xdc_Char)0x20,  /* [3939] */
    (xdc_Char)0x49,  /* [3940] */
    (xdc_Char)0x53,  /* [3941] */
    (xdc_Char)0x52,  /* [3942] */
    (xdc_Char)0x20,  /* [3943] */
    (xdc_Char)0x73,  /* [3944] */
    (xdc_Char)0x74,  /* [3945] */
    (xdc_Char)0x61,  /* [3946] */
    (xdc_Char)0x63,  /* [3947] */
    (xdc_Char)0x6b,  /* [3948] */
    (xdc_Char)0x20,  /* [3949] */
    (xdc_Char)0x6f,  /* [3950] */
    (xdc_Char)0x76,  /* [3951] */
    (xdc_Char)0x65,  /* [3952] */
    (xdc_Char)0x72,  /* [3953] */
    (xdc_Char)0x66,  /* [3954] */
    (xdc_Char)0x6c,  /* [3955] */
    (xdc_Char)0x6f,  /* [3956] */
    (xdc_Char)0x77,  /* [3957] */
    (xdc_Char)0x2e,  /* [3958] */
    (xdc_Char)0x0,  /* [3959] */
    (xdc_Char)0x45,  /* [3960] */
    (xdc_Char)0x5f,  /* [3961] */
    (xdc_Char)0x61,  /* [3962] */
    (xdc_Char)0x6c,  /* [3963] */
    (xdc_Char)0x72,  /* [3964] */
    (xdc_Char)0x65,  /* [3965] */
    (xdc_Char)0x61,  /* [3966] */
    (xdc_Char)0x64,  /* [3967] */
    (xdc_Char)0x79,  /* [3968] */
    (xdc_Char)0x44,  /* [3969] */
    (xdc_Char)0x65,  /* [3970] */
    (xdc_Char)0x66,  /* [3971] */
    (xdc_Char)0x69,  /* [3972] */
    (xdc_Char)0x6e,  /* [3973] */
    (xdc_Char)0x65,  /* [3974] */
    (xdc_Char)0x64,  /* [3975] */
    (xdc_Char)0x3a,  /* [3976] */
    (xdc_Char)0x20,  /* [3977] */
    (xdc_Char)0x48,  /* [3978] */
    (xdc_Char)0x77,  /* [3979] */
    (xdc_Char)0x69,  /* [3980] */
    (xdc_Char)0x20,  /* [3981] */
    (xdc_Char)0x61,  /* [3982] */
    (xdc_Char)0x6c,  /* [3983] */
    (xdc_Char)0x72,  /* [3984] */
    (xdc_Char)0x65,  /* [3985] */
    (xdc_Char)0x61,  /* [3986] */
    (xdc_Char)0x64,  /* [3987] */
    (xdc_Char)0x79,  /* [3988] */
    (xdc_Char)0x20,  /* [3989] */
    (xdc_Char)0x64,  /* [3990] */
    (xdc_Char)0x65,  /* [3991] */
    (xdc_Char)0x66,  /* [3992] */
    (xdc_Char)0x69,  /* [3993] */
    (xdc_Char)0x6e,  /* [3994] */
    (xdc_Char)0x65,  /* [3995] */
    (xdc_Char)0x64,  /* [3996] */
    (xdc_Char)0x2c,  /* [3997] */
    (xdc_Char)0x20,  /* [3998] */
    (xdc_Char)0x69,  /* [3999] */
    (xdc_Char)0x6e,  /* [4000] */
    (xdc_Char)0x74,  /* [4001] */
    (xdc_Char)0x6e,  /* [4002] */
    (xdc_Char)0x75,  /* [4003] */
    (xdc_Char)0x6d,  /* [4004] */
    (xdc_Char)0x3a,  /* [4005] */
    (xdc_Char)0x20,  /* [4006] */
    (xdc_Char)0x25,  /* [4007] */
    (xdc_Char)0x64,  /* [4008] */
    (xdc_Char)0x0,  /* [4009] */
    (xdc_Char)0x45,  /* [4010] */
    (xdc_Char)0x5f,  /* [4011] */
    (xdc_Char)0x68,  /* [4012] */
    (xdc_Char)0x61,  /* [4013] */
    (xdc_Char)0x6e,  /* [4014] */
    (xdc_Char)0x64,  /* [4015] */
    (xdc_Char)0x6c,  /* [4016] */
    (xdc_Char)0x65,  /* [4017] */
    (xdc_Char)0x4e,  /* [4018] */
    (xdc_Char)0x6f,  /* [4019] */
    (xdc_Char)0x74,  /* [4020] */
    (xdc_Char)0x46,  /* [4021] */
    (xdc_Char)0x6f,  /* [4022] */
    (xdc_Char)0x75,  /* [4023] */
    (xdc_Char)0x6e,  /* [4024] */
    (xdc_Char)0x64,  /* [4025] */
    (xdc_Char)0x3a,  /* [4026] */
    (xdc_Char)0x20,  /* [4027] */
    (xdc_Char)0x48,  /* [4028] */
    (xdc_Char)0x77,  /* [4029] */
    (xdc_Char)0x69,  /* [4030] */
    (xdc_Char)0x20,  /* [4031] */
    (xdc_Char)0x68,  /* [4032] */
    (xdc_Char)0x61,  /* [4033] */
    (xdc_Char)0x6e,  /* [4034] */
    (xdc_Char)0x64,  /* [4035] */
    (xdc_Char)0x6c,  /* [4036] */
    (xdc_Char)0x65,  /* [4037] */
    (xdc_Char)0x20,  /* [4038] */
    (xdc_Char)0x6e,  /* [4039] */
    (xdc_Char)0x6f,  /* [4040] */
    (xdc_Char)0x74,  /* [4041] */
    (xdc_Char)0x20,  /* [4042] */
    (xdc_Char)0x66,  /* [4043] */
    (xdc_Char)0x6f,  /* [4044] */
    (xdc_Char)0x75,  /* [4045] */
    (xdc_Char)0x6e,  /* [4046] */
    (xdc_Char)0x64,  /* [4047] */
    (xdc_Char)0x3a,  /* [4048] */
    (xdc_Char)0x20,  /* [4049] */
    (xdc_Char)0x30,  /* [4050] */
    (xdc_Char)0x78,  /* [4051] */
    (xdc_Char)0x25,  /* [4052] */
    (xdc_Char)0x78,  /* [4053] */
    (xdc_Char)0x0,  /* [4054] */
    (xdc_Char)0x45,  /* [4055] */
    (xdc_Char)0x5f,  /* [4056] */
    (xdc_Char)0x75,  /* [4057] */
    (xdc_Char)0x6e,  /* [4058] */
    (xdc_Char)0x64,  /* [4059] */
    (xdc_Char)0x65,  /* [4060] */
    (xdc_Char)0x66,  /* [4061] */
    (xdc_Char)0x69,  /* [4062] */
    (xdc_Char)0x6e,  /* [4063] */
    (xdc_Char)0x65,  /* [4064] */
    (xdc_Char)0x64,  /* [4065] */
    (xdc_Char)0x3a,  /* [4066] */
    (xdc_Char)0x20,  /* [4067] */
    (xdc_Char)0x48,  /* [4068] */
    (xdc_Char)0x77,  /* [4069] */
    (xdc_Char)0x69,  /* [4070] */
    (xdc_Char)0x20,  /* [4071] */
    (xdc_Char)0x75,  /* [4072] */
    (xdc_Char)0x6e,  /* [4073] */
    (xdc_Char)0x64,  /* [4074] */
    (xdc_Char)0x65,  /* [4075] */
    (xdc_Char)0x66,  /* [4076] */
    (xdc_Char)0x69,  /* [4077] */
    (xdc_Char)0x6e,  /* [4078] */
    (xdc_Char)0x65,  /* [4079] */
    (xdc_Char)0x64,  /* [4080] */
    (xdc_Char)0x2c,  /* [4081] */
    (xdc_Char)0x20,  /* [4082] */
    (xdc_Char)0x69,  /* [4083] */
    (xdc_Char)0x6e,  /* [4084] */
    (xdc_Char)0x74,  /* [4085] */
    (xdc_Char)0x6e,  /* [4086] */
    (xdc_Char)0x75,  /* [4087] */
    (xdc_Char)0x6d,  /* [4088] */
    (xdc_Char)0x3a,  /* [4089] */
    (xdc_Char)0x20,  /* [4090] */
    (xdc_Char)0x25,  /* [4091] */
    (xdc_Char)0x64,  /* [4092] */
    (xdc_Char)0x0,  /* [4093] */
    (xdc_Char)0x45,  /* [4094] */
    (xdc_Char)0x5f,  /* [4095] */
    (xdc_Char)0x62,  /* [4096] */
    (xdc_Char)0x61,  /* [4097] */
    (xdc_Char)0x64,  /* [4098] */
    (xdc_Char)0x49,  /* [4099] */
    (xdc_Char)0x6e,  /* [4100] */
    (xdc_Char)0x74,  /* [4101] */
    (xdc_Char)0x4e,  /* [4102] */
    (xdc_Char)0x75,  /* [4103] */
    (xdc_Char)0x6d,  /* [4104] */
    (xdc_Char)0x2c,  /* [4105] */
    (xdc_Char)0x20,  /* [4106] */
    (xdc_Char)0x69,  /* [4107] */
    (xdc_Char)0x6e,  /* [4108] */
    (xdc_Char)0x74,  /* [4109] */
    (xdc_Char)0x6e,  /* [4110] */
    (xdc_Char)0x75,  /* [4111] */
    (xdc_Char)0x6d,  /* [4112] */
    (xdc_Char)0x3a,  /* [4113] */
    (xdc_Char)0x20,  /* [4114] */
    (xdc_Char)0x25,  /* [4115] */
    (xdc_Char)0x64,  /* [4116] */
    (xdc_Char)0x20,  /* [4117] */
    (xdc_Char)0x69,  /* [4118] */
    (xdc_Char)0x73,  /* [4119] */
    (xdc_Char)0x20,  /* [4120] */
    (xdc_Char)0x6f,  /* [4121] */
    (xdc_Char)0x75,  /* [4122] */
    (xdc_Char)0x74,  /* [4123] */
    (xdc_Char)0x20,  /* [4124] */
    (xdc_Char)0x6f,  /* [4125] */
    (xdc_Char)0x66,  /* [4126] */
    (xdc_Char)0x20,  /* [4127] */
    (xdc_Char)0x72,  /* [4128] */
    (xdc_Char)0x61,  /* [4129] */
    (xdc_Char)0x6e,  /* [4130] */
    (xdc_Char)0x67,  /* [4131] */
    (xdc_Char)0x65,  /* [4132] */
    (xdc_Char)0x0,  /* [4133] */
    (xdc_Char)0x45,  /* [4134] */
    (xdc_Char)0x5f,  /* [4135] */
    (xdc_Char)0x73,  /* [4136] */
    (xdc_Char)0x77,  /* [4137] */
    (xdc_Char)0x69,  /* [4138] */
    (xdc_Char)0x3a,  /* [4139] */
    (xdc_Char)0x20,  /* [4140] */
    (xdc_Char)0x70,  /* [4141] */
    (xdc_Char)0x63,  /* [4142] */
    (xdc_Char)0x20,  /* [4143] */
    (xdc_Char)0x3d,  /* [4144] */
    (xdc_Char)0x20,  /* [4145] */
    (xdc_Char)0x30,  /* [4146] */
    (xdc_Char)0x78,  /* [4147] */
    (xdc_Char)0x25,  /* [4148] */
    (xdc_Char)0x30,  /* [4149] */
    (xdc_Char)0x38,  /* [4150] */
    (xdc_Char)0x78,  /* [4151] */
    (xdc_Char)0x2c,  /* [4152] */
    (xdc_Char)0x20,  /* [4153] */
    (xdc_Char)0x6c,  /* [4154] */
    (xdc_Char)0x72,  /* [4155] */
    (xdc_Char)0x20,  /* [4156] */
    (xdc_Char)0x3d,  /* [4157] */
    (xdc_Char)0x20,  /* [4158] */
    (xdc_Char)0x30,  /* [4159] */
    (xdc_Char)0x78,  /* [4160] */
    (xdc_Char)0x25,  /* [4161] */
    (xdc_Char)0x30,  /* [4162] */
    (xdc_Char)0x38,  /* [4163] */
    (xdc_Char)0x78,  /* [4164] */
    (xdc_Char)0x2e,  /* [4165] */
    (xdc_Char)0x0,  /* [4166] */
    (xdc_Char)0x45,  /* [4167] */
    (xdc_Char)0x5f,  /* [4168] */
    (xdc_Char)0x70,  /* [4169] */
    (xdc_Char)0x72,  /* [4170] */
    (xdc_Char)0x65,  /* [4171] */
    (xdc_Char)0x66,  /* [4172] */
    (xdc_Char)0x65,  /* [4173] */
    (xdc_Char)0x74,  /* [4174] */
    (xdc_Char)0x63,  /* [4175] */
    (xdc_Char)0x68,  /* [4176] */
    (xdc_Char)0x41,  /* [4177] */
    (xdc_Char)0x62,  /* [4178] */
    (xdc_Char)0x6f,  /* [4179] */
    (xdc_Char)0x72,  /* [4180] */
    (xdc_Char)0x74,  /* [4181] */
    (xdc_Char)0x3a,  /* [4182] */
    (xdc_Char)0x20,  /* [4183] */
    (xdc_Char)0x70,  /* [4184] */
    (xdc_Char)0x63,  /* [4185] */
    (xdc_Char)0x20,  /* [4186] */
    (xdc_Char)0x3d,  /* [4187] */
    (xdc_Char)0x20,  /* [4188] */
    (xdc_Char)0x30,  /* [4189] */
    (xdc_Char)0x78,  /* [4190] */
    (xdc_Char)0x25,  /* [4191] */
    (xdc_Char)0x30,  /* [4192] */
    (xdc_Char)0x38,  /* [4193] */
    (xdc_Char)0x78,  /* [4194] */
    (xdc_Char)0x2c,  /* [4195] */
    (xdc_Char)0x20,  /* [4196] */
    (xdc_Char)0x6c,  /* [4197] */
    (xdc_Char)0x72,  /* [4198] */
    (xdc_Char)0x20,  /* [4199] */
    (xdc_Char)0x3d,  /* [4200] */
    (xdc_Char)0x20,  /* [4201] */
    (xdc_Char)0x30,  /* [4202] */
    (xdc_Char)0x78,  /* [4203] */
    (xdc_Char)0x25,  /* [4204] */
    (xdc_Char)0x30,  /* [4205] */
    (xdc_Char)0x38,  /* [4206] */
    (xdc_Char)0x78,  /* [4207] */
    (xdc_Char)0x2e,  /* [4208] */
    (xdc_Char)0x0,  /* [4209] */
    (xdc_Char)0x45,  /* [4210] */
    (xdc_Char)0x5f,  /* [4211] */
    (xdc_Char)0x64,  /* [4212] */
    (xdc_Char)0x61,  /* [4213] */
    (xdc_Char)0x74,  /* [4214] */
    (xdc_Char)0x61,  /* [4215] */
    (xdc_Char)0x41,  /* [4216] */
    (xdc_Char)0x62,  /* [4217] */
    (xdc_Char)0x6f,  /* [4218] */
    (xdc_Char)0x72,  /* [4219] */
    (xdc_Char)0x74,  /* [4220] */
    (xdc_Char)0x3a,  /* [4221] */
    (xdc_Char)0x20,  /* [4222] */
    (xdc_Char)0x70,  /* [4223] */
    (xdc_Char)0x63,  /* [4224] */
    (xdc_Char)0x20,  /* [4225] */
    (xdc_Char)0x3d,  /* [4226] */
    (xdc_Char)0x20,  /* [4227] */
    (xdc_Char)0x30,  /* [4228] */
    (xdc_Char)0x78,  /* [4229] */
    (xdc_Char)0x25,  /* [4230] */
    (xdc_Char)0x30,  /* [4231] */
    (xdc_Char)0x38,  /* [4232] */
    (xdc_Char)0x78,  /* [4233] */
    (xdc_Char)0x2c,  /* [4234] */
    (xdc_Char)0x20,  /* [4235] */
    (xdc_Char)0x6c,  /* [4236] */
    (xdc_Char)0x72,  /* [4237] */
    (xdc_Char)0x20,  /* [4238] */
    (xdc_Char)0x3d,  /* [4239] */
    (xdc_Char)0x20,  /* [4240] */
    (xdc_Char)0x30,  /* [4241] */
    (xdc_Char)0x78,  /* [4242] */
    (xdc_Char)0x25,  /* [4243] */
    (xdc_Char)0x30,  /* [4244] */
    (xdc_Char)0x38,  /* [4245] */
    (xdc_Char)0x78,  /* [4246] */
    (xdc_Char)0x2e,  /* [4247] */
    (xdc_Char)0x0,  /* [4248] */
    (xdc_Char)0x45,  /* [4249] */
    (xdc_Char)0x5f,  /* [4250] */
    (xdc_Char)0x75,  /* [4251] */
    (xdc_Char)0x6e,  /* [4252] */
    (xdc_Char)0x64,  /* [4253] */
    (xdc_Char)0x65,  /* [4254] */
    (xdc_Char)0x66,  /* [4255] */
    (xdc_Char)0x69,  /* [4256] */
    (xdc_Char)0x6e,  /* [4257] */
    (xdc_Char)0x65,  /* [4258] */
    (xdc_Char)0x64,  /* [4259] */
    (xdc_Char)0x49,  /* [4260] */
    (xdc_Char)0x6e,  /* [4261] */
    (xdc_Char)0x73,  /* [4262] */
    (xdc_Char)0x74,  /* [4263] */
    (xdc_Char)0x72,  /* [4264] */
    (xdc_Char)0x75,  /* [4265] */
    (xdc_Char)0x63,  /* [4266] */
    (xdc_Char)0x74,  /* [4267] */
    (xdc_Char)0x69,  /* [4268] */
    (xdc_Char)0x6f,  /* [4269] */
    (xdc_Char)0x6e,  /* [4270] */
    (xdc_Char)0x3a,  /* [4271] */
    (xdc_Char)0x20,  /* [4272] */
    (xdc_Char)0x70,  /* [4273] */
    (xdc_Char)0x63,  /* [4274] */
    (xdc_Char)0x20,  /* [4275] */
    (xdc_Char)0x3d,  /* [4276] */
    (xdc_Char)0x20,  /* [4277] */
    (xdc_Char)0x30,  /* [4278] */
    (xdc_Char)0x78,  /* [4279] */
    (xdc_Char)0x25,  /* [4280] */
    (xdc_Char)0x30,  /* [4281] */
    (xdc_Char)0x38,  /* [4282] */
    (xdc_Char)0x78,  /* [4283] */
    (xdc_Char)0x2c,  /* [4284] */
    (xdc_Char)0x20,  /* [4285] */
    (xdc_Char)0x6c,  /* [4286] */
    (xdc_Char)0x72,  /* [4287] */
    (xdc_Char)0x20,  /* [4288] */
    (xdc_Char)0x3d,  /* [4289] */
    (xdc_Char)0x20,  /* [4290] */
    (xdc_Char)0x30,  /* [4291] */
    (xdc_Char)0x78,  /* [4292] */
    (xdc_Char)0x25,  /* [4293] */
    (xdc_Char)0x30,  /* [4294] */
    (xdc_Char)0x38,  /* [4295] */
    (xdc_Char)0x78,  /* [4296] */
    (xdc_Char)0x2e,  /* [4297] */
    (xdc_Char)0x0,  /* [4298] */
    (xdc_Char)0x45,  /* [4299] */
    (xdc_Char)0x5f,  /* [4300] */
    (xdc_Char)0x70,  /* [4301] */
    (xdc_Char)0x72,  /* [4302] */
    (xdc_Char)0x69,  /* [4303] */
    (xdc_Char)0x6f,  /* [4304] */
    (xdc_Char)0x72,  /* [4305] */
    (xdc_Char)0x69,  /* [4306] */
    (xdc_Char)0x74,  /* [4307] */
    (xdc_Char)0x79,  /* [4308] */
    (xdc_Char)0x3a,  /* [4309] */
    (xdc_Char)0x20,  /* [4310] */
    (xdc_Char)0x54,  /* [4311] */
    (xdc_Char)0x68,  /* [4312] */
    (xdc_Char)0x72,  /* [4313] */
    (xdc_Char)0x65,  /* [4314] */
    (xdc_Char)0x61,  /* [4315] */
    (xdc_Char)0x64,  /* [4316] */
    (xdc_Char)0x20,  /* [4317] */
    (xdc_Char)0x70,  /* [4318] */
    (xdc_Char)0x72,  /* [4319] */
    (xdc_Char)0x69,  /* [4320] */
    (xdc_Char)0x6f,  /* [4321] */
    (xdc_Char)0x72,  /* [4322] */
    (xdc_Char)0x69,  /* [4323] */
    (xdc_Char)0x74,  /* [4324] */
    (xdc_Char)0x79,  /* [4325] */
    (xdc_Char)0x20,  /* [4326] */
    (xdc_Char)0x69,  /* [4327] */
    (xdc_Char)0x73,  /* [4328] */
    (xdc_Char)0x20,  /* [4329] */
    (xdc_Char)0x69,  /* [4330] */
    (xdc_Char)0x6e,  /* [4331] */
    (xdc_Char)0x76,  /* [4332] */
    (xdc_Char)0x61,  /* [4333] */
    (xdc_Char)0x6c,  /* [4334] */
    (xdc_Char)0x69,  /* [4335] */
    (xdc_Char)0x64,  /* [4336] */
    (xdc_Char)0x20,  /* [4337] */
    (xdc_Char)0x25,  /* [4338] */
    (xdc_Char)0x64,  /* [4339] */
    (xdc_Char)0x0,  /* [4340] */
    (xdc_Char)0x72,  /* [4341] */
    (xdc_Char)0x65,  /* [4342] */
    (xdc_Char)0x71,  /* [4343] */
    (xdc_Char)0x75,  /* [4344] */
    (xdc_Char)0x65,  /* [4345] */
    (xdc_Char)0x73,  /* [4346] */
    (xdc_Char)0x74,  /* [4347] */
    (xdc_Char)0x65,  /* [4348] */
    (xdc_Char)0x64,  /* [4349] */
    (xdc_Char)0x20,  /* [4350] */
    (xdc_Char)0x73,  /* [4351] */
    (xdc_Char)0x69,  /* [4352] */
    (xdc_Char)0x7a,  /* [4353] */
    (xdc_Char)0x65,  /* [4354] */
    (xdc_Char)0x20,  /* [4355] */
    (xdc_Char)0x69,  /* [4356] */
    (xdc_Char)0x73,  /* [4357] */
    (xdc_Char)0x20,  /* [4358] */
    (xdc_Char)0x74,  /* [4359] */
    (xdc_Char)0x6f,  /* [4360] */
    (xdc_Char)0x6f,  /* [4361] */
    (xdc_Char)0x20,  /* [4362] */
    (xdc_Char)0x62,  /* [4363] */
    (xdc_Char)0x69,  /* [4364] */
    (xdc_Char)0x67,  /* [4365] */
    (xdc_Char)0x3a,  /* [4366] */
    (xdc_Char)0x20,  /* [4367] */
    (xdc_Char)0x68,  /* [4368] */
    (xdc_Char)0x61,  /* [4369] */
    (xdc_Char)0x6e,  /* [4370] */
    (xdc_Char)0x64,  /* [4371] */
    (xdc_Char)0x6c,  /* [4372] */
    (xdc_Char)0x65,  /* [4373] */
    (xdc_Char)0x3d,  /* [4374] */
    (xdc_Char)0x30,  /* [4375] */
    (xdc_Char)0x78,  /* [4376] */
    (xdc_Char)0x25,  /* [4377] */
    (xdc_Char)0x78,  /* [4378] */
    (xdc_Char)0x2c,  /* [4379] */
    (xdc_Char)0x20,  /* [4380] */
    (xdc_Char)0x73,  /* [4381] */
    (xdc_Char)0x69,  /* [4382] */
    (xdc_Char)0x7a,  /* [4383] */
    (xdc_Char)0x65,  /* [4384] */
    (xdc_Char)0x3d,  /* [4385] */
    (xdc_Char)0x25,  /* [4386] */
    (xdc_Char)0x75,  /* [4387] */
    (xdc_Char)0x0,  /* [4388] */
    (xdc_Char)0x6f,  /* [4389] */
    (xdc_Char)0x75,  /* [4390] */
    (xdc_Char)0x74,  /* [4391] */
    (xdc_Char)0x20,  /* [4392] */
    (xdc_Char)0x6f,  /* [4393] */
    (xdc_Char)0x66,  /* [4394] */
    (xdc_Char)0x20,  /* [4395] */
    (xdc_Char)0x6d,  /* [4396] */
    (xdc_Char)0x65,  /* [4397] */
    (xdc_Char)0x6d,  /* [4398] */
    (xdc_Char)0x6f,  /* [4399] */
    (xdc_Char)0x72,  /* [4400] */
    (xdc_Char)0x79,  /* [4401] */
    (xdc_Char)0x3a,  /* [4402] */
    (xdc_Char)0x20,  /* [4403] */
    (xdc_Char)0x68,  /* [4404] */
    (xdc_Char)0x61,  /* [4405] */
    (xdc_Char)0x6e,  /* [4406] */
    (xdc_Char)0x64,  /* [4407] */
    (xdc_Char)0x6c,  /* [4408] */
    (xdc_Char)0x65,  /* [4409] */
    (xdc_Char)0x3d,  /* [4410] */
    (xdc_Char)0x30,  /* [4411] */
    (xdc_Char)0x78,  /* [4412] */
    (xdc_Char)0x25,  /* [4413] */
    (xdc_Char)0x78,  /* [4414] */
    (xdc_Char)0x2c,  /* [4415] */
    (xdc_Char)0x20,  /* [4416] */
    (xdc_Char)0x73,  /* [4417] */
    (xdc_Char)0x69,  /* [4418] */
    (xdc_Char)0x7a,  /* [4419] */
    (xdc_Char)0x65,  /* [4420] */
    (xdc_Char)0x3d,  /* [4421] */
    (xdc_Char)0x25,  /* [4422] */
    (xdc_Char)0x75,  /* [4423] */
    (xdc_Char)0x0,  /* [4424] */
    (xdc_Char)0x45,  /* [4425] */
    (xdc_Char)0x5f,  /* [4426] */
    (xdc_Char)0x69,  /* [4427] */
    (xdc_Char)0x6e,  /* [4428] */
    (xdc_Char)0x76,  /* [4429] */
    (xdc_Char)0x61,  /* [4430] */
    (xdc_Char)0x6c,  /* [4431] */
    (xdc_Char)0x69,  /* [4432] */
    (xdc_Char)0x64,  /* [4433] */
    (xdc_Char)0x54,  /* [4434] */
    (xdc_Char)0x69,  /* [4435] */
    (xdc_Char)0x6d,  /* [4436] */
    (xdc_Char)0x65,  /* [4437] */
    (xdc_Char)0x72,  /* [4438] */
    (xdc_Char)0x3a,  /* [4439] */
    (xdc_Char)0x20,  /* [4440] */
    (xdc_Char)0x49,  /* [4441] */
    (xdc_Char)0x6e,  /* [4442] */
    (xdc_Char)0x76,  /* [4443] */
    (xdc_Char)0x61,  /* [4444] */
    (xdc_Char)0x6c,  /* [4445] */
    (xdc_Char)0x69,  /* [4446] */
    (xdc_Char)0x64,  /* [4447] */
    (xdc_Char)0x20,  /* [4448] */
    (xdc_Char)0x54,  /* [4449] */
    (xdc_Char)0x69,  /* [4450] */
    (xdc_Char)0x6d,  /* [4451] */
    (xdc_Char)0x65,  /* [4452] */
    (xdc_Char)0x72,  /* [4453] */
    (xdc_Char)0x20,  /* [4454] */
    (xdc_Char)0x49,  /* [4455] */
    (xdc_Char)0x64,  /* [4456] */
    (xdc_Char)0x20,  /* [4457] */
    (xdc_Char)0x25,  /* [4458] */
    (xdc_Char)0x64,  /* [4459] */
    (xdc_Char)0x0,  /* [4460] */
    (xdc_Char)0x45,  /* [4461] */
    (xdc_Char)0x5f,  /* [4462] */
    (xdc_Char)0x6e,  /* [4463] */
    (xdc_Char)0x6f,  /* [4464] */
    (xdc_Char)0x74,  /* [4465] */
    (xdc_Char)0x41,  /* [4466] */
    (xdc_Char)0x76,  /* [4467] */
    (xdc_Char)0x61,  /* [4468] */
    (xdc_Char)0x69,  /* [4469] */
    (xdc_Char)0x6c,  /* [4470] */
    (xdc_Char)0x61,  /* [4471] */
    (xdc_Char)0x62,  /* [4472] */
    (xdc_Char)0x6c,  /* [4473] */
    (xdc_Char)0x65,  /* [4474] */
    (xdc_Char)0x3a,  /* [4475] */
    (xdc_Char)0x20,  /* [4476] */
    (xdc_Char)0x54,  /* [4477] */
    (xdc_Char)0x69,  /* [4478] */
    (xdc_Char)0x6d,  /* [4479] */
    (xdc_Char)0x65,  /* [4480] */
    (xdc_Char)0x72,  /* [4481] */
    (xdc_Char)0x20,  /* [4482] */
    (xdc_Char)0x6e,  /* [4483] */
    (xdc_Char)0x6f,  /* [4484] */
    (xdc_Char)0x74,  /* [4485] */
    (xdc_Char)0x20,  /* [4486] */
    (xdc_Char)0x61,  /* [4487] */
    (xdc_Char)0x76,  /* [4488] */
    (xdc_Char)0x61,  /* [4489] */
    (xdc_Char)0x69,  /* [4490] */
    (xdc_Char)0x6c,  /* [4491] */
    (xdc_Char)0x61,  /* [4492] */
    (xdc_Char)0x62,  /* [4493] */
    (xdc_Char)0x6c,  /* [4494] */
    (xdc_Char)0x65,  /* [4495] */
    (xdc_Char)0x20,  /* [4496] */
    (xdc_Char)0x25,  /* [4497] */
    (xdc_Char)0x64,  /* [4498] */
    (xdc_Char)0x0,  /* [4499] */
    (xdc_Char)0x45,  /* [4500] */
    (xdc_Char)0x5f,  /* [4501] */
    (xdc_Char)0x63,  /* [4502] */
    (xdc_Char)0x61,  /* [4503] */
    (xdc_Char)0x6e,  /* [4504] */
    (xdc_Char)0x6e,  /* [4505] */
    (xdc_Char)0x6f,  /* [4506] */
    (xdc_Char)0x74,  /* [4507] */
    (xdc_Char)0x53,  /* [4508] */
    (xdc_Char)0x75,  /* [4509] */
    (xdc_Char)0x70,  /* [4510] */
    (xdc_Char)0x70,  /* [4511] */
    (xdc_Char)0x6f,  /* [4512] */
    (xdc_Char)0x72,  /* [4513] */
    (xdc_Char)0x74,  /* [4514] */
    (xdc_Char)0x3a,  /* [4515] */
    (xdc_Char)0x20,  /* [4516] */
    (xdc_Char)0x54,  /* [4517] */
    (xdc_Char)0x69,  /* [4518] */
    (xdc_Char)0x6d,  /* [4519] */
    (xdc_Char)0x65,  /* [4520] */
    (xdc_Char)0x72,  /* [4521] */
    (xdc_Char)0x20,  /* [4522] */
    (xdc_Char)0x63,  /* [4523] */
    (xdc_Char)0x61,  /* [4524] */
    (xdc_Char)0x6e,  /* [4525] */
    (xdc_Char)0x6e,  /* [4526] */
    (xdc_Char)0x6f,  /* [4527] */
    (xdc_Char)0x74,  /* [4528] */
    (xdc_Char)0x20,  /* [4529] */
    (xdc_Char)0x73,  /* [4530] */
    (xdc_Char)0x75,  /* [4531] */
    (xdc_Char)0x70,  /* [4532] */
    (xdc_Char)0x70,  /* [4533] */
    (xdc_Char)0x6f,  /* [4534] */
    (xdc_Char)0x72,  /* [4535] */
    (xdc_Char)0x74,  /* [4536] */
    (xdc_Char)0x20,  /* [4537] */
    (xdc_Char)0x72,  /* [4538] */
    (xdc_Char)0x65,  /* [4539] */
    (xdc_Char)0x71,  /* [4540] */
    (xdc_Char)0x75,  /* [4541] */
    (xdc_Char)0x65,  /* [4542] */
    (xdc_Char)0x73,  /* [4543] */
    (xdc_Char)0x74,  /* [4544] */
    (xdc_Char)0x65,  /* [4545] */
    (xdc_Char)0x64,  /* [4546] */
    (xdc_Char)0x20,  /* [4547] */
    (xdc_Char)0x70,  /* [4548] */
    (xdc_Char)0x65,  /* [4549] */
    (xdc_Char)0x72,  /* [4550] */
    (xdc_Char)0x69,  /* [4551] */
    (xdc_Char)0x6f,  /* [4552] */
    (xdc_Char)0x64,  /* [4553] */
    (xdc_Char)0x20,  /* [4554] */
    (xdc_Char)0x25,  /* [4555] */
    (xdc_Char)0x64,  /* [4556] */
    (xdc_Char)0x0,  /* [4557] */
    (xdc_Char)0x45,  /* [4558] */
    (xdc_Char)0x5f,  /* [4559] */
    (xdc_Char)0x66,  /* [4560] */
    (xdc_Char)0x72,  /* [4561] */
    (xdc_Char)0x65,  /* [4562] */
    (xdc_Char)0x71,  /* [4563] */
    (xdc_Char)0x4d,  /* [4564] */
    (xdc_Char)0x69,  /* [4565] */
    (xdc_Char)0x73,  /* [4566] */
    (xdc_Char)0x6d,  /* [4567] */
    (xdc_Char)0x61,  /* [4568] */
    (xdc_Char)0x74,  /* [4569] */
    (xdc_Char)0x63,  /* [4570] */
    (xdc_Char)0x68,  /* [4571] */
    (xdc_Char)0x3a,  /* [4572] */
    (xdc_Char)0x20,  /* [4573] */
    (xdc_Char)0x46,  /* [4574] */
    (xdc_Char)0x72,  /* [4575] */
    (xdc_Char)0x65,  /* [4576] */
    (xdc_Char)0x71,  /* [4577] */
    (xdc_Char)0x75,  /* [4578] */
    (xdc_Char)0x65,  /* [4579] */
    (xdc_Char)0x6e,  /* [4580] */
    (xdc_Char)0x63,  /* [4581] */
    (xdc_Char)0x79,  /* [4582] */
    (xdc_Char)0x20,  /* [4583] */
    (xdc_Char)0x6d,  /* [4584] */
    (xdc_Char)0x69,  /* [4585] */
    (xdc_Char)0x73,  /* [4586] */
    (xdc_Char)0x6d,  /* [4587] */
    (xdc_Char)0x61,  /* [4588] */
    (xdc_Char)0x74,  /* [4589] */
    (xdc_Char)0x63,  /* [4590] */
    (xdc_Char)0x68,  /* [4591] */
    (xdc_Char)0x3a,  /* [4592] */
    (xdc_Char)0x20,  /* [4593] */
    (xdc_Char)0x45,  /* [4594] */
    (xdc_Char)0x78,  /* [4595] */
    (xdc_Char)0x70,  /* [4596] */
    (xdc_Char)0x65,  /* [4597] */
    (xdc_Char)0x63,  /* [4598] */
    (xdc_Char)0x74,  /* [4599] */
    (xdc_Char)0x65,  /* [4600] */
    (xdc_Char)0x64,  /* [4601] */
    (xdc_Char)0x20,  /* [4602] */
    (xdc_Char)0x25,  /* [4603] */
    (xdc_Char)0x64,  /* [4604] */
    (xdc_Char)0x20,  /* [4605] */
    (xdc_Char)0x48,  /* [4606] */
    (xdc_Char)0x7a,  /* [4607] */
    (xdc_Char)0x2c,  /* [4608] */
    (xdc_Char)0x20,  /* [4609] */
    (xdc_Char)0x61,  /* [4610] */
    (xdc_Char)0x63,  /* [4611] */
    (xdc_Char)0x74,  /* [4612] */
    (xdc_Char)0x75,  /* [4613] */
    (xdc_Char)0x61,  /* [4614] */
    (xdc_Char)0x6c,  /* [4615] */
    (xdc_Char)0x3a,  /* [4616] */
    (xdc_Char)0x20,  /* [4617] */
    (xdc_Char)0x25,  /* [4618] */
    (xdc_Char)0x64,  /* [4619] */
    (xdc_Char)0x20,  /* [4620] */
    (xdc_Char)0x48,  /* [4621] */
    (xdc_Char)0x7a,  /* [4622] */
    (xdc_Char)0x2e,  /* [4623] */
    (xdc_Char)0x20,  /* [4624] */
    (xdc_Char)0x20,  /* [4625] */
    (xdc_Char)0x59,  /* [4626] */
    (xdc_Char)0x6f,  /* [4627] */
    (xdc_Char)0x75,  /* [4628] */
    (xdc_Char)0x20,  /* [4629] */
    (xdc_Char)0x6e,  /* [4630] */
    (xdc_Char)0x65,  /* [4631] */
    (xdc_Char)0x65,  /* [4632] */
    (xdc_Char)0x64,  /* [4633] */
    (xdc_Char)0x20,  /* [4634] */
    (xdc_Char)0x74,  /* [4635] */
    (xdc_Char)0x6f,  /* [4636] */
    (xdc_Char)0x20,  /* [4637] */
    (xdc_Char)0x6d,  /* [4638] */
    (xdc_Char)0x6f,  /* [4639] */
    (xdc_Char)0x64,  /* [4640] */
    (xdc_Char)0x69,  /* [4641] */
    (xdc_Char)0x66,  /* [4642] */
    (xdc_Char)0x79,  /* [4643] */
    (xdc_Char)0x20,  /* [4644] */
    (xdc_Char)0x54,  /* [4645] */
    (xdc_Char)0x69,  /* [4646] */
    (xdc_Char)0x6d,  /* [4647] */
    (xdc_Char)0x65,  /* [4648] */
    (xdc_Char)0x72,  /* [4649] */
    (xdc_Char)0x2e,  /* [4650] */
    (xdc_Char)0x69,  /* [4651] */
    (xdc_Char)0x6e,  /* [4652] */
    (xdc_Char)0x74,  /* [4653] */
    (xdc_Char)0x46,  /* [4654] */
    (xdc_Char)0x72,  /* [4655] */
    (xdc_Char)0x65,  /* [4656] */
    (xdc_Char)0x71,  /* [4657] */
    (xdc_Char)0x2e,  /* [4658] */
    (xdc_Char)0x6c,  /* [4659] */
    (xdc_Char)0x6f,  /* [4660] */
    (xdc_Char)0x20,  /* [4661] */
    (xdc_Char)0x74,  /* [4662] */
    (xdc_Char)0x6f,  /* [4663] */
    (xdc_Char)0x20,  /* [4664] */
    (xdc_Char)0x6d,  /* [4665] */
    (xdc_Char)0x61,  /* [4666] */
    (xdc_Char)0x74,  /* [4667] */
    (xdc_Char)0x63,  /* [4668] */
    (xdc_Char)0x68,  /* [4669] */
    (xdc_Char)0x20,  /* [4670] */
    (xdc_Char)0x74,  /* [4671] */
    (xdc_Char)0x68,  /* [4672] */
    (xdc_Char)0x65,  /* [4673] */
    (xdc_Char)0x20,  /* [4674] */
    (xdc_Char)0x61,  /* [4675] */
    (xdc_Char)0x63,  /* [4676] */
    (xdc_Char)0x74,  /* [4677] */
    (xdc_Char)0x75,  /* [4678] */
    (xdc_Char)0x61,  /* [4679] */
    (xdc_Char)0x6c,  /* [4680] */
    (xdc_Char)0x20,  /* [4681] */
    (xdc_Char)0x66,  /* [4682] */
    (xdc_Char)0x72,  /* [4683] */
    (xdc_Char)0x65,  /* [4684] */
    (xdc_Char)0x71,  /* [4685] */
    (xdc_Char)0x75,  /* [4686] */
    (xdc_Char)0x65,  /* [4687] */
    (xdc_Char)0x6e,  /* [4688] */
    (xdc_Char)0x63,  /* [4689] */
    (xdc_Char)0x79,  /* [4690] */
    (xdc_Char)0x2e,  /* [4691] */
    (xdc_Char)0x0,  /* [4692] */
    (xdc_Char)0x45,  /* [4693] */
    (xdc_Char)0x5f,  /* [4694] */
    (xdc_Char)0x62,  /* [4695] */
    (xdc_Char)0x61,  /* [4696] */
    (xdc_Char)0x64,  /* [4697] */
    (xdc_Char)0x49,  /* [4698] */
    (xdc_Char)0x6e,  /* [4699] */
    (xdc_Char)0x74,  /* [4700] */
    (xdc_Char)0x4e,  /* [4701] */
    (xdc_Char)0x75,  /* [4702] */
    (xdc_Char)0x6d,  /* [4703] */
    (xdc_Char)0x3a,  /* [4704] */
    (xdc_Char)0x20,  /* [4705] */
    (xdc_Char)0x54,  /* [4706] */
    (xdc_Char)0x69,  /* [4707] */
    (xdc_Char)0x6d,  /* [4708] */
    (xdc_Char)0x65,  /* [4709] */
    (xdc_Char)0x72,  /* [4710] */
    (xdc_Char)0x20,  /* [4711] */
    (xdc_Char)0x72,  /* [4712] */
    (xdc_Char)0x65,  /* [4713] */
    (xdc_Char)0x71,  /* [4714] */
    (xdc_Char)0x75,  /* [4715] */
    (xdc_Char)0x69,  /* [4716] */
    (xdc_Char)0x72,  /* [4717] */
    (xdc_Char)0x65,  /* [4718] */
    (xdc_Char)0x73,  /* [4719] */
    (xdc_Char)0x20,  /* [4720] */
    (xdc_Char)0x61,  /* [4721] */
    (xdc_Char)0x20,  /* [4722] */
    (xdc_Char)0x76,  /* [4723] */
    (xdc_Char)0x61,  /* [4724] */
    (xdc_Char)0x6c,  /* [4725] */
    (xdc_Char)0x69,  /* [4726] */
    (xdc_Char)0x64,  /* [4727] */
    (xdc_Char)0x20,  /* [4728] */
    (xdc_Char)0x69,  /* [4729] */
    (xdc_Char)0x6e,  /* [4730] */
    (xdc_Char)0x74,  /* [4731] */
    (xdc_Char)0x4e,  /* [4732] */
    (xdc_Char)0x75,  /* [4733] */
    (xdc_Char)0x6d,  /* [4734] */
    (xdc_Char)0x2e,  /* [4735] */
    (xdc_Char)0x20,  /* [4736] */
    (xdc_Char)0x50,  /* [4737] */
    (xdc_Char)0x6c,  /* [4738] */
    (xdc_Char)0x65,  /* [4739] */
    (xdc_Char)0x61,  /* [4740] */
    (xdc_Char)0x73,  /* [4741] */
    (xdc_Char)0x65,  /* [4742] */
    (xdc_Char)0x20,  /* [4743] */
    (xdc_Char)0x75,  /* [4744] */
    (xdc_Char)0x73,  /* [4745] */
    (xdc_Char)0x65,  /* [4746] */
    (xdc_Char)0x20,  /* [4747] */
    (xdc_Char)0x44,  /* [4748] */
    (xdc_Char)0x4d,  /* [4749] */
    (xdc_Char)0x54,  /* [4750] */
    (xdc_Char)0x69,  /* [4751] */
    (xdc_Char)0x6d,  /* [4752] */
    (xdc_Char)0x65,  /* [4753] */
    (xdc_Char)0x72,  /* [4754] */
    (xdc_Char)0x20,  /* [4755] */
    (xdc_Char)0x6d,  /* [4756] */
    (xdc_Char)0x6f,  /* [4757] */
    (xdc_Char)0x64,  /* [4758] */
    (xdc_Char)0x75,  /* [4759] */
    (xdc_Char)0x6c,  /* [4760] */
    (xdc_Char)0x65,  /* [4761] */
    (xdc_Char)0x27,  /* [4762] */
    (xdc_Char)0x73,  /* [4763] */
    (xdc_Char)0x20,  /* [4764] */
    (xdc_Char)0x74,  /* [4765] */
    (xdc_Char)0x69,  /* [4766] */
    (xdc_Char)0x6d,  /* [4767] */
    (xdc_Char)0x65,  /* [4768] */
    (xdc_Char)0x72,  /* [4769] */
    (xdc_Char)0x53,  /* [4770] */
    (xdc_Char)0x65,  /* [4771] */
    (xdc_Char)0x74,  /* [4772] */
    (xdc_Char)0x74,  /* [4773] */
    (xdc_Char)0x69,  /* [4774] */
    (xdc_Char)0x6e,  /* [4775] */
    (xdc_Char)0x67,  /* [4776] */
    (xdc_Char)0x73,  /* [4777] */
    (xdc_Char)0x20,  /* [4778] */
    (xdc_Char)0x63,  /* [4779] */
    (xdc_Char)0x6f,  /* [4780] */
    (xdc_Char)0x6e,  /* [4781] */
    (xdc_Char)0x66,  /* [4782] */
    (xdc_Char)0x69,  /* [4783] */
    (xdc_Char)0x67,  /* [4784] */
    (xdc_Char)0x20,  /* [4785] */
    (xdc_Char)0x70,  /* [4786] */
    (xdc_Char)0x61,  /* [4787] */
    (xdc_Char)0x72,  /* [4788] */
    (xdc_Char)0x61,  /* [4789] */
    (xdc_Char)0x6d,  /* [4790] */
    (xdc_Char)0x20,  /* [4791] */
    (xdc_Char)0x74,  /* [4792] */
    (xdc_Char)0x6f,  /* [4793] */
    (xdc_Char)0x20,  /* [4794] */
    (xdc_Char)0x61,  /* [4795] */
    (xdc_Char)0x73,  /* [4796] */
    (xdc_Char)0x73,  /* [4797] */
    (xdc_Char)0x69,  /* [4798] */
    (xdc_Char)0x67,  /* [4799] */
    (xdc_Char)0x6e,  /* [4800] */
    (xdc_Char)0x20,  /* [4801] */
    (xdc_Char)0x61,  /* [4802] */
    (xdc_Char)0x20,  /* [4803] */
    (xdc_Char)0x76,  /* [4804] */
    (xdc_Char)0x61,  /* [4805] */
    (xdc_Char)0x6c,  /* [4806] */
    (xdc_Char)0x69,  /* [4807] */
    (xdc_Char)0x64,  /* [4808] */
    (xdc_Char)0x20,  /* [4809] */
    (xdc_Char)0x69,  /* [4810] */
    (xdc_Char)0x6e,  /* [4811] */
    (xdc_Char)0x74,  /* [4812] */
    (xdc_Char)0x4e,  /* [4813] */
    (xdc_Char)0x75,  /* [4814] */
    (xdc_Char)0x6d,  /* [4815] */
    (xdc_Char)0x20,  /* [4816] */
    (xdc_Char)0x66,  /* [4817] */
    (xdc_Char)0x6f,  /* [4818] */
    (xdc_Char)0x72,  /* [4819] */
    (xdc_Char)0x20,  /* [4820] */
    (xdc_Char)0x74,  /* [4821] */
    (xdc_Char)0x68,  /* [4822] */
    (xdc_Char)0x65,  /* [4823] */
    (xdc_Char)0x20,  /* [4824] */
    (xdc_Char)0x73,  /* [4825] */
    (xdc_Char)0x65,  /* [4826] */
    (xdc_Char)0x6c,  /* [4827] */
    (xdc_Char)0x65,  /* [4828] */
    (xdc_Char)0x63,  /* [4829] */
    (xdc_Char)0x74,  /* [4830] */
    (xdc_Char)0x65,  /* [4831] */
    (xdc_Char)0x64,  /* [4832] */
    (xdc_Char)0x20,  /* [4833] */
    (xdc_Char)0x74,  /* [4834] */
    (xdc_Char)0x69,  /* [4835] */
    (xdc_Char)0x6d,  /* [4836] */
    (xdc_Char)0x65,  /* [4837] */
    (xdc_Char)0x72,  /* [4838] */
    (xdc_Char)0x2e,  /* [4839] */
    (xdc_Char)0x0,  /* [4840] */
    (xdc_Char)0x3c,  /* [4841] */
    (xdc_Char)0x2d,  /* [4842] */
    (xdc_Char)0x2d,  /* [4843] */
    (xdc_Char)0x20,  /* [4844] */
    (xdc_Char)0x63,  /* [4845] */
    (xdc_Char)0x6f,  /* [4846] */
    (xdc_Char)0x6e,  /* [4847] */
    (xdc_Char)0x73,  /* [4848] */
    (xdc_Char)0x74,  /* [4849] */
    (xdc_Char)0x72,  /* [4850] */
    (xdc_Char)0x75,  /* [4851] */
    (xdc_Char)0x63,  /* [4852] */
    (xdc_Char)0x74,  /* [4853] */
    (xdc_Char)0x3a,  /* [4854] */
    (xdc_Char)0x20,  /* [4855] */
    (xdc_Char)0x25,  /* [4856] */
    (xdc_Char)0x70,  /* [4857] */
    (xdc_Char)0x28,  /* [4858] */
    (xdc_Char)0x27,  /* [4859] */
    (xdc_Char)0x25,  /* [4860] */
    (xdc_Char)0x73,  /* [4861] */
    (xdc_Char)0x27,  /* [4862] */
    (xdc_Char)0x29,  /* [4863] */
    (xdc_Char)0x0,  /* [4864] */
    (xdc_Char)0x3c,  /* [4865] */
    (xdc_Char)0x2d,  /* [4866] */
    (xdc_Char)0x2d,  /* [4867] */
    (xdc_Char)0x20,  /* [4868] */
    (xdc_Char)0x63,  /* [4869] */
    (xdc_Char)0x72,  /* [4870] */
    (xdc_Char)0x65,  /* [4871] */
    (xdc_Char)0x61,  /* [4872] */
    (xdc_Char)0x74,  /* [4873] */
    (xdc_Char)0x65,  /* [4874] */
    (xdc_Char)0x3a,  /* [4875] */
    (xdc_Char)0x20,  /* [4876] */
    (xdc_Char)0x25,  /* [4877] */
    (xdc_Char)0x70,  /* [4878] */
    (xdc_Char)0x28,  /* [4879] */
    (xdc_Char)0x27,  /* [4880] */
    (xdc_Char)0x25,  /* [4881] */
    (xdc_Char)0x73,  /* [4882] */
    (xdc_Char)0x27,  /* [4883] */
    (xdc_Char)0x29,  /* [4884] */
    (xdc_Char)0x0,  /* [4885] */
    (xdc_Char)0x2d,  /* [4886] */
    (xdc_Char)0x2d,  /* [4887] */
    (xdc_Char)0x3e,  /* [4888] */
    (xdc_Char)0x20,  /* [4889] */
    (xdc_Char)0x64,  /* [4890] */
    (xdc_Char)0x65,  /* [4891] */
    (xdc_Char)0x73,  /* [4892] */
    (xdc_Char)0x74,  /* [4893] */
    (xdc_Char)0x72,  /* [4894] */
    (xdc_Char)0x75,  /* [4895] */
    (xdc_Char)0x63,  /* [4896] */
    (xdc_Char)0x74,  /* [4897] */
    (xdc_Char)0x3a,  /* [4898] */
    (xdc_Char)0x20,  /* [4899] */
    (xdc_Char)0x28,  /* [4900] */
    (xdc_Char)0x25,  /* [4901] */
    (xdc_Char)0x70,  /* [4902] */
    (xdc_Char)0x29,  /* [4903] */
    (xdc_Char)0x0,  /* [4904] */
    (xdc_Char)0x2d,  /* [4905] */
    (xdc_Char)0x2d,  /* [4906] */
    (xdc_Char)0x3e,  /* [4907] */
    (xdc_Char)0x20,  /* [4908] */
    (xdc_Char)0x64,  /* [4909] */
    (xdc_Char)0x65,  /* [4910] */
    (xdc_Char)0x6c,  /* [4911] */
    (xdc_Char)0x65,  /* [4912] */
    (xdc_Char)0x74,  /* [4913] */
    (xdc_Char)0x65,  /* [4914] */
    (xdc_Char)0x3a,  /* [4915] */
    (xdc_Char)0x20,  /* [4916] */
    (xdc_Char)0x28,  /* [4917] */
    (xdc_Char)0x25,  /* [4918] */
    (xdc_Char)0x70,  /* [4919] */
    (xdc_Char)0x29,  /* [4920] */
    (xdc_Char)0x0,  /* [4921] */
    (xdc_Char)0x45,  /* [4922] */
    (xdc_Char)0x52,  /* [4923] */
    (xdc_Char)0x52,  /* [4924] */
    (xdc_Char)0x4f,  /* [4925] */
    (xdc_Char)0x52,  /* [4926] */
    (xdc_Char)0x3a,  /* [4927] */
    (xdc_Char)0x20,  /* [4928] */
    (xdc_Char)0x25,  /* [4929] */
    (xdc_Char)0x24,  /* [4930] */
    (xdc_Char)0x46,  /* [4931] */
    (xdc_Char)0x25,  /* [4932] */
    (xdc_Char)0x24,  /* [4933] */
    (xdc_Char)0x53,  /* [4934] */
    (xdc_Char)0x0,  /* [4935] */
    (xdc_Char)0x57,  /* [4936] */
    (xdc_Char)0x41,  /* [4937] */
    (xdc_Char)0x52,  /* [4938] */
    (xdc_Char)0x4e,  /* [4939] */
    (xdc_Char)0x49,  /* [4940] */
    (xdc_Char)0x4e,  /* [4941] */
    (xdc_Char)0x47,  /* [4942] */
    (xdc_Char)0x3a,  /* [4943] */
    (xdc_Char)0x20,  /* [4944] */
    (xdc_Char)0x25,  /* [4945] */
    (xdc_Char)0x24,  /* [4946] */
    (xdc_Char)0x46,  /* [4947] */
    (xdc_Char)0x25,  /* [4948] */
    (xdc_Char)0x24,  /* [4949] */
    (xdc_Char)0x53,  /* [4950] */
    (xdc_Char)0x0,  /* [4951] */
    (xdc_Char)0x25,  /* [4952] */
    (xdc_Char)0x24,  /* [4953] */
    (xdc_Char)0x46,  /* [4954] */
    (xdc_Char)0x25,  /* [4955] */
    (xdc_Char)0x24,  /* [4956] */
    (xdc_Char)0x53,  /* [4957] */
    (xdc_Char)0x0,  /* [4958] */
    (xdc_Char)0x53,  /* [4959] */
    (xdc_Char)0x74,  /* [4960] */
    (xdc_Char)0x61,  /* [4961] */
    (xdc_Char)0x72,  /* [4962] */
    (xdc_Char)0x74,  /* [4963] */
    (xdc_Char)0x3a,  /* [4964] */
    (xdc_Char)0x20,  /* [4965] */
    (xdc_Char)0x25,  /* [4966] */
    (xdc_Char)0x24,  /* [4967] */
    (xdc_Char)0x53,  /* [4968] */
    (xdc_Char)0x0,  /* [4969] */
    (xdc_Char)0x53,  /* [4970] */
    (xdc_Char)0x74,  /* [4971] */
    (xdc_Char)0x6f,  /* [4972] */
    (xdc_Char)0x70,  /* [4973] */
    (xdc_Char)0x3a,  /* [4974] */
    (xdc_Char)0x20,  /* [4975] */
    (xdc_Char)0x25,  /* [4976] */
    (xdc_Char)0x24,  /* [4977] */
    (xdc_Char)0x53,  /* [4978] */
    (xdc_Char)0x0,  /* [4979] */
    (xdc_Char)0x53,  /* [4980] */
    (xdc_Char)0x74,  /* [4981] */
    (xdc_Char)0x61,  /* [4982] */
    (xdc_Char)0x72,  /* [4983] */
    (xdc_Char)0x74,  /* [4984] */
    (xdc_Char)0x49,  /* [4985] */
    (xdc_Char)0x6e,  /* [4986] */
    (xdc_Char)0x73,  /* [4987] */
    (xdc_Char)0x74,  /* [4988] */
    (xdc_Char)0x61,  /* [4989] */
    (xdc_Char)0x6e,  /* [4990] */
    (xdc_Char)0x63,  /* [4991] */
    (xdc_Char)0x65,  /* [4992] */
    (xdc_Char)0x3a,  /* [4993] */
    (xdc_Char)0x20,  /* [4994] */
    (xdc_Char)0x25,  /* [4995] */
    (xdc_Char)0x24,  /* [4996] */
    (xdc_Char)0x53,  /* [4997] */
    (xdc_Char)0x0,  /* [4998] */
    (xdc_Char)0x53,  /* [4999] */
    (xdc_Char)0x74,  /* [5000] */
    (xdc_Char)0x6f,  /* [5001] */
    (xdc_Char)0x70,  /* [5002] */
    (xdc_Char)0x49,  /* [5003] */
    (xdc_Char)0x6e,  /* [5004] */
    (xdc_Char)0x73,  /* [5005] */
    (xdc_Char)0x74,  /* [5006] */
    (xdc_Char)0x61,  /* [5007] */
    (xdc_Char)0x6e,  /* [5008] */
    (xdc_Char)0x63,  /* [5009] */
    (xdc_Char)0x65,  /* [5010] */
    (xdc_Char)0x3a,  /* [5011] */
    (xdc_Char)0x20,  /* [5012] */
    (xdc_Char)0x25,  /* [5013] */
    (xdc_Char)0x24,  /* [5014] */
    (xdc_Char)0x53,  /* [5015] */
    (xdc_Char)0x0,  /* [5016] */
    (xdc_Char)0x4c,  /* [5017] */
    (xdc_Char)0x57,  /* [5018] */
    (xdc_Char)0x5f,  /* [5019] */
    (xdc_Char)0x64,  /* [5020] */
    (xdc_Char)0x65,  /* [5021] */
    (xdc_Char)0x6c,  /* [5022] */
    (xdc_Char)0x61,  /* [5023] */
    (xdc_Char)0x79,  /* [5024] */
    (xdc_Char)0x65,  /* [5025] */
    (xdc_Char)0x64,  /* [5026] */
    (xdc_Char)0x3a,  /* [5027] */
    (xdc_Char)0x20,  /* [5028] */
    (xdc_Char)0x64,  /* [5029] */
    (xdc_Char)0x65,  /* [5030] */
    (xdc_Char)0x6c,  /* [5031] */
    (xdc_Char)0x61,  /* [5032] */
    (xdc_Char)0x79,  /* [5033] */
    (xdc_Char)0x3a,  /* [5034] */
    (xdc_Char)0x20,  /* [5035] */
    (xdc_Char)0x25,  /* [5036] */
    (xdc_Char)0x64,  /* [5037] */
    (xdc_Char)0x0,  /* [5038] */
    (xdc_Char)0x4c,  /* [5039] */
    (xdc_Char)0x4d,  /* [5040] */
    (xdc_Char)0x5f,  /* [5041] */
    (xdc_Char)0x74,  /* [5042] */
    (xdc_Char)0x69,  /* [5043] */
    (xdc_Char)0x63,  /* [5044] */
    (xdc_Char)0x6b,  /* [5045] */
    (xdc_Char)0x3a,  /* [5046] */
    (xdc_Char)0x20,  /* [5047] */
    (xdc_Char)0x74,  /* [5048] */
    (xdc_Char)0x69,  /* [5049] */
    (xdc_Char)0x63,  /* [5050] */
    (xdc_Char)0x6b,  /* [5051] */
    (xdc_Char)0x3a,  /* [5052] */
    (xdc_Char)0x20,  /* [5053] */
    (xdc_Char)0x25,  /* [5054] */
    (xdc_Char)0x64,  /* [5055] */
    (xdc_Char)0x0,  /* [5056] */
    (xdc_Char)0x4c,  /* [5057] */
    (xdc_Char)0x4d,  /* [5058] */
    (xdc_Char)0x5f,  /* [5059] */
    (xdc_Char)0x62,  /* [5060] */
    (xdc_Char)0x65,  /* [5061] */
    (xdc_Char)0x67,  /* [5062] */
    (xdc_Char)0x69,  /* [5063] */
    (xdc_Char)0x6e,  /* [5064] */
    (xdc_Char)0x3a,  /* [5065] */
    (xdc_Char)0x20,  /* [5066] */
    (xdc_Char)0x63,  /* [5067] */
    (xdc_Char)0x6c,  /* [5068] */
    (xdc_Char)0x6b,  /* [5069] */
    (xdc_Char)0x3a,  /* [5070] */
    (xdc_Char)0x20,  /* [5071] */
    (xdc_Char)0x30,  /* [5072] */
    (xdc_Char)0x78,  /* [5073] */
    (xdc_Char)0x25,  /* [5074] */
    (xdc_Char)0x78,  /* [5075] */
    (xdc_Char)0x2c,  /* [5076] */
    (xdc_Char)0x20,  /* [5077] */
    (xdc_Char)0x66,  /* [5078] */
    (xdc_Char)0x75,  /* [5079] */
    (xdc_Char)0x6e,  /* [5080] */
    (xdc_Char)0x63,  /* [5081] */
    (xdc_Char)0x3a,  /* [5082] */
    (xdc_Char)0x20,  /* [5083] */
    (xdc_Char)0x30,  /* [5084] */
    (xdc_Char)0x78,  /* [5085] */
    (xdc_Char)0x25,  /* [5086] */
    (xdc_Char)0x78,  /* [5087] */
    (xdc_Char)0x0,  /* [5088] */
    (xdc_Char)0x4c,  /* [5089] */
    (xdc_Char)0x4d,  /* [5090] */
    (xdc_Char)0x5f,  /* [5091] */
    (xdc_Char)0x70,  /* [5092] */
    (xdc_Char)0x6f,  /* [5093] */
    (xdc_Char)0x73,  /* [5094] */
    (xdc_Char)0x74,  /* [5095] */
    (xdc_Char)0x3a,  /* [5096] */
    (xdc_Char)0x20,  /* [5097] */
    (xdc_Char)0x65,  /* [5098] */
    (xdc_Char)0x76,  /* [5099] */
    (xdc_Char)0x65,  /* [5100] */
    (xdc_Char)0x6e,  /* [5101] */
    (xdc_Char)0x74,  /* [5102] */
    (xdc_Char)0x3a,  /* [5103] */
    (xdc_Char)0x20,  /* [5104] */
    (xdc_Char)0x30,  /* [5105] */
    (xdc_Char)0x78,  /* [5106] */
    (xdc_Char)0x25,  /* [5107] */
    (xdc_Char)0x78,  /* [5108] */
    (xdc_Char)0x2c,  /* [5109] */
    (xdc_Char)0x20,  /* [5110] */
    (xdc_Char)0x63,  /* [5111] */
    (xdc_Char)0x75,  /* [5112] */
    (xdc_Char)0x72,  /* [5113] */
    (xdc_Char)0x72,  /* [5114] */
    (xdc_Char)0x45,  /* [5115] */
    (xdc_Char)0x76,  /* [5116] */
    (xdc_Char)0x65,  /* [5117] */
    (xdc_Char)0x6e,  /* [5118] */
    (xdc_Char)0x74,  /* [5119] */
    (xdc_Char)0x73,  /* [5120] */
    (xdc_Char)0x3a,  /* [5121] */
    (xdc_Char)0x20,  /* [5122] */
    (xdc_Char)0x30,  /* [5123] */
    (xdc_Char)0x78,  /* [5124] */
    (xdc_Char)0x25,  /* [5125] */
    (xdc_Char)0x78,  /* [5126] */
    (xdc_Char)0x2c,  /* [5127] */
    (xdc_Char)0x20,  /* [5128] */
    (xdc_Char)0x65,  /* [5129] */
    (xdc_Char)0x76,  /* [5130] */
    (xdc_Char)0x65,  /* [5131] */
    (xdc_Char)0x6e,  /* [5132] */
    (xdc_Char)0x74,  /* [5133] */
    (xdc_Char)0x49,  /* [5134] */
    (xdc_Char)0x64,  /* [5135] */
    (xdc_Char)0x3a,  /* [5136] */
    (xdc_Char)0x20,  /* [5137] */
    (xdc_Char)0x30,  /* [5138] */
    (xdc_Char)0x78,  /* [5139] */
    (xdc_Char)0x25,  /* [5140] */
    (xdc_Char)0x78,  /* [5141] */
    (xdc_Char)0x0,  /* [5142] */
    (xdc_Char)0x4c,  /* [5143] */
    (xdc_Char)0x4d,  /* [5144] */
    (xdc_Char)0x5f,  /* [5145] */
    (xdc_Char)0x70,  /* [5146] */
    (xdc_Char)0x65,  /* [5147] */
    (xdc_Char)0x6e,  /* [5148] */
    (xdc_Char)0x64,  /* [5149] */
    (xdc_Char)0x3a,  /* [5150] */
    (xdc_Char)0x20,  /* [5151] */
    (xdc_Char)0x65,  /* [5152] */
    (xdc_Char)0x76,  /* [5153] */
    (xdc_Char)0x65,  /* [5154] */
    (xdc_Char)0x6e,  /* [5155] */
    (xdc_Char)0x74,  /* [5156] */
    (xdc_Char)0x3a,  /* [5157] */
    (xdc_Char)0x20,  /* [5158] */
    (xdc_Char)0x30,  /* [5159] */
    (xdc_Char)0x78,  /* [5160] */
    (xdc_Char)0x25,  /* [5161] */
    (xdc_Char)0x78,  /* [5162] */
    (xdc_Char)0x2c,  /* [5163] */
    (xdc_Char)0x20,  /* [5164] */
    (xdc_Char)0x63,  /* [5165] */
    (xdc_Char)0x75,  /* [5166] */
    (xdc_Char)0x72,  /* [5167] */
    (xdc_Char)0x72,  /* [5168] */
    (xdc_Char)0x45,  /* [5169] */
    (xdc_Char)0x76,  /* [5170] */
    (xdc_Char)0x65,  /* [5171] */
    (xdc_Char)0x6e,  /* [5172] */
    (xdc_Char)0x74,  /* [5173] */
    (xdc_Char)0x73,  /* [5174] */
    (xdc_Char)0x3a,  /* [5175] */
    (xdc_Char)0x20,  /* [5176] */
    (xdc_Char)0x30,  /* [5177] */
    (xdc_Char)0x78,  /* [5178] */
    (xdc_Char)0x25,  /* [5179] */
    (xdc_Char)0x78,  /* [5180] */
    (xdc_Char)0x2c,  /* [5181] */
    (xdc_Char)0x20,  /* [5182] */
    (xdc_Char)0x61,  /* [5183] */
    (xdc_Char)0x6e,  /* [5184] */
    (xdc_Char)0x64,  /* [5185] */
    (xdc_Char)0x4d,  /* [5186] */
    (xdc_Char)0x61,  /* [5187] */
    (xdc_Char)0x73,  /* [5188] */
    (xdc_Char)0x6b,  /* [5189] */
    (xdc_Char)0x3a,  /* [5190] */
    (xdc_Char)0x20,  /* [5191] */
    (xdc_Char)0x30,  /* [5192] */
    (xdc_Char)0x78,  /* [5193] */
    (xdc_Char)0x25,  /* [5194] */
    (xdc_Char)0x78,  /* [5195] */
    (xdc_Char)0x2c,  /* [5196] */
    (xdc_Char)0x20,  /* [5197] */
    (xdc_Char)0x6f,  /* [5198] */
    (xdc_Char)0x72,  /* [5199] */
    (xdc_Char)0x4d,  /* [5200] */
    (xdc_Char)0x61,  /* [5201] */
    (xdc_Char)0x73,  /* [5202] */
    (xdc_Char)0x6b,  /* [5203] */
    (xdc_Char)0x3a,  /* [5204] */
    (xdc_Char)0x20,  /* [5205] */
    (xdc_Char)0x30,  /* [5206] */
    (xdc_Char)0x78,  /* [5207] */
    (xdc_Char)0x25,  /* [5208] */
    (xdc_Char)0x78,  /* [5209] */
    (xdc_Char)0x2c,  /* [5210] */
    (xdc_Char)0x20,  /* [5211] */
    (xdc_Char)0x74,  /* [5212] */
    (xdc_Char)0x69,  /* [5213] */
    (xdc_Char)0x6d,  /* [5214] */
    (xdc_Char)0x65,  /* [5215] */
    (xdc_Char)0x6f,  /* [5216] */
    (xdc_Char)0x75,  /* [5217] */
    (xdc_Char)0x74,  /* [5218] */
    (xdc_Char)0x3a,  /* [5219] */
    (xdc_Char)0x20,  /* [5220] */
    (xdc_Char)0x25,  /* [5221] */
    (xdc_Char)0x64,  /* [5222] */
    (xdc_Char)0x0,  /* [5223] */
    (xdc_Char)0x4c,  /* [5224] */
    (xdc_Char)0x4d,  /* [5225] */
    (xdc_Char)0x5f,  /* [5226] */
    (xdc_Char)0x70,  /* [5227] */
    (xdc_Char)0x6f,  /* [5228] */
    (xdc_Char)0x73,  /* [5229] */
    (xdc_Char)0x74,  /* [5230] */
    (xdc_Char)0x3a,  /* [5231] */
    (xdc_Char)0x20,  /* [5232] */
    (xdc_Char)0x73,  /* [5233] */
    (xdc_Char)0x65,  /* [5234] */
    (xdc_Char)0x6d,  /* [5235] */
    (xdc_Char)0x3a,  /* [5236] */
    (xdc_Char)0x20,  /* [5237] */
    (xdc_Char)0x30,  /* [5238] */
    (xdc_Char)0x78,  /* [5239] */
    (xdc_Char)0x25,  /* [5240] */
    (xdc_Char)0x78,  /* [5241] */
    (xdc_Char)0x2c,  /* [5242] */
    (xdc_Char)0x20,  /* [5243] */
    (xdc_Char)0x63,  /* [5244] */
    (xdc_Char)0x6f,  /* [5245] */
    (xdc_Char)0x75,  /* [5246] */
    (xdc_Char)0x6e,  /* [5247] */
    (xdc_Char)0x74,  /* [5248] */
    (xdc_Char)0x3a,  /* [5249] */
    (xdc_Char)0x20,  /* [5250] */
    (xdc_Char)0x25,  /* [5251] */
    (xdc_Char)0x64,  /* [5252] */
    (xdc_Char)0x0,  /* [5253] */
    (xdc_Char)0x4c,  /* [5254] */
    (xdc_Char)0x4d,  /* [5255] */
    (xdc_Char)0x5f,  /* [5256] */
    (xdc_Char)0x70,  /* [5257] */
    (xdc_Char)0x65,  /* [5258] */
    (xdc_Char)0x6e,  /* [5259] */
    (xdc_Char)0x64,  /* [5260] */
    (xdc_Char)0x3a,  /* [5261] */
    (xdc_Char)0x20,  /* [5262] */
    (xdc_Char)0x73,  /* [5263] */
    (xdc_Char)0x65,  /* [5264] */
    (xdc_Char)0x6d,  /* [5265] */
    (xdc_Char)0x3a,  /* [5266] */
    (xdc_Char)0x20,  /* [5267] */
    (xdc_Char)0x30,  /* [5268] */
    (xdc_Char)0x78,  /* [5269] */
    (xdc_Char)0x25,  /* [5270] */
    (xdc_Char)0x78,  /* [5271] */
    (xdc_Char)0x2c,  /* [5272] */
    (xdc_Char)0x20,  /* [5273] */
    (xdc_Char)0x63,  /* [5274] */
    (xdc_Char)0x6f,  /* [5275] */
    (xdc_Char)0x75,  /* [5276] */
    (xdc_Char)0x6e,  /* [5277] */
    (xdc_Char)0x74,  /* [5278] */
    (xdc_Char)0x3a,  /* [5279] */
    (xdc_Char)0x20,  /* [5280] */
    (xdc_Char)0x25,  /* [5281] */
    (xdc_Char)0x64,  /* [5282] */
    (xdc_Char)0x2c,  /* [5283] */
    (xdc_Char)0x20,  /* [5284] */
    (xdc_Char)0x74,  /* [5285] */
    (xdc_Char)0x69,  /* [5286] */
    (xdc_Char)0x6d,  /* [5287] */
    (xdc_Char)0x65,  /* [5288] */
    (xdc_Char)0x6f,  /* [5289] */
    (xdc_Char)0x75,  /* [5290] */
    (xdc_Char)0x74,  /* [5291] */
    (xdc_Char)0x3a,  /* [5292] */
    (xdc_Char)0x20,  /* [5293] */
    (xdc_Char)0x25,  /* [5294] */
    (xdc_Char)0x64,  /* [5295] */
    (xdc_Char)0x0,  /* [5296] */
    (xdc_Char)0x4c,  /* [5297] */
    (xdc_Char)0x4d,  /* [5298] */
    (xdc_Char)0x5f,  /* [5299] */
    (xdc_Char)0x62,  /* [5300] */
    (xdc_Char)0x65,  /* [5301] */
    (xdc_Char)0x67,  /* [5302] */
    (xdc_Char)0x69,  /* [5303] */
    (xdc_Char)0x6e,  /* [5304] */
    (xdc_Char)0x3a,  /* [5305] */
    (xdc_Char)0x20,  /* [5306] */
    (xdc_Char)0x73,  /* [5307] */
    (xdc_Char)0x77,  /* [5308] */
    (xdc_Char)0x69,  /* [5309] */
    (xdc_Char)0x3a,  /* [5310] */
    (xdc_Char)0x20,  /* [5311] */
    (xdc_Char)0x30,  /* [5312] */
    (xdc_Char)0x78,  /* [5313] */
    (xdc_Char)0x25,  /* [5314] */
    (xdc_Char)0x78,  /* [5315] */
    (xdc_Char)0x2c,  /* [5316] */
    (xdc_Char)0x20,  /* [5317] */
    (xdc_Char)0x66,  /* [5318] */
    (xdc_Char)0x75,  /* [5319] */
    (xdc_Char)0x6e,  /* [5320] */
    (xdc_Char)0x63,  /* [5321] */
    (xdc_Char)0x3a,  /* [5322] */
    (xdc_Char)0x20,  /* [5323] */
    (xdc_Char)0x30,  /* [5324] */
    (xdc_Char)0x78,  /* [5325] */
    (xdc_Char)0x25,  /* [5326] */
    (xdc_Char)0x78,  /* [5327] */
    (xdc_Char)0x2c,  /* [5328] */
    (xdc_Char)0x20,  /* [5329] */
    (xdc_Char)0x70,  /* [5330] */
    (xdc_Char)0x72,  /* [5331] */
    (xdc_Char)0x65,  /* [5332] */
    (xdc_Char)0x54,  /* [5333] */
    (xdc_Char)0x68,  /* [5334] */
    (xdc_Char)0x72,  /* [5335] */
    (xdc_Char)0x65,  /* [5336] */
    (xdc_Char)0x61,  /* [5337] */
    (xdc_Char)0x64,  /* [5338] */
    (xdc_Char)0x3a,  /* [5339] */
    (xdc_Char)0x20,  /* [5340] */
    (xdc_Char)0x25,  /* [5341] */
    (xdc_Char)0x64,  /* [5342] */
    (xdc_Char)0x0,  /* [5343] */
    (xdc_Char)0x4c,  /* [5344] */
    (xdc_Char)0x44,  /* [5345] */
    (xdc_Char)0x5f,  /* [5346] */
    (xdc_Char)0x65,  /* [5347] */
    (xdc_Char)0x6e,  /* [5348] */
    (xdc_Char)0x64,  /* [5349] */
    (xdc_Char)0x3a,  /* [5350] */
    (xdc_Char)0x20,  /* [5351] */
    (xdc_Char)0x73,  /* [5352] */
    (xdc_Char)0x77,  /* [5353] */
    (xdc_Char)0x69,  /* [5354] */
    (xdc_Char)0x3a,  /* [5355] */
    (xdc_Char)0x20,  /* [5356] */
    (xdc_Char)0x30,  /* [5357] */
    (xdc_Char)0x78,  /* [5358] */
    (xdc_Char)0x25,  /* [5359] */
    (xdc_Char)0x78,  /* [5360] */
    (xdc_Char)0x0,  /* [5361] */
    (xdc_Char)0x4c,  /* [5362] */
    (xdc_Char)0x4d,  /* [5363] */
    (xdc_Char)0x5f,  /* [5364] */
    (xdc_Char)0x70,  /* [5365] */
    (xdc_Char)0x6f,  /* [5366] */
    (xdc_Char)0x73,  /* [5367] */
    (xdc_Char)0x74,  /* [5368] */
    (xdc_Char)0x3a,  /* [5369] */
    (xdc_Char)0x20,  /* [5370] */
    (xdc_Char)0x73,  /* [5371] */
    (xdc_Char)0x77,  /* [5372] */
    (xdc_Char)0x69,  /* [5373] */
    (xdc_Char)0x3a,  /* [5374] */
    (xdc_Char)0x20,  /* [5375] */
    (xdc_Char)0x30,  /* [5376] */
    (xdc_Char)0x78,  /* [5377] */
    (xdc_Char)0x25,  /* [5378] */
    (xdc_Char)0x78,  /* [5379] */
    (xdc_Char)0x2c,  /* [5380] */
    (xdc_Char)0x20,  /* [5381] */
    (xdc_Char)0x66,  /* [5382] */
    (xdc_Char)0x75,  /* [5383] */
    (xdc_Char)0x6e,  /* [5384] */
    (xdc_Char)0x63,  /* [5385] */
    (xdc_Char)0x3a,  /* [5386] */
    (xdc_Char)0x20,  /* [5387] */
    (xdc_Char)0x30,  /* [5388] */
    (xdc_Char)0x78,  /* [5389] */
    (xdc_Char)0x25,  /* [5390] */
    (xdc_Char)0x78,  /* [5391] */
    (xdc_Char)0x2c,  /* [5392] */
    (xdc_Char)0x20,  /* [5393] */
    (xdc_Char)0x70,  /* [5394] */
    (xdc_Char)0x72,  /* [5395] */
    (xdc_Char)0x69,  /* [5396] */
    (xdc_Char)0x3a,  /* [5397] */
    (xdc_Char)0x20,  /* [5398] */
    (xdc_Char)0x25,  /* [5399] */
    (xdc_Char)0x64,  /* [5400] */
    (xdc_Char)0x0,  /* [5401] */
    (xdc_Char)0x4c,  /* [5402] */
    (xdc_Char)0x4d,  /* [5403] */
    (xdc_Char)0x5f,  /* [5404] */
    (xdc_Char)0x73,  /* [5405] */
    (xdc_Char)0x77,  /* [5406] */
    (xdc_Char)0x69,  /* [5407] */
    (xdc_Char)0x74,  /* [5408] */
    (xdc_Char)0x63,  /* [5409] */
    (xdc_Char)0x68,  /* [5410] */
    (xdc_Char)0x3a,  /* [5411] */
    (xdc_Char)0x20,  /* [5412] */
    (xdc_Char)0x6f,  /* [5413] */
    (xdc_Char)0x6c,  /* [5414] */
    (xdc_Char)0x64,  /* [5415] */
    (xdc_Char)0x74,  /* [5416] */
    (xdc_Char)0x73,  /* [5417] */
    (xdc_Char)0x6b,  /* [5418] */
    (xdc_Char)0x3a,  /* [5419] */
    (xdc_Char)0x20,  /* [5420] */
    (xdc_Char)0x30,  /* [5421] */
    (xdc_Char)0x78,  /* [5422] */
    (xdc_Char)0x25,  /* [5423] */
    (xdc_Char)0x78,  /* [5424] */
    (xdc_Char)0x2c,  /* [5425] */
    (xdc_Char)0x20,  /* [5426] */
    (xdc_Char)0x6f,  /* [5427] */
    (xdc_Char)0x6c,  /* [5428] */
    (xdc_Char)0x64,  /* [5429] */
    (xdc_Char)0x66,  /* [5430] */
    (xdc_Char)0x75,  /* [5431] */
    (xdc_Char)0x6e,  /* [5432] */
    (xdc_Char)0x63,  /* [5433] */
    (xdc_Char)0x3a,  /* [5434] */
    (xdc_Char)0x20,  /* [5435] */
    (xdc_Char)0x30,  /* [5436] */
    (xdc_Char)0x78,  /* [5437] */
    (xdc_Char)0x25,  /* [5438] */
    (xdc_Char)0x78,  /* [5439] */
    (xdc_Char)0x2c,  /* [5440] */
    (xdc_Char)0x20,  /* [5441] */
    (xdc_Char)0x6e,  /* [5442] */
    (xdc_Char)0x65,  /* [5443] */
    (xdc_Char)0x77,  /* [5444] */
    (xdc_Char)0x74,  /* [5445] */
    (xdc_Char)0x73,  /* [5446] */
    (xdc_Char)0x6b,  /* [5447] */
    (xdc_Char)0x3a,  /* [5448] */
    (xdc_Char)0x20,  /* [5449] */
    (xdc_Char)0x30,  /* [5450] */
    (xdc_Char)0x78,  /* [5451] */
    (xdc_Char)0x25,  /* [5452] */
    (xdc_Char)0x78,  /* [5453] */
    (xdc_Char)0x2c,  /* [5454] */
    (xdc_Char)0x20,  /* [5455] */
    (xdc_Char)0x6e,  /* [5456] */
    (xdc_Char)0x65,  /* [5457] */
    (xdc_Char)0x77,  /* [5458] */
    (xdc_Char)0x66,  /* [5459] */
    (xdc_Char)0x75,  /* [5460] */
    (xdc_Char)0x6e,  /* [5461] */
    (xdc_Char)0x63,  /* [5462] */
    (xdc_Char)0x3a,  /* [5463] */
    (xdc_Char)0x20,  /* [5464] */
    (xdc_Char)0x30,  /* [5465] */
    (xdc_Char)0x78,  /* [5466] */
    (xdc_Char)0x25,  /* [5467] */
    (xdc_Char)0x78,  /* [5468] */
    (xdc_Char)0x0,  /* [5469] */
    (xdc_Char)0x4c,  /* [5470] */
    (xdc_Char)0x4d,  /* [5471] */
    (xdc_Char)0x5f,  /* [5472] */
    (xdc_Char)0x73,  /* [5473] */
    (xdc_Char)0x6c,  /* [5474] */
    (xdc_Char)0x65,  /* [5475] */
    (xdc_Char)0x65,  /* [5476] */
    (xdc_Char)0x70,  /* [5477] */
    (xdc_Char)0x3a,  /* [5478] */
    (xdc_Char)0x20,  /* [5479] */
    (xdc_Char)0x74,  /* [5480] */
    (xdc_Char)0x73,  /* [5481] */
    (xdc_Char)0x6b,  /* [5482] */
    (xdc_Char)0x3a,  /* [5483] */
    (xdc_Char)0x20,  /* [5484] */
    (xdc_Char)0x30,  /* [5485] */
    (xdc_Char)0x78,  /* [5486] */
    (xdc_Char)0x25,  /* [5487] */
    (xdc_Char)0x78,  /* [5488] */
    (xdc_Char)0x2c,  /* [5489] */
    (xdc_Char)0x20,  /* [5490] */
    (xdc_Char)0x66,  /* [5491] */
    (xdc_Char)0x75,  /* [5492] */
    (xdc_Char)0x6e,  /* [5493] */
    (xdc_Char)0x63,  /* [5494] */
    (xdc_Char)0x3a,  /* [5495] */
    (xdc_Char)0x20,  /* [5496] */
    (xdc_Char)0x30,  /* [5497] */
    (xdc_Char)0x78,  /* [5498] */
    (xdc_Char)0x25,  /* [5499] */
    (xdc_Char)0x78,  /* [5500] */
    (xdc_Char)0x2c,  /* [5501] */
    (xdc_Char)0x20,  /* [5502] */
    (xdc_Char)0x74,  /* [5503] */
    (xdc_Char)0x69,  /* [5504] */
    (xdc_Char)0x6d,  /* [5505] */
    (xdc_Char)0x65,  /* [5506] */
    (xdc_Char)0x6f,  /* [5507] */
    (xdc_Char)0x75,  /* [5508] */
    (xdc_Char)0x74,  /* [5509] */
    (xdc_Char)0x3a,  /* [5510] */
    (xdc_Char)0x20,  /* [5511] */
    (xdc_Char)0x25,  /* [5512] */
    (xdc_Char)0x64,  /* [5513] */
    (xdc_Char)0x0,  /* [5514] */
    (xdc_Char)0x4c,  /* [5515] */
    (xdc_Char)0x44,  /* [5516] */
    (xdc_Char)0x5f,  /* [5517] */
    (xdc_Char)0x72,  /* [5518] */
    (xdc_Char)0x65,  /* [5519] */
    (xdc_Char)0x61,  /* [5520] */
    (xdc_Char)0x64,  /* [5521] */
    (xdc_Char)0x79,  /* [5522] */
    (xdc_Char)0x3a,  /* [5523] */
    (xdc_Char)0x20,  /* [5524] */
    (xdc_Char)0x74,  /* [5525] */
    (xdc_Char)0x73,  /* [5526] */
    (xdc_Char)0x6b,  /* [5527] */
    (xdc_Char)0x3a,  /* [5528] */
    (xdc_Char)0x20,  /* [5529] */
    (xdc_Char)0x30,  /* [5530] */
    (xdc_Char)0x78,  /* [5531] */
    (xdc_Char)0x25,  /* [5532] */
    (xdc_Char)0x78,  /* [5533] */
    (xdc_Char)0x2c,  /* [5534] */
    (xdc_Char)0x20,  /* [5535] */
    (xdc_Char)0x66,  /* [5536] */
    (xdc_Char)0x75,  /* [5537] */
    (xdc_Char)0x6e,  /* [5538] */
    (xdc_Char)0x63,  /* [5539] */
    (xdc_Char)0x3a,  /* [5540] */
    (xdc_Char)0x20,  /* [5541] */
    (xdc_Char)0x30,  /* [5542] */
    (xdc_Char)0x78,  /* [5543] */
    (xdc_Char)0x25,  /* [5544] */
    (xdc_Char)0x78,  /* [5545] */
    (xdc_Char)0x2c,  /* [5546] */
    (xdc_Char)0x20,  /* [5547] */
    (xdc_Char)0x70,  /* [5548] */
    (xdc_Char)0x72,  /* [5549] */
    (xdc_Char)0x69,  /* [5550] */
    (xdc_Char)0x3a,  /* [5551] */
    (xdc_Char)0x20,  /* [5552] */
    (xdc_Char)0x25,  /* [5553] */
    (xdc_Char)0x64,  /* [5554] */
    (xdc_Char)0x0,  /* [5555] */
    (xdc_Char)0x4c,  /* [5556] */
    (xdc_Char)0x44,  /* [5557] */
    (xdc_Char)0x5f,  /* [5558] */
    (xdc_Char)0x62,  /* [5559] */
    (xdc_Char)0x6c,  /* [5560] */
    (xdc_Char)0x6f,  /* [5561] */
    (xdc_Char)0x63,  /* [5562] */
    (xdc_Char)0x6b,  /* [5563] */
    (xdc_Char)0x3a,  /* [5564] */
    (xdc_Char)0x20,  /* [5565] */
    (xdc_Char)0x74,  /* [5566] */
    (xdc_Char)0x73,  /* [5567] */
    (xdc_Char)0x6b,  /* [5568] */
    (xdc_Char)0x3a,  /* [5569] */
    (xdc_Char)0x20,  /* [5570] */
    (xdc_Char)0x30,  /* [5571] */
    (xdc_Char)0x78,  /* [5572] */
    (xdc_Char)0x25,  /* [5573] */
    (xdc_Char)0x78,  /* [5574] */
    (xdc_Char)0x2c,  /* [5575] */
    (xdc_Char)0x20,  /* [5576] */
    (xdc_Char)0x66,  /* [5577] */
    (xdc_Char)0x75,  /* [5578] */
    (xdc_Char)0x6e,  /* [5579] */
    (xdc_Char)0x63,  /* [5580] */
    (xdc_Char)0x3a,  /* [5581] */
    (xdc_Char)0x20,  /* [5582] */
    (xdc_Char)0x30,  /* [5583] */
    (xdc_Char)0x78,  /* [5584] */
    (xdc_Char)0x25,  /* [5585] */
    (xdc_Char)0x78,  /* [5586] */
    (xdc_Char)0x0,  /* [5587] */
    (xdc_Char)0x4c,  /* [5588] */
    (xdc_Char)0x4d,  /* [5589] */
    (xdc_Char)0x5f,  /* [5590] */
    (xdc_Char)0x79,  /* [5591] */
    (xdc_Char)0x69,  /* [5592] */
    (xdc_Char)0x65,  /* [5593] */
    (xdc_Char)0x6c,  /* [5594] */
    (xdc_Char)0x64,  /* [5595] */
    (xdc_Char)0x3a,  /* [5596] */
    (xdc_Char)0x20,  /* [5597] */
    (xdc_Char)0x74,  /* [5598] */
    (xdc_Char)0x73,  /* [5599] */
    (xdc_Char)0x6b,  /* [5600] */
    (xdc_Char)0x3a,  /* [5601] */
    (xdc_Char)0x20,  /* [5602] */
    (xdc_Char)0x30,  /* [5603] */
    (xdc_Char)0x78,  /* [5604] */
    (xdc_Char)0x25,  /* [5605] */
    (xdc_Char)0x78,  /* [5606] */
    (xdc_Char)0x2c,  /* [5607] */
    (xdc_Char)0x20,  /* [5608] */
    (xdc_Char)0x66,  /* [5609] */
    (xdc_Char)0x75,  /* [5610] */
    (xdc_Char)0x6e,  /* [5611] */
    (xdc_Char)0x63,  /* [5612] */
    (xdc_Char)0x3a,  /* [5613] */
    (xdc_Char)0x20,  /* [5614] */
    (xdc_Char)0x30,  /* [5615] */
    (xdc_Char)0x78,  /* [5616] */
    (xdc_Char)0x25,  /* [5617] */
    (xdc_Char)0x78,  /* [5618] */
    (xdc_Char)0x2c,  /* [5619] */
    (xdc_Char)0x20,  /* [5620] */
    (xdc_Char)0x63,  /* [5621] */
    (xdc_Char)0x75,  /* [5622] */
    (xdc_Char)0x72,  /* [5623] */
    (xdc_Char)0x72,  /* [5624] */
    (xdc_Char)0x54,  /* [5625] */
    (xdc_Char)0x68,  /* [5626] */
    (xdc_Char)0x72,  /* [5627] */
    (xdc_Char)0x65,  /* [5628] */
    (xdc_Char)0x61,  /* [5629] */
    (xdc_Char)0x64,  /* [5630] */
    (xdc_Char)0x3a,  /* [5631] */
    (xdc_Char)0x20,  /* [5632] */
    (xdc_Char)0x25,  /* [5633] */
    (xdc_Char)0x64,  /* [5634] */
    (xdc_Char)0x0,  /* [5635] */
    (xdc_Char)0x4c,  /* [5636] */
    (xdc_Char)0x4d,  /* [5637] */
    (xdc_Char)0x5f,  /* [5638] */
    (xdc_Char)0x73,  /* [5639] */
    (xdc_Char)0x65,  /* [5640] */
    (xdc_Char)0x74,  /* [5641] */
    (xdc_Char)0x50,  /* [5642] */
    (xdc_Char)0x72,  /* [5643] */
    (xdc_Char)0x69,  /* [5644] */
    (xdc_Char)0x3a,  /* [5645] */
    (xdc_Char)0x20,  /* [5646] */
    (xdc_Char)0x74,  /* [5647] */
    (xdc_Char)0x73,  /* [5648] */
    (xdc_Char)0x6b,  /* [5649] */
    (xdc_Char)0x3a,  /* [5650] */
    (xdc_Char)0x20,  /* [5651] */
    (xdc_Char)0x30,  /* [5652] */
    (xdc_Char)0x78,  /* [5653] */
    (xdc_Char)0x25,  /* [5654] */
    (xdc_Char)0x78,  /* [5655] */
    (xdc_Char)0x2c,  /* [5656] */
    (xdc_Char)0x20,  /* [5657] */
    (xdc_Char)0x66,  /* [5658] */
    (xdc_Char)0x75,  /* [5659] */
    (xdc_Char)0x6e,  /* [5660] */
    (xdc_Char)0x63,  /* [5661] */
    (xdc_Char)0x3a,  /* [5662] */
    (xdc_Char)0x20,  /* [5663] */
    (xdc_Char)0x30,  /* [5664] */
    (xdc_Char)0x78,  /* [5665] */
    (xdc_Char)0x25,  /* [5666] */
    (xdc_Char)0x78,  /* [5667] */
    (xdc_Char)0x2c,  /* [5668] */
    (xdc_Char)0x20,  /* [5669] */
    (xdc_Char)0x6f,  /* [5670] */
    (xdc_Char)0x6c,  /* [5671] */
    (xdc_Char)0x64,  /* [5672] */
    (xdc_Char)0x50,  /* [5673] */
    (xdc_Char)0x72,  /* [5674] */
    (xdc_Char)0x69,  /* [5675] */
    (xdc_Char)0x3a,  /* [5676] */
    (xdc_Char)0x20,  /* [5677] */
    (xdc_Char)0x25,  /* [5678] */
    (xdc_Char)0x64,  /* [5679] */
    (xdc_Char)0x2c,  /* [5680] */
    (xdc_Char)0x20,  /* [5681] */
    (xdc_Char)0x6e,  /* [5682] */
    (xdc_Char)0x65,  /* [5683] */
    (xdc_Char)0x77,  /* [5684] */
    (xdc_Char)0x50,  /* [5685] */
    (xdc_Char)0x72,  /* [5686] */
    (xdc_Char)0x69,  /* [5687] */
    (xdc_Char)0x20,  /* [5688] */
    (xdc_Char)0x25,  /* [5689] */
    (xdc_Char)0x64,  /* [5690] */
    (xdc_Char)0x0,  /* [5691] */
    (xdc_Char)0x4c,  /* [5692] */
    (xdc_Char)0x44,  /* [5693] */
    (xdc_Char)0x5f,  /* [5694] */
    (xdc_Char)0x65,  /* [5695] */
    (xdc_Char)0x78,  /* [5696] */
    (xdc_Char)0x69,  /* [5697] */
    (xdc_Char)0x74,  /* [5698] */
    (xdc_Char)0x3a,  /* [5699] */
    (xdc_Char)0x20,  /* [5700] */
    (xdc_Char)0x74,  /* [5701] */
    (xdc_Char)0x73,  /* [5702] */
    (xdc_Char)0x6b,  /* [5703] */
    (xdc_Char)0x3a,  /* [5704] */
    (xdc_Char)0x20,  /* [5705] */
    (xdc_Char)0x30,  /* [5706] */
    (xdc_Char)0x78,  /* [5707] */
    (xdc_Char)0x25,  /* [5708] */
    (xdc_Char)0x78,  /* [5709] */
    (xdc_Char)0x2c,  /* [5710] */
    (xdc_Char)0x20,  /* [5711] */
    (xdc_Char)0x66,  /* [5712] */
    (xdc_Char)0x75,  /* [5713] */
    (xdc_Char)0x6e,  /* [5714] */
    (xdc_Char)0x63,  /* [5715] */
    (xdc_Char)0x3a,  /* [5716] */
    (xdc_Char)0x20,  /* [5717] */
    (xdc_Char)0x30,  /* [5718] */
    (xdc_Char)0x78,  /* [5719] */
    (xdc_Char)0x25,  /* [5720] */
    (xdc_Char)0x78,  /* [5721] */
    (xdc_Char)0x0,  /* [5722] */
    (xdc_Char)0x4c,  /* [5723] */
    (xdc_Char)0x4d,  /* [5724] */
    (xdc_Char)0x5f,  /* [5725] */
    (xdc_Char)0x73,  /* [5726] */
    (xdc_Char)0x65,  /* [5727] */
    (xdc_Char)0x74,  /* [5728] */
    (xdc_Char)0x41,  /* [5729] */
    (xdc_Char)0x66,  /* [5730] */
    (xdc_Char)0x66,  /* [5731] */
    (xdc_Char)0x69,  /* [5732] */
    (xdc_Char)0x6e,  /* [5733] */
    (xdc_Char)0x69,  /* [5734] */
    (xdc_Char)0x74,  /* [5735] */
    (xdc_Char)0x79,  /* [5736] */
    (xdc_Char)0x3a,  /* [5737] */
    (xdc_Char)0x20,  /* [5738] */
    (xdc_Char)0x74,  /* [5739] */
    (xdc_Char)0x73,  /* [5740] */
    (xdc_Char)0x6b,  /* [5741] */
    (xdc_Char)0x3a,  /* [5742] */
    (xdc_Char)0x20,  /* [5743] */
    (xdc_Char)0x30,  /* [5744] */
    (xdc_Char)0x78,  /* [5745] */
    (xdc_Char)0x25,  /* [5746] */
    (xdc_Char)0x78,  /* [5747] */
    (xdc_Char)0x2c,  /* [5748] */
    (xdc_Char)0x20,  /* [5749] */
    (xdc_Char)0x66,  /* [5750] */
    (xdc_Char)0x75,  /* [5751] */
    (xdc_Char)0x6e,  /* [5752] */
    (xdc_Char)0x63,  /* [5753] */
    (xdc_Char)0x3a,  /* [5754] */
    (xdc_Char)0x20,  /* [5755] */
    (xdc_Char)0x30,  /* [5756] */
    (xdc_Char)0x78,  /* [5757] */
    (xdc_Char)0x25,  /* [5758] */
    (xdc_Char)0x78,  /* [5759] */
    (xdc_Char)0x2c,  /* [5760] */
    (xdc_Char)0x20,  /* [5761] */
    (xdc_Char)0x6f,  /* [5762] */
    (xdc_Char)0x6c,  /* [5763] */
    (xdc_Char)0x64,  /* [5764] */
    (xdc_Char)0x43,  /* [5765] */
    (xdc_Char)0x6f,  /* [5766] */
    (xdc_Char)0x72,  /* [5767] */
    (xdc_Char)0x65,  /* [5768] */
    (xdc_Char)0x3a,  /* [5769] */
    (xdc_Char)0x20,  /* [5770] */
    (xdc_Char)0x25,  /* [5771] */
    (xdc_Char)0x64,  /* [5772] */
    (xdc_Char)0x2c,  /* [5773] */
    (xdc_Char)0x20,  /* [5774] */
    (xdc_Char)0x6f,  /* [5775] */
    (xdc_Char)0x6c,  /* [5776] */
    (xdc_Char)0x64,  /* [5777] */
    (xdc_Char)0x41,  /* [5778] */
    (xdc_Char)0x66,  /* [5779] */
    (xdc_Char)0x66,  /* [5780] */
    (xdc_Char)0x69,  /* [5781] */
    (xdc_Char)0x6e,  /* [5782] */
    (xdc_Char)0x69,  /* [5783] */
    (xdc_Char)0x74,  /* [5784] */
    (xdc_Char)0x79,  /* [5785] */
    (xdc_Char)0x20,  /* [5786] */
    (xdc_Char)0x25,  /* [5787] */
    (xdc_Char)0x64,  /* [5788] */
    (xdc_Char)0x2c,  /* [5789] */
    (xdc_Char)0x20,  /* [5790] */
    (xdc_Char)0x6e,  /* [5791] */
    (xdc_Char)0x65,  /* [5792] */
    (xdc_Char)0x77,  /* [5793] */
    (xdc_Char)0x41,  /* [5794] */
    (xdc_Char)0x66,  /* [5795] */
    (xdc_Char)0x66,  /* [5796] */
    (xdc_Char)0x69,  /* [5797] */
    (xdc_Char)0x6e,  /* [5798] */
    (xdc_Char)0x69,  /* [5799] */
    (xdc_Char)0x74,  /* [5800] */
    (xdc_Char)0x79,  /* [5801] */
    (xdc_Char)0x20,  /* [5802] */
    (xdc_Char)0x25,  /* [5803] */
    (xdc_Char)0x64,  /* [5804] */
    (xdc_Char)0x0,  /* [5805] */
    (xdc_Char)0x4c,  /* [5806] */
    (xdc_Char)0x44,  /* [5807] */
    (xdc_Char)0x5f,  /* [5808] */
    (xdc_Char)0x73,  /* [5809] */
    (xdc_Char)0x63,  /* [5810] */
    (xdc_Char)0x68,  /* [5811] */
    (xdc_Char)0x65,  /* [5812] */
    (xdc_Char)0x64,  /* [5813] */
    (xdc_Char)0x75,  /* [5814] */
    (xdc_Char)0x6c,  /* [5815] */
    (xdc_Char)0x65,  /* [5816] */
    (xdc_Char)0x3a,  /* [5817] */
    (xdc_Char)0x20,  /* [5818] */
    (xdc_Char)0x63,  /* [5819] */
    (xdc_Char)0x6f,  /* [5820] */
    (xdc_Char)0x72,  /* [5821] */
    (xdc_Char)0x65,  /* [5822] */
    (xdc_Char)0x49,  /* [5823] */
    (xdc_Char)0x64,  /* [5824] */
    (xdc_Char)0x3a,  /* [5825] */
    (xdc_Char)0x20,  /* [5826] */
    (xdc_Char)0x25,  /* [5827] */
    (xdc_Char)0x64,  /* [5828] */
    (xdc_Char)0x2c,  /* [5829] */
    (xdc_Char)0x20,  /* [5830] */
    (xdc_Char)0x77,  /* [5831] */
    (xdc_Char)0x6f,  /* [5832] */
    (xdc_Char)0x72,  /* [5833] */
    (xdc_Char)0x6b,  /* [5834] */
    (xdc_Char)0x46,  /* [5835] */
    (xdc_Char)0x6c,  /* [5836] */
    (xdc_Char)0x61,  /* [5837] */
    (xdc_Char)0x67,  /* [5838] */
    (xdc_Char)0x3a,  /* [5839] */
    (xdc_Char)0x20,  /* [5840] */
    (xdc_Char)0x25,  /* [5841] */
    (xdc_Char)0x64,  /* [5842] */
    (xdc_Char)0x2c,  /* [5843] */
    (xdc_Char)0x20,  /* [5844] */
    (xdc_Char)0x63,  /* [5845] */
    (xdc_Char)0x75,  /* [5846] */
    (xdc_Char)0x72,  /* [5847] */
    (xdc_Char)0x53,  /* [5848] */
    (xdc_Char)0x65,  /* [5849] */
    (xdc_Char)0x74,  /* [5850] */
    (xdc_Char)0x4c,  /* [5851] */
    (xdc_Char)0x6f,  /* [5852] */
    (xdc_Char)0x63,  /* [5853] */
    (xdc_Char)0x61,  /* [5854] */
    (xdc_Char)0x6c,  /* [5855] */
    (xdc_Char)0x3a,  /* [5856] */
    (xdc_Char)0x20,  /* [5857] */
    (xdc_Char)0x25,  /* [5858] */
    (xdc_Char)0x64,  /* [5859] */
    (xdc_Char)0x2c,  /* [5860] */
    (xdc_Char)0x20,  /* [5861] */
    (xdc_Char)0x63,  /* [5862] */
    (xdc_Char)0x75,  /* [5863] */
    (xdc_Char)0x72,  /* [5864] */
    (xdc_Char)0x53,  /* [5865] */
    (xdc_Char)0x65,  /* [5866] */
    (xdc_Char)0x74,  /* [5867] */
    (xdc_Char)0x58,  /* [5868] */
    (xdc_Char)0x3a,  /* [5869] */
    (xdc_Char)0x20,  /* [5870] */
    (xdc_Char)0x25,  /* [5871] */
    (xdc_Char)0x64,  /* [5872] */
    (xdc_Char)0x2c,  /* [5873] */
    (xdc_Char)0x20,  /* [5874] */
    (xdc_Char)0x63,  /* [5875] */
    (xdc_Char)0x75,  /* [5876] */
    (xdc_Char)0x72,  /* [5877] */
    (xdc_Char)0x4d,  /* [5878] */
    (xdc_Char)0x61,  /* [5879] */
    (xdc_Char)0x73,  /* [5880] */
    (xdc_Char)0x6b,  /* [5881] */
    (xdc_Char)0x4c,  /* [5882] */
    (xdc_Char)0x6f,  /* [5883] */
    (xdc_Char)0x63,  /* [5884] */
    (xdc_Char)0x61,  /* [5885] */
    (xdc_Char)0x6c,  /* [5886] */
    (xdc_Char)0x3a,  /* [5887] */
    (xdc_Char)0x20,  /* [5888] */
    (xdc_Char)0x25,  /* [5889] */
    (xdc_Char)0x64,  /* [5890] */
    (xdc_Char)0x0,  /* [5891] */
    (xdc_Char)0x4c,  /* [5892] */
    (xdc_Char)0x44,  /* [5893] */
    (xdc_Char)0x5f,  /* [5894] */
    (xdc_Char)0x6e,  /* [5895] */
    (xdc_Char)0x6f,  /* [5896] */
    (xdc_Char)0x57,  /* [5897] */
    (xdc_Char)0x6f,  /* [5898] */
    (xdc_Char)0x72,  /* [5899] */
    (xdc_Char)0x6b,  /* [5900] */
    (xdc_Char)0x3a,  /* [5901] */
    (xdc_Char)0x20,  /* [5902] */
    (xdc_Char)0x63,  /* [5903] */
    (xdc_Char)0x6f,  /* [5904] */
    (xdc_Char)0x72,  /* [5905] */
    (xdc_Char)0x65,  /* [5906] */
    (xdc_Char)0x49,  /* [5907] */
    (xdc_Char)0x64,  /* [5908] */
    (xdc_Char)0x3a,  /* [5909] */
    (xdc_Char)0x20,  /* [5910] */
    (xdc_Char)0x25,  /* [5911] */
    (xdc_Char)0x64,  /* [5912] */
    (xdc_Char)0x2c,  /* [5913] */
    (xdc_Char)0x20,  /* [5914] */
    (xdc_Char)0x63,  /* [5915] */
    (xdc_Char)0x75,  /* [5916] */
    (xdc_Char)0x72,  /* [5917] */
    (xdc_Char)0x53,  /* [5918] */
    (xdc_Char)0x65,  /* [5919] */
    (xdc_Char)0x74,  /* [5920] */
    (xdc_Char)0x4c,  /* [5921] */
    (xdc_Char)0x6f,  /* [5922] */
    (xdc_Char)0x63,  /* [5923] */
    (xdc_Char)0x61,  /* [5924] */
    (xdc_Char)0x6c,  /* [5925] */
    (xdc_Char)0x3a,  /* [5926] */
    (xdc_Char)0x20,  /* [5927] */
    (xdc_Char)0x25,  /* [5928] */
    (xdc_Char)0x64,  /* [5929] */
    (xdc_Char)0x2c,  /* [5930] */
    (xdc_Char)0x20,  /* [5931] */
    (xdc_Char)0x63,  /* [5932] */
    (xdc_Char)0x75,  /* [5933] */
    (xdc_Char)0x72,  /* [5934] */
    (xdc_Char)0x53,  /* [5935] */
    (xdc_Char)0x65,  /* [5936] */
    (xdc_Char)0x74,  /* [5937] */
    (xdc_Char)0x58,  /* [5938] */
    (xdc_Char)0x3a,  /* [5939] */
    (xdc_Char)0x20,  /* [5940] */
    (xdc_Char)0x25,  /* [5941] */
    (xdc_Char)0x64,  /* [5942] */
    (xdc_Char)0x2c,  /* [5943] */
    (xdc_Char)0x20,  /* [5944] */
    (xdc_Char)0x63,  /* [5945] */
    (xdc_Char)0x75,  /* [5946] */
    (xdc_Char)0x72,  /* [5947] */
    (xdc_Char)0x4d,  /* [5948] */
    (xdc_Char)0x61,  /* [5949] */
    (xdc_Char)0x73,  /* [5950] */
    (xdc_Char)0x6b,  /* [5951] */
    (xdc_Char)0x4c,  /* [5952] */
    (xdc_Char)0x6f,  /* [5953] */
    (xdc_Char)0x63,  /* [5954] */
    (xdc_Char)0x61,  /* [5955] */
    (xdc_Char)0x6c,  /* [5956] */
    (xdc_Char)0x3a,  /* [5957] */
    (xdc_Char)0x20,  /* [5958] */
    (xdc_Char)0x25,  /* [5959] */
    (xdc_Char)0x64,  /* [5960] */
    (xdc_Char)0x0,  /* [5961] */
    (xdc_Char)0x4c,  /* [5962] */
    (xdc_Char)0x4d,  /* [5963] */
    (xdc_Char)0x5f,  /* [5964] */
    (xdc_Char)0x62,  /* [5965] */
    (xdc_Char)0x65,  /* [5966] */
    (xdc_Char)0x67,  /* [5967] */
    (xdc_Char)0x69,  /* [5968] */
    (xdc_Char)0x6e,  /* [5969] */
    (xdc_Char)0x3a,  /* [5970] */
    (xdc_Char)0x20,  /* [5971] */
    (xdc_Char)0x68,  /* [5972] */
    (xdc_Char)0x77,  /* [5973] */
    (xdc_Char)0x69,  /* [5974] */
    (xdc_Char)0x3a,  /* [5975] */
    (xdc_Char)0x20,  /* [5976] */
    (xdc_Char)0x30,  /* [5977] */
    (xdc_Char)0x78,  /* [5978] */
    (xdc_Char)0x25,  /* [5979] */
    (xdc_Char)0x78,  /* [5980] */
    (xdc_Char)0x2c,  /* [5981] */
    (xdc_Char)0x20,  /* [5982] */
    (xdc_Char)0x66,  /* [5983] */
    (xdc_Char)0x75,  /* [5984] */
    (xdc_Char)0x6e,  /* [5985] */
    (xdc_Char)0x63,  /* [5986] */
    (xdc_Char)0x3a,  /* [5987] */
    (xdc_Char)0x20,  /* [5988] */
    (xdc_Char)0x30,  /* [5989] */
    (xdc_Char)0x78,  /* [5990] */
    (xdc_Char)0x25,  /* [5991] */
    (xdc_Char)0x78,  /* [5992] */
    (xdc_Char)0x2c,  /* [5993] */
    (xdc_Char)0x20,  /* [5994] */
    (xdc_Char)0x70,  /* [5995] */
    (xdc_Char)0x72,  /* [5996] */
    (xdc_Char)0x65,  /* [5997] */
    (xdc_Char)0x54,  /* [5998] */
    (xdc_Char)0x68,  /* [5999] */
    (xdc_Char)0x72,  /* [6000] */
    (xdc_Char)0x65,  /* [6001] */
    (xdc_Char)0x61,  /* [6002] */
    (xdc_Char)0x64,  /* [6003] */
    (xdc_Char)0x3a,  /* [6004] */
    (xdc_Char)0x20,  /* [6005] */
    (xdc_Char)0x25,  /* [6006] */
    (xdc_Char)0x64,  /* [6007] */
    (xdc_Char)0x2c,  /* [6008] */
    (xdc_Char)0x20,  /* [6009] */
    (xdc_Char)0x69,  /* [6010] */
    (xdc_Char)0x6e,  /* [6011] */
    (xdc_Char)0x74,  /* [6012] */
    (xdc_Char)0x4e,  /* [6013] */
    (xdc_Char)0x75,  /* [6014] */
    (xdc_Char)0x6d,  /* [6015] */
    (xdc_Char)0x3a,  /* [6016] */
    (xdc_Char)0x20,  /* [6017] */
    (xdc_Char)0x25,  /* [6018] */
    (xdc_Char)0x64,  /* [6019] */
    (xdc_Char)0x2c,  /* [6020] */
    (xdc_Char)0x20,  /* [6021] */
    (xdc_Char)0x69,  /* [6022] */
    (xdc_Char)0x72,  /* [6023] */
    (xdc_Char)0x70,  /* [6024] */
    (xdc_Char)0x3a,  /* [6025] */
    (xdc_Char)0x20,  /* [6026] */
    (xdc_Char)0x30,  /* [6027] */
    (xdc_Char)0x78,  /* [6028] */
    (xdc_Char)0x25,  /* [6029] */
    (xdc_Char)0x78,  /* [6030] */
    (xdc_Char)0x0,  /* [6031] */
    (xdc_Char)0x4c,  /* [6032] */
    (xdc_Char)0x44,  /* [6033] */
    (xdc_Char)0x5f,  /* [6034] */
    (xdc_Char)0x65,  /* [6035] */
    (xdc_Char)0x6e,  /* [6036] */
    (xdc_Char)0x64,  /* [6037] */
    (xdc_Char)0x3a,  /* [6038] */
    (xdc_Char)0x20,  /* [6039] */
    (xdc_Char)0x68,  /* [6040] */
    (xdc_Char)0x77,  /* [6041] */
    (xdc_Char)0x69,  /* [6042] */
    (xdc_Char)0x3a,  /* [6043] */
    (xdc_Char)0x20,  /* [6044] */
    (xdc_Char)0x30,  /* [6045] */
    (xdc_Char)0x78,  /* [6046] */
    (xdc_Char)0x25,  /* [6047] */
    (xdc_Char)0x78,  /* [6048] */
    (xdc_Char)0x0,  /* [6049] */
    (xdc_Char)0x78,  /* [6050] */
    (xdc_Char)0x64,  /* [6051] */
    (xdc_Char)0x63,  /* [6052] */
    (xdc_Char)0x2e,  /* [6053] */
    (xdc_Char)0x0,  /* [6054] */
    (xdc_Char)0x72,  /* [6055] */
    (xdc_Char)0x75,  /* [6056] */
    (xdc_Char)0x6e,  /* [6057] */
    (xdc_Char)0x74,  /* [6058] */
    (xdc_Char)0x69,  /* [6059] */
    (xdc_Char)0x6d,  /* [6060] */
    (xdc_Char)0x65,  /* [6061] */
    (xdc_Char)0x2e,  /* [6062] */
    (xdc_Char)0x0,  /* [6063] */
    (xdc_Char)0x41,  /* [6064] */
    (xdc_Char)0x73,  /* [6065] */
    (xdc_Char)0x73,  /* [6066] */
    (xdc_Char)0x65,  /* [6067] */
    (xdc_Char)0x72,  /* [6068] */
    (xdc_Char)0x74,  /* [6069] */
    (xdc_Char)0x0,  /* [6070] */
    (xdc_Char)0x43,  /* [6071] */
    (xdc_Char)0x6f,  /* [6072] */
    (xdc_Char)0x72,  /* [6073] */
    (xdc_Char)0x65,  /* [6074] */
    (xdc_Char)0x0,  /* [6075] */
    (xdc_Char)0x44,  /* [6076] */
    (xdc_Char)0x65,  /* [6077] */
    (xdc_Char)0x66,  /* [6078] */
    (xdc_Char)0x61,  /* [6079] */
    (xdc_Char)0x75,  /* [6080] */
    (xdc_Char)0x6c,  /* [6081] */
    (xdc_Char)0x74,  /* [6082] */
    (xdc_Char)0x73,  /* [6083] */
    (xdc_Char)0x0,  /* [6084] */
    (xdc_Char)0x44,  /* [6085] */
    (xdc_Char)0x69,  /* [6086] */
    (xdc_Char)0x61,  /* [6087] */
    (xdc_Char)0x67,  /* [6088] */
    (xdc_Char)0x73,  /* [6089] */
    (xdc_Char)0x0,  /* [6090] */
    (xdc_Char)0x45,  /* [6091] */
    (xdc_Char)0x72,  /* [6092] */
    (xdc_Char)0x72,  /* [6093] */
    (xdc_Char)0x6f,  /* [6094] */
    (xdc_Char)0x72,  /* [6095] */
    (xdc_Char)0x0,  /* [6096] */
    (xdc_Char)0x47,  /* [6097] */
    (xdc_Char)0x61,  /* [6098] */
    (xdc_Char)0x74,  /* [6099] */
    (xdc_Char)0x65,  /* [6100] */
    (xdc_Char)0x0,  /* [6101] */
    (xdc_Char)0x47,  /* [6102] */
    (xdc_Char)0x61,  /* [6103] */
    (xdc_Char)0x74,  /* [6104] */
    (xdc_Char)0x65,  /* [6105] */
    (xdc_Char)0x4e,  /* [6106] */
    (xdc_Char)0x75,  /* [6107] */
    (xdc_Char)0x6c,  /* [6108] */
    (xdc_Char)0x6c,  /* [6109] */
    (xdc_Char)0x0,  /* [6110] */
    (xdc_Char)0x4c,  /* [6111] */
    (xdc_Char)0x6f,  /* [6112] */
    (xdc_Char)0x67,  /* [6113] */
    (xdc_Char)0x0,  /* [6114] */
    (xdc_Char)0x4c,  /* [6115] */
    (xdc_Char)0x6f,  /* [6116] */
    (xdc_Char)0x67,  /* [6117] */
    (xdc_Char)0x67,  /* [6118] */
    (xdc_Char)0x65,  /* [6119] */
    (xdc_Char)0x72,  /* [6120] */
    (xdc_Char)0x42,  /* [6121] */
    (xdc_Char)0x75,  /* [6122] */
    (xdc_Char)0x66,  /* [6123] */
    (xdc_Char)0x0,  /* [6124] */
    (xdc_Char)0x4d,  /* [6125] */
    (xdc_Char)0x61,  /* [6126] */
    (xdc_Char)0x69,  /* [6127] */
    (xdc_Char)0x6e,  /* [6128] */
    (xdc_Char)0x0,  /* [6129] */
    (xdc_Char)0x4d,  /* [6130] */
    (xdc_Char)0x65,  /* [6131] */
    (xdc_Char)0x6d,  /* [6132] */
    (xdc_Char)0x6f,  /* [6133] */
    (xdc_Char)0x72,  /* [6134] */
    (xdc_Char)0x79,  /* [6135] */
    (xdc_Char)0x0,  /* [6136] */
    (xdc_Char)0x52,  /* [6137] */
    (xdc_Char)0x65,  /* [6138] */
    (xdc_Char)0x67,  /* [6139] */
    (xdc_Char)0x69,  /* [6140] */
    (xdc_Char)0x73,  /* [6141] */
    (xdc_Char)0x74,  /* [6142] */
    (xdc_Char)0x72,  /* [6143] */
    (xdc_Char)0x79,  /* [6144] */
    (xdc_Char)0x0,  /* [6145] */
    (xdc_Char)0x53,  /* [6146] */
    (xdc_Char)0x74,  /* [6147] */
    (xdc_Char)0x61,  /* [6148] */
    (xdc_Char)0x72,  /* [6149] */
    (xdc_Char)0x74,  /* [6150] */
    (xdc_Char)0x75,  /* [6151] */
    (xdc_Char)0x70,  /* [6152] */
    (xdc_Char)0x0,  /* [6153] */
    (xdc_Char)0x53,  /* [6154] */
    (xdc_Char)0x79,  /* [6155] */
    (xdc_Char)0x73,  /* [6156] */
    (xdc_Char)0x74,  /* [6157] */
    (xdc_Char)0x65,  /* [6158] */
    (xdc_Char)0x6d,  /* [6159] */
    (xdc_Char)0x0,  /* [6160] */
    (xdc_Char)0x53,  /* [6161] */
    (xdc_Char)0x79,  /* [6162] */
    (xdc_Char)0x73,  /* [6163] */
    (xdc_Char)0x4d,  /* [6164] */
    (xdc_Char)0x69,  /* [6165] */
    (xdc_Char)0x6e,  /* [6166] */
    (xdc_Char)0x0,  /* [6167] */
    (xdc_Char)0x54,  /* [6168] */
    (xdc_Char)0x65,  /* [6169] */
    (xdc_Char)0x78,  /* [6170] */
    (xdc_Char)0x74,  /* [6171] */
    (xdc_Char)0x0,  /* [6172] */
    (xdc_Char)0x54,  /* [6173] */
    (xdc_Char)0x69,  /* [6174] */
    (xdc_Char)0x6d,  /* [6175] */
    (xdc_Char)0x65,  /* [6176] */
    (xdc_Char)0x73,  /* [6177] */
    (xdc_Char)0x74,  /* [6178] */
    (xdc_Char)0x61,  /* [6179] */
    (xdc_Char)0x6d,  /* [6180] */
    (xdc_Char)0x70,  /* [6181] */
    (xdc_Char)0x0,  /* [6182] */
    (xdc_Char)0x54,  /* [6183] */
    (xdc_Char)0x69,  /* [6184] */
    (xdc_Char)0x6d,  /* [6185] */
    (xdc_Char)0x65,  /* [6186] */
    (xdc_Char)0x73,  /* [6187] */
    (xdc_Char)0x74,  /* [6188] */
    (xdc_Char)0x61,  /* [6189] */
    (xdc_Char)0x6d,  /* [6190] */
    (xdc_Char)0x70,  /* [6191] */
    (xdc_Char)0x4e,  /* [6192] */
    (xdc_Char)0x75,  /* [6193] */
    (xdc_Char)0x6c,  /* [6194] */
    (xdc_Char)0x6c,  /* [6195] */
    (xdc_Char)0x0,  /* [6196] */
    (xdc_Char)0x74,  /* [6197] */
    (xdc_Char)0x69,  /* [6198] */
    (xdc_Char)0x2e,  /* [6199] */
    (xdc_Char)0x0,  /* [6200] */
    (xdc_Char)0x73,  /* [6201] */
    (xdc_Char)0x79,  /* [6202] */
    (xdc_Char)0x73,  /* [6203] */
    (xdc_Char)0x62,  /* [6204] */
    (xdc_Char)0x69,  /* [6205] */
    (xdc_Char)0x6f,  /* [6206] */
    (xdc_Char)0x73,  /* [6207] */
    (xdc_Char)0x2e,  /* [6208] */
    (xdc_Char)0x0,  /* [6209] */
    (xdc_Char)0x66,  /* [6210] */
    (xdc_Char)0x61,  /* [6211] */
    (xdc_Char)0x6d,  /* [6212] */
    (xdc_Char)0x69,  /* [6213] */
    (xdc_Char)0x6c,  /* [6214] */
    (xdc_Char)0x79,  /* [6215] */
    (xdc_Char)0x2e,  /* [6216] */
    (xdc_Char)0x0,  /* [6217] */
    (xdc_Char)0x61,  /* [6218] */
    (xdc_Char)0x72,  /* [6219] */
    (xdc_Char)0x6d,  /* [6220] */
    (xdc_Char)0x2e,  /* [6221] */
    (xdc_Char)0x0,  /* [6222] */
    (xdc_Char)0x49,  /* [6223] */
    (xdc_Char)0x6e,  /* [6224] */
    (xdc_Char)0x74,  /* [6225] */
    (xdc_Char)0x72,  /* [6226] */
    (xdc_Char)0x69,  /* [6227] */
    (xdc_Char)0x6e,  /* [6228] */
    (xdc_Char)0x73,  /* [6229] */
    (xdc_Char)0x69,  /* [6230] */
    (xdc_Char)0x63,  /* [6231] */
    (xdc_Char)0x73,  /* [6232] */
    (xdc_Char)0x53,  /* [6233] */
    (xdc_Char)0x75,  /* [6234] */
    (xdc_Char)0x70,  /* [6235] */
    (xdc_Char)0x70,  /* [6236] */
    (xdc_Char)0x6f,  /* [6237] */
    (xdc_Char)0x72,  /* [6238] */
    (xdc_Char)0x74,  /* [6239] */
    (xdc_Char)0x0,  /* [6240] */
    (xdc_Char)0x54,  /* [6241] */
    (xdc_Char)0x61,  /* [6242] */
    (xdc_Char)0x73,  /* [6243] */
    (xdc_Char)0x6b,  /* [6244] */
    (xdc_Char)0x53,  /* [6245] */
    (xdc_Char)0x75,  /* [6246] */
    (xdc_Char)0x70,  /* [6247] */
    (xdc_Char)0x70,  /* [6248] */
    (xdc_Char)0x6f,  /* [6249] */
    (xdc_Char)0x72,  /* [6250] */
    (xdc_Char)0x74,  /* [6251] */
    (xdc_Char)0x0,  /* [6252] */
    (xdc_Char)0x42,  /* [6253] */
    (xdc_Char)0x49,  /* [6254] */
    (xdc_Char)0x4f,  /* [6255] */
    (xdc_Char)0x53,  /* [6256] */
    (xdc_Char)0x0,  /* [6257] */
    (xdc_Char)0x6b,  /* [6258] */
    (xdc_Char)0x6e,  /* [6259] */
    (xdc_Char)0x6c,  /* [6260] */
    (xdc_Char)0x2e,  /* [6261] */
    (xdc_Char)0x0,  /* [6262] */
    (xdc_Char)0x43,  /* [6263] */
    (xdc_Char)0x6c,  /* [6264] */
    (xdc_Char)0x6f,  /* [6265] */
    (xdc_Char)0x63,  /* [6266] */
    (xdc_Char)0x6b,  /* [6267] */
    (xdc_Char)0x0,  /* [6268] */
    (xdc_Char)0x49,  /* [6269] */
    (xdc_Char)0x64,  /* [6270] */
    (xdc_Char)0x6c,  /* [6271] */
    (xdc_Char)0x65,  /* [6272] */
    (xdc_Char)0x0,  /* [6273] */
    (xdc_Char)0x49,  /* [6274] */
    (xdc_Char)0x6e,  /* [6275] */
    (xdc_Char)0x74,  /* [6276] */
    (xdc_Char)0x72,  /* [6277] */
    (xdc_Char)0x69,  /* [6278] */
    (xdc_Char)0x6e,  /* [6279] */
    (xdc_Char)0x73,  /* [6280] */
    (xdc_Char)0x69,  /* [6281] */
    (xdc_Char)0x63,  /* [6282] */
    (xdc_Char)0x73,  /* [6283] */
    (xdc_Char)0x0,  /* [6284] */
    (xdc_Char)0x45,  /* [6285] */
    (xdc_Char)0x76,  /* [6286] */
    (xdc_Char)0x65,  /* [6287] */
    (xdc_Char)0x6e,  /* [6288] */
    (xdc_Char)0x74,  /* [6289] */
    (xdc_Char)0x0,  /* [6290] */
    (xdc_Char)0x51,  /* [6291] */
    (xdc_Char)0x75,  /* [6292] */
    (xdc_Char)0x65,  /* [6293] */
    (xdc_Char)0x75,  /* [6294] */
    (xdc_Char)0x65,  /* [6295] */
    (xdc_Char)0x0,  /* [6296] */
    (xdc_Char)0x53,  /* [6297] */
    (xdc_Char)0x65,  /* [6298] */
    (xdc_Char)0x6d,  /* [6299] */
    (xdc_Char)0x61,  /* [6300] */
    (xdc_Char)0x70,  /* [6301] */
    (xdc_Char)0x68,  /* [6302] */
    (xdc_Char)0x6f,  /* [6303] */
    (xdc_Char)0x72,  /* [6304] */
    (xdc_Char)0x65,  /* [6305] */
    (xdc_Char)0x0,  /* [6306] */
    (xdc_Char)0x53,  /* [6307] */
    (xdc_Char)0x77,  /* [6308] */
    (xdc_Char)0x69,  /* [6309] */
    (xdc_Char)0x0,  /* [6310] */
    (xdc_Char)0x54,  /* [6311] */
    (xdc_Char)0x61,  /* [6312] */
    (xdc_Char)0x73,  /* [6313] */
    (xdc_Char)0x6b,  /* [6314] */
    (xdc_Char)0x0,  /* [6315] */
    (xdc_Char)0x68,  /* [6316] */
    (xdc_Char)0x61,  /* [6317] */
    (xdc_Char)0x6c,  /* [6318] */
    (xdc_Char)0x2e,  /* [6319] */
    (xdc_Char)0x0,  /* [6320] */
    (xdc_Char)0x43,  /* [6321] */
    (xdc_Char)0x61,  /* [6322] */
    (xdc_Char)0x63,  /* [6323] */
    (xdc_Char)0x68,  /* [6324] */
    (xdc_Char)0x65,  /* [6325] */
    (xdc_Char)0x0,  /* [6326] */
    (xdc_Char)0x43,  /* [6327] */
    (xdc_Char)0x6f,  /* [6328] */
    (xdc_Char)0x72,  /* [6329] */
    (xdc_Char)0x65,  /* [6330] */
    (xdc_Char)0x4e,  /* [6331] */
    (xdc_Char)0x75,  /* [6332] */
    (xdc_Char)0x6c,  /* [6333] */
    (xdc_Char)0x6c,  /* [6334] */
    (xdc_Char)0x0,  /* [6335] */
    (xdc_Char)0x48,  /* [6336] */
    (xdc_Char)0x77,  /* [6337] */
    (xdc_Char)0x69,  /* [6338] */
    (xdc_Char)0x0,  /* [6339] */
    (xdc_Char)0x54,  /* [6340] */
    (xdc_Char)0x69,  /* [6341] */
    (xdc_Char)0x6d,  /* [6342] */
    (xdc_Char)0x65,  /* [6343] */
    (xdc_Char)0x72,  /* [6344] */
    (xdc_Char)0x0,  /* [6345] */
    (xdc_Char)0x61,  /* [6346] */
    (xdc_Char)0x38,  /* [6347] */
    (xdc_Char)0x2e,  /* [6348] */
    (xdc_Char)0x0,  /* [6349] */
    (xdc_Char)0x4d,  /* [6350] */
    (xdc_Char)0x6d,  /* [6351] */
    (xdc_Char)0x75,  /* [6352] */
    (xdc_Char)0x0,  /* [6353] */
    (xdc_Char)0x54,  /* [6354] */
    (xdc_Char)0x69,  /* [6355] */
    (xdc_Char)0x6d,  /* [6356] */
    (xdc_Char)0x65,  /* [6357] */
    (xdc_Char)0x73,  /* [6358] */
    (xdc_Char)0x74,  /* [6359] */
    (xdc_Char)0x61,  /* [6360] */
    (xdc_Char)0x6d,  /* [6361] */
    (xdc_Char)0x70,  /* [6362] */
    (xdc_Char)0x50,  /* [6363] */
    (xdc_Char)0x72,  /* [6364] */
    (xdc_Char)0x6f,  /* [6365] */
    (xdc_Char)0x76,  /* [6366] */
    (xdc_Char)0x69,  /* [6367] */
    (xdc_Char)0x64,  /* [6368] */
    (xdc_Char)0x65,  /* [6369] */
    (xdc_Char)0x72,  /* [6370] */
    (xdc_Char)0x0,  /* [6371] */
    (xdc_Char)0x69,  /* [6372] */
    (xdc_Char)0x6e,  /* [6373] */
    (xdc_Char)0x74,  /* [6374] */
    (xdc_Char)0x63,  /* [6375] */
    (xdc_Char)0x70,  /* [6376] */
    (xdc_Char)0x73,  /* [6377] */
    (xdc_Char)0x2e,  /* [6378] */
    (xdc_Char)0x0,  /* [6379] */
    (xdc_Char)0x65,  /* [6380] */
    (xdc_Char)0x78,  /* [6381] */
    (xdc_Char)0x63,  /* [6382] */
    (xdc_Char)0x2e,  /* [6383] */
    (xdc_Char)0x0,  /* [6384] */
    (xdc_Char)0x45,  /* [6385] */
    (xdc_Char)0x78,  /* [6386] */
    (xdc_Char)0x63,  /* [6387] */
    (xdc_Char)0x65,  /* [6388] */
    (xdc_Char)0x70,  /* [6389] */
    (xdc_Char)0x74,  /* [6390] */
    (xdc_Char)0x69,  /* [6391] */
    (xdc_Char)0x6f,  /* [6392] */
    (xdc_Char)0x6e,  /* [6393] */
    (xdc_Char)0x0,  /* [6394] */
    (xdc_Char)0x67,  /* [6395] */
    (xdc_Char)0x61,  /* [6396] */
    (xdc_Char)0x74,  /* [6397] */
    (xdc_Char)0x65,  /* [6398] */
    (xdc_Char)0x73,  /* [6399] */
    (xdc_Char)0x2e,  /* [6400] */
    (xdc_Char)0x0,  /* [6401] */
    (xdc_Char)0x47,  /* [6402] */
    (xdc_Char)0x61,  /* [6403] */
    (xdc_Char)0x74,  /* [6404] */
    (xdc_Char)0x65,  /* [6405] */
    (xdc_Char)0x48,  /* [6406] */
    (xdc_Char)0x77,  /* [6407] */
    (xdc_Char)0x69,  /* [6408] */
    (xdc_Char)0x0,  /* [6409] */
    (xdc_Char)0x47,  /* [6410] */
    (xdc_Char)0x61,  /* [6411] */
    (xdc_Char)0x74,  /* [6412] */
    (xdc_Char)0x65,  /* [6413] */
    (xdc_Char)0x4d,  /* [6414] */
    (xdc_Char)0x75,  /* [6415] */
    (xdc_Char)0x74,  /* [6416] */
    (xdc_Char)0x65,  /* [6417] */
    (xdc_Char)0x78,  /* [6418] */
    (xdc_Char)0x0,  /* [6419] */
    (xdc_Char)0x68,  /* [6420] */
    (xdc_Char)0x65,  /* [6421] */
    (xdc_Char)0x61,  /* [6422] */
    (xdc_Char)0x70,  /* [6423] */
    (xdc_Char)0x73,  /* [6424] */
    (xdc_Char)0x2e,  /* [6425] */
    (xdc_Char)0x0,  /* [6426] */
    (xdc_Char)0x48,  /* [6427] */
    (xdc_Char)0x65,  /* [6428] */
    (xdc_Char)0x61,  /* [6429] */
    (xdc_Char)0x70,  /* [6430] */
    (xdc_Char)0x4d,  /* [6431] */
    (xdc_Char)0x65,  /* [6432] */
    (xdc_Char)0x6d,  /* [6433] */
    (xdc_Char)0x0,  /* [6434] */
    (xdc_Char)0x74,  /* [6435] */
    (xdc_Char)0x69,  /* [6436] */
    (xdc_Char)0x6d,  /* [6437] */
    (xdc_Char)0x65,  /* [6438] */
    (xdc_Char)0x72,  /* [6439] */
    (xdc_Char)0x73,  /* [6440] */
    (xdc_Char)0x2e,  /* [6441] */
    (xdc_Char)0x0,  /* [6442] */
    (xdc_Char)0x64,  /* [6443] */
    (xdc_Char)0x6d,  /* [6444] */
    (xdc_Char)0x74,  /* [6445] */
    (xdc_Char)0x69,  /* [6446] */
    (xdc_Char)0x6d,  /* [6447] */
    (xdc_Char)0x65,  /* [6448] */
    (xdc_Char)0x72,  /* [6449] */
    (xdc_Char)0x2e,  /* [6450] */
    (xdc_Char)0x0,  /* [6451] */
    (xdc_Char)0x74,  /* [6452] */
    (xdc_Char)0x69,  /* [6453] */
    (xdc_Char)0x38,  /* [6454] */
    (xdc_Char)0x31,  /* [6455] */
    (xdc_Char)0x78,  /* [6456] */
    (xdc_Char)0x78,  /* [6457] */
    (xdc_Char)0x2e,  /* [6458] */
    (xdc_Char)0x0,  /* [6459] */
    (xdc_Char)0x54,  /* [6460] */
    (xdc_Char)0x69,  /* [6461] */
    (xdc_Char)0x6d,  /* [6462] */
    (xdc_Char)0x65,  /* [6463] */
    (xdc_Char)0x72,  /* [6464] */
    (xdc_Char)0x53,  /* [6465] */
    (xdc_Char)0x75,  /* [6466] */
    (xdc_Char)0x70,  /* [6467] */
    (xdc_Char)0x70,  /* [6468] */
    (xdc_Char)0x6f,  /* [6469] */
    (xdc_Char)0x72,  /* [6470] */
    (xdc_Char)0x74,  /* [6471] */
    (xdc_Char)0x0,  /* [6472] */
    (xdc_Char)0x73,  /* [6473] */
    (xdc_Char)0x65,  /* [6474] */
    (xdc_Char)0x6d,  /* [6475] */
    (xdc_Char)0x61,  /* [6476] */
    (xdc_Char)0x50,  /* [6477] */
    (xdc_Char)0x49,  /* [6478] */
    (xdc_Char)0x4d,  /* [6479] */
    (xdc_Char)0x52,  /* [6480] */
    (xdc_Char)0x75,  /* [6481] */
    (xdc_Char)0x6e,  /* [6482] */
    (xdc_Char)0x53,  /* [6483] */
    (xdc_Char)0x74,  /* [6484] */
    (xdc_Char)0x61,  /* [6485] */
    (xdc_Char)0x74,  /* [6486] */
    (xdc_Char)0x65,  /* [6487] */
    (xdc_Char)0x0,  /* [6488] */
    (xdc_Char)0x73,  /* [6489] */
    (xdc_Char)0x65,  /* [6490] */
    (xdc_Char)0x6d,  /* [6491] */
    (xdc_Char)0x61,  /* [6492] */
    (xdc_Char)0x55,  /* [6493] */
    (xdc_Char)0x41,  /* [6494] */
    (xdc_Char)0x52,  /* [6495] */
    (xdc_Char)0x54,  /* [6496] */
    (xdc_Char)0x31,  /* [6497] */
    (xdc_Char)0x0,  /* [6498] */
    (xdc_Char)0x74,  /* [6499] */
    (xdc_Char)0x61,  /* [6500] */
    (xdc_Char)0x73,  /* [6501] */
    (xdc_Char)0x6b,  /* [6502] */
    (xdc_Char)0x50,  /* [6503] */
    (xdc_Char)0x49,  /* [6504] */
    (xdc_Char)0x4d,  /* [6505] */
    (xdc_Char)0x52,  /* [6506] */
    (xdc_Char)0x75,  /* [6507] */
    (xdc_Char)0x6e,  /* [6508] */
    (xdc_Char)0x0,  /* [6509] */
    (xdc_Char)0x74,  /* [6510] */
    (xdc_Char)0x69,  /* [6511] */
    (xdc_Char)0x2e,  /* [6512] */
    (xdc_Char)0x73,  /* [6513] */
    (xdc_Char)0x79,  /* [6514] */
    (xdc_Char)0x73,  /* [6515] */
    (xdc_Char)0x62,  /* [6516] */
    (xdc_Char)0x69,  /* [6517] */
    (xdc_Char)0x6f,  /* [6518] */
    (xdc_Char)0x73,  /* [6519] */
    (xdc_Char)0x2e,  /* [6520] */
    (xdc_Char)0x6b,  /* [6521] */
    (xdc_Char)0x6e,  /* [6522] */
    (xdc_Char)0x6c,  /* [6523] */
    (xdc_Char)0x2e,  /* [6524] */
    (xdc_Char)0x54,  /* [6525] */
    (xdc_Char)0x61,  /* [6526] */
    (xdc_Char)0x73,  /* [6527] */
    (xdc_Char)0x6b,  /* [6528] */
    (xdc_Char)0x2e,  /* [6529] */
    (xdc_Char)0x49,  /* [6530] */
    (xdc_Char)0x64,  /* [6531] */
    (xdc_Char)0x6c,  /* [6532] */
    (xdc_Char)0x65,  /* [6533] */
    (xdc_Char)0x54,  /* [6534] */
    (xdc_Char)0x61,  /* [6535] */
    (xdc_Char)0x73,  /* [6536] */
    (xdc_Char)0x6b,  /* [6537] */
    (xdc_Char)0x0,  /* [6538] */
    (xdc_Char)0x69,  /* [6539] */
    (xdc_Char)0x73,  /* [6540] */
    (xdc_Char)0x72,  /* [6541] */
    (xdc_Char)0x39,  /* [6542] */
    (xdc_Char)0x37,  /* [6543] */
    (xdc_Char)0x67,  /* [6544] */
    (xdc_Char)0x70,  /* [6545] */
    (xdc_Char)0x69,  /* [6546] */
    (xdc_Char)0x6f,  /* [6547] */
    (xdc_Char)0x30,  /* [6548] */
    (xdc_Char)0x68,  /* [6549] */
    (xdc_Char)0x6e,  /* [6550] */
    (xdc_Char)0x0,  /* [6551] */
    (xdc_Char)0x69,  /* [6552] */
    (xdc_Char)0x73,  /* [6553] */
    (xdc_Char)0x72,  /* [6554] */
    (xdc_Char)0x33,  /* [6555] */
    (xdc_Char)0x33,  /* [6556] */
    (xdc_Char)0x67,  /* [6557] */
    (xdc_Char)0x70,  /* [6558] */
    (xdc_Char)0x69,  /* [6559] */
    (xdc_Char)0x6f,  /* [6560] */
    (xdc_Char)0x32,  /* [6561] */
    (xdc_Char)0x68,  /* [6562] */
    (xdc_Char)0x6e,  /* [6563] */
    (xdc_Char)0x0,  /* [6564] */
    (xdc_Char)0x69,  /* [6565] */
    (xdc_Char)0x73,  /* [6566] */
    (xdc_Char)0x72,  /* [6567] */
    (xdc_Char)0x37,  /* [6568] */
    (xdc_Char)0x4e,  /* [6569] */
    (xdc_Char)0x4d,  /* [6570] */
    (xdc_Char)0x49,  /* [6571] */
    (xdc_Char)0x68,  /* [6572] */
    (xdc_Char)0x6e,  /* [6573] */
    (xdc_Char)0x0,  /* [6574] */
    (xdc_Char)0x74,  /* [6575] */
    (xdc_Char)0x69,  /* [6576] */
    (xdc_Char)0x6d,  /* [6577] */
    (xdc_Char)0x65,  /* [6578] */
    (xdc_Char)0x72,  /* [6579] */
    (xdc_Char)0x33,  /* [6580] */
    (xdc_Char)0x0,  /* [6581] */
    (xdc_Char)0x74,  /* [6582] */
    (xdc_Char)0x69,  /* [6583] */
    (xdc_Char)0x6d,  /* [6584] */
    (xdc_Char)0x65,  /* [6585] */
    (xdc_Char)0x72,  /* [6586] */
    (xdc_Char)0x34,  /* [6587] */
    (xdc_Char)0x0,  /* [6588] */
    (xdc_Char)0x74,  /* [6589] */
    (xdc_Char)0x69,  /* [6590] */
    (xdc_Char)0x6d,  /* [6591] */
    (xdc_Char)0x65,  /* [6592] */
    (xdc_Char)0x72,  /* [6593] */
    (xdc_Char)0x36,  /* [6594] */
    (xdc_Char)0x0,  /* [6595] */
    (xdc_Char)0x74,  /* [6596] */
    (xdc_Char)0x69,  /* [6597] */
    (xdc_Char)0x6d,  /* [6598] */
    (xdc_Char)0x65,  /* [6599] */
    (xdc_Char)0x72,  /* [6600] */
    (xdc_Char)0x37,  /* [6601] */
    (xdc_Char)0x0,  /* [6602] */
    (xdc_Char)0x72,  /* [6603] */
    (xdc_Char)0x74,  /* [6604] */
    (xdc_Char)0x63,  /* [6605] */
    (xdc_Char)0x69,  /* [6606] */
    (xdc_Char)0x6e,  /* [6607] */
    (xdc_Char)0x74,  /* [6608] */
    (xdc_Char)0x0,  /* [6609] */
    (xdc_Char)0x69,  /* [6610] */
    (xdc_Char)0x73,  /* [6611] */
    (xdc_Char)0x72,  /* [6612] */
    (xdc_Char)0x37,  /* [6613] */
    (xdc_Char)0x39,  /* [6614] */
    (xdc_Char)0x65,  /* [6615] */
    (xdc_Char)0x51,  /* [6616] */
    (xdc_Char)0x45,  /* [6617] */
    (xdc_Char)0x50,  /* [6618] */
    (xdc_Char)0x30,  /* [6619] */
    (xdc_Char)0x49,  /* [6620] */
    (xdc_Char)0x4e,  /* [6621] */
    (xdc_Char)0x54,  /* [6622] */
    (xdc_Char)0x68,  /* [6623] */
    (xdc_Char)0x6e,  /* [6624] */
    (xdc_Char)0x0,  /* [6625] */
    (xdc_Char)0x69,  /* [6626] */
    (xdc_Char)0x73,  /* [6627] */
    (xdc_Char)0x72,  /* [6628] */
    (xdc_Char)0x38,  /* [6629] */
    (xdc_Char)0x38,  /* [6630] */
    (xdc_Char)0x65,  /* [6631] */
    (xdc_Char)0x51,  /* [6632] */
    (xdc_Char)0x45,  /* [6633] */
    (xdc_Char)0x50,  /* [6634] */
    (xdc_Char)0x31,  /* [6635] */
    (xdc_Char)0x49,  /* [6636] */
    (xdc_Char)0x4e,  /* [6637] */
    (xdc_Char)0x54,  /* [6638] */
    (xdc_Char)0x68,  /* [6639] */
    (xdc_Char)0x6e,  /* [6640] */
    (xdc_Char)0x0,  /* [6641] */
    (xdc_Char)0x69,  /* [6642] */
    (xdc_Char)0x73,  /* [6643] */
    (xdc_Char)0x72,  /* [6644] */
    (xdc_Char)0x38,  /* [6645] */
    (xdc_Char)0x39,  /* [6646] */
    (xdc_Char)0x65,  /* [6647] */
    (xdc_Char)0x51,  /* [6648] */
    (xdc_Char)0x45,  /* [6649] */
    (xdc_Char)0x50,  /* [6650] */
    (xdc_Char)0x32,  /* [6651] */
    (xdc_Char)0x49,  /* [6652] */
    (xdc_Char)0x4e,  /* [6653] */
    (xdc_Char)0x54,  /* [6654] */
    (xdc_Char)0x68,  /* [6655] */
    (xdc_Char)0x6e,  /* [6656] */
    (xdc_Char)0x0,  /* [6657] */
    (xdc_Char)0x69,  /* [6658] */
    (xdc_Char)0x73,  /* [6659] */
    (xdc_Char)0x72,  /* [6660] */
    (xdc_Char)0x39,  /* [6661] */
    (xdc_Char)0x36,  /* [6662] */
    (xdc_Char)0x67,  /* [6663] */
    (xdc_Char)0x70,  /* [6664] */
    (xdc_Char)0x69,  /* [6665] */
    (xdc_Char)0x6f,  /* [6666] */
    (xdc_Char)0x30,  /* [6667] */
    (xdc_Char)0x68,  /* [6668] */
    (xdc_Char)0x6e,  /* [6669] */
    (xdc_Char)0x0,  /* [6670] */
    (xdc_Char)0x69,  /* [6671] */
    (xdc_Char)0x73,  /* [6672] */
    (xdc_Char)0x72,  /* [6673] */
    (xdc_Char)0x39,  /* [6674] */
    (xdc_Char)0x38,  /* [6675] */
    (xdc_Char)0x67,  /* [6676] */
    (xdc_Char)0x70,  /* [6677] */
    (xdc_Char)0x69,  /* [6678] */
    (xdc_Char)0x6f,  /* [6679] */
    (xdc_Char)0x31,  /* [6680] */
    (xdc_Char)0x68,  /* [6681] */
    (xdc_Char)0x6e,  /* [6682] */
    (xdc_Char)0x0,  /* [6683] */
    (xdc_Char)0x69,  /* [6684] */
    (xdc_Char)0x73,  /* [6685] */
    (xdc_Char)0x72,  /* [6686] */
    (xdc_Char)0x37,  /* [6687] */
    (xdc_Char)0x30,  /* [6688] */
    (xdc_Char)0x49,  /* [6689] */
    (xdc_Char)0x32,  /* [6690] */
    (xdc_Char)0x43,  /* [6691] */
    (xdc_Char)0x30,  /* [6692] */
    (xdc_Char)0x68,  /* [6693] */
    (xdc_Char)0x6e,  /* [6694] */
    (xdc_Char)0x0,  /* [6695] */
    (xdc_Char)0x69,  /* [6696] */
    (xdc_Char)0x73,  /* [6697] */
    (xdc_Char)0x72,  /* [6698] */
    (xdc_Char)0x35,  /* [6699] */
    (xdc_Char)0x37,  /* [6700] */
    (xdc_Char)0x67,  /* [6701] */
    (xdc_Char)0x70,  /* [6702] */
    (xdc_Char)0x69,  /* [6703] */
    (xdc_Char)0x6f,  /* [6704] */
    (xdc_Char)0x68,  /* [6705] */
    (xdc_Char)0x6e,  /* [6706] */
    (xdc_Char)0x0,  /* [6707] */
    (xdc_Char)0x69,  /* [6708] */
    (xdc_Char)0x73,  /* [6709] */
    (xdc_Char)0x72,  /* [6710] */
    (xdc_Char)0x39,  /* [6711] */
    (xdc_Char)0x39,  /* [6712] */
    (xdc_Char)0x67,  /* [6713] */
    (xdc_Char)0x70,  /* [6714] */
    (xdc_Char)0x69,  /* [6715] */
    (xdc_Char)0x6f,  /* [6716] */
    (xdc_Char)0x31,  /* [6717] */
    (xdc_Char)0x68,  /* [6718] */
    (xdc_Char)0x6e,  /* [6719] */
    (xdc_Char)0x0,  /* [6720] */
    (xdc_Char)0x69,  /* [6721] */
    (xdc_Char)0x73,  /* [6722] */
    (xdc_Char)0x72,  /* [6723] */
    (xdc_Char)0x37,  /* [6724] */
    (xdc_Char)0x31,  /* [6725] */
    (xdc_Char)0x49,  /* [6726] */
    (xdc_Char)0x32,  /* [6727] */
    (xdc_Char)0x43,  /* [6728] */
    (xdc_Char)0x31,  /* [6729] */
    (xdc_Char)0x68,  /* [6730] */
    (xdc_Char)0x6e,  /* [6731] */
    (xdc_Char)0x0,  /* [6732] */
    (xdc_Char)0x69,  /* [6733] */
    (xdc_Char)0x73,  /* [6734] */
    (xdc_Char)0x72,  /* [6735] */
    (xdc_Char)0x33,  /* [6736] */
    (xdc_Char)0x30,  /* [6737] */
    (xdc_Char)0x49,  /* [6738] */
    (xdc_Char)0x32,  /* [6739] */
    (xdc_Char)0x43,  /* [6740] */
    (xdc_Char)0x32,  /* [6741] */
    (xdc_Char)0x68,  /* [6742] */
    (xdc_Char)0x6e,  /* [6743] */
    (xdc_Char)0x0,  /* [6744] */
    (xdc_Char)0x69,  /* [6745] */
    (xdc_Char)0x73,  /* [6746] */
    (xdc_Char)0x72,  /* [6747] */
    (xdc_Char)0x31,  /* [6748] */
    (xdc_Char)0x37,  /* [6749] */
    (xdc_Char)0x55,  /* [6750] */
    (xdc_Char)0x53,  /* [6751] */
    (xdc_Char)0x42,  /* [6752] */
    (xdc_Char)0x53,  /* [6753] */
    (xdc_Char)0x53,  /* [6754] */
    (xdc_Char)0x49,  /* [6755] */
    (xdc_Char)0x4e,  /* [6756] */
    (xdc_Char)0x54,  /* [6757] */
    (xdc_Char)0x68,  /* [6758] */
    (xdc_Char)0x6e,  /* [6759] */
    (xdc_Char)0x0,  /* [6760] */
    (xdc_Char)0x69,  /* [6761] */
    (xdc_Char)0x73,  /* [6762] */
    (xdc_Char)0x72,  /* [6763] */
    (xdc_Char)0x31,  /* [6764] */
    (xdc_Char)0x38,  /* [6765] */
    (xdc_Char)0x55,  /* [6766] */
    (xdc_Char)0x53,  /* [6767] */
    (xdc_Char)0x42,  /* [6768] */
    (xdc_Char)0x49,  /* [6769] */
    (xdc_Char)0x4e,  /* [6770] */
    (xdc_Char)0x54,  /* [6771] */
    (xdc_Char)0x30,  /* [6772] */
    (xdc_Char)0x68,  /* [6773] */
    (xdc_Char)0x6e,  /* [6774] */
    (xdc_Char)0x0,  /* [6775] */
    (xdc_Char)0x69,  /* [6776] */
    (xdc_Char)0x73,  /* [6777] */
    (xdc_Char)0x72,  /* [6778] */
    (xdc_Char)0x31,  /* [6779] */
    (xdc_Char)0x39,  /* [6780] */
    (xdc_Char)0x55,  /* [6781] */
    (xdc_Char)0x53,  /* [6782] */
    (xdc_Char)0x42,  /* [6783] */
    (xdc_Char)0x49,  /* [6784] */
    (xdc_Char)0x4e,  /* [6785] */
    (xdc_Char)0x54,  /* [6786] */
    (xdc_Char)0x31,  /* [6787] */
    (xdc_Char)0x68,  /* [6788] */
    (xdc_Char)0x6e,  /* [6789] */
    (xdc_Char)0x0,  /* [6790] */
    (xdc_Char)0x69,  /* [6791] */
    (xdc_Char)0x73,  /* [6792] */
    (xdc_Char)0x72,  /* [6793] */
    (xdc_Char)0x37,  /* [6794] */
    (xdc_Char)0x32,  /* [6795] */
    (xdc_Char)0x55,  /* [6796] */
    (xdc_Char)0x41,  /* [6797] */
    (xdc_Char)0x52,  /* [6798] */
    (xdc_Char)0x54,  /* [6799] */
    (xdc_Char)0x30,  /* [6800] */
    (xdc_Char)0x49,  /* [6801] */
    (xdc_Char)0x4e,  /* [6802] */
    (xdc_Char)0x54,  /* [6803] */
    (xdc_Char)0x54,  /* [6804] */
    (xdc_Char)0x68,  /* [6805] */
    (xdc_Char)0x6e,  /* [6806] */
    (xdc_Char)0x0,  /* [6807] */
    (xdc_Char)0x69,  /* [6808] */
    (xdc_Char)0x73,  /* [6809] */
    (xdc_Char)0x72,  /* [6810] */
    (xdc_Char)0x37,  /* [6811] */
    (xdc_Char)0x33,  /* [6812] */
    (xdc_Char)0x55,  /* [6813] */
    (xdc_Char)0x41,  /* [6814] */
    (xdc_Char)0x52,  /* [6815] */
    (xdc_Char)0x54,  /* [6816] */
    (xdc_Char)0x31,  /* [6817] */
    (xdc_Char)0x49,  /* [6818] */
    (xdc_Char)0x4e,  /* [6819] */
    (xdc_Char)0x54,  /* [6820] */
    (xdc_Char)0x68,  /* [6821] */
    (xdc_Char)0x6e,  /* [6822] */
    (xdc_Char)0x0,  /* [6823] */
    (xdc_Char)0x69,  /* [6824] */
    (xdc_Char)0x73,  /* [6825] */
    (xdc_Char)0x72,  /* [6826] */
    (xdc_Char)0x37,  /* [6827] */
    (xdc_Char)0x34,  /* [6828] */
    (xdc_Char)0x55,  /* [6829] */
    (xdc_Char)0x41,  /* [6830] */
    (xdc_Char)0x52,  /* [6831] */
    (xdc_Char)0x54,  /* [6832] */
    (xdc_Char)0x32,  /* [6833] */
    (xdc_Char)0x49,  /* [6834] */
    (xdc_Char)0x4e,  /* [6835] */
    (xdc_Char)0x54,  /* [6836] */
    (xdc_Char)0x68,  /* [6837] */
    (xdc_Char)0x6e,  /* [6838] */
    (xdc_Char)0x0,  /* [6839] */
    (xdc_Char)0x69,  /* [6840] */
    (xdc_Char)0x73,  /* [6841] */
    (xdc_Char)0x72,  /* [6842] */
    (xdc_Char)0x34,  /* [6843] */
    (xdc_Char)0x34,  /* [6844] */
    (xdc_Char)0x55,  /* [6845] */
    (xdc_Char)0x41,  /* [6846] */
    (xdc_Char)0x52,  /* [6847] */
    (xdc_Char)0x54,  /* [6848] */
    (xdc_Char)0x33,  /* [6849] */
    (xdc_Char)0x49,  /* [6850] */
    (xdc_Char)0x4e,  /* [6851] */
    (xdc_Char)0x54,  /* [6852] */
    (xdc_Char)0x68,  /* [6853] */
    (xdc_Char)0x6e,  /* [6854] */
    (xdc_Char)0x0,  /* [6855] */
    (xdc_Char)0x69,  /* [6856] */
    (xdc_Char)0x73,  /* [6857] */
    (xdc_Char)0x72,  /* [6858] */
    (xdc_Char)0x34,  /* [6859] */
    (xdc_Char)0x35,  /* [6860] */
    (xdc_Char)0x55,  /* [6861] */
    (xdc_Char)0x41,  /* [6862] */
    (xdc_Char)0x52,  /* [6863] */
    (xdc_Char)0x54,  /* [6864] */
    (xdc_Char)0x34,  /* [6865] */
    (xdc_Char)0x49,  /* [6866] */
    (xdc_Char)0x4e,  /* [6867] */
    (xdc_Char)0x54,  /* [6868] */
    (xdc_Char)0x68,  /* [6869] */
    (xdc_Char)0x6e,  /* [6870] */
    (xdc_Char)0x0,  /* [6871] */
    (xdc_Char)0x69,  /* [6872] */
    (xdc_Char)0x73,  /* [6873] */
    (xdc_Char)0x72,  /* [6874] */
    (xdc_Char)0x34,  /* [6875] */
    (xdc_Char)0x36,  /* [6876] */
    (xdc_Char)0x55,  /* [6877] */
    (xdc_Char)0x41,  /* [6878] */
    (xdc_Char)0x52,  /* [6879] */
    (xdc_Char)0x54,  /* [6880] */
    (xdc_Char)0x35,  /* [6881] */
    (xdc_Char)0x49,  /* [6882] */
    (xdc_Char)0x4e,  /* [6883] */
    (xdc_Char)0x54,  /* [6884] */
    (xdc_Char)0x68,  /* [6885] */
    (xdc_Char)0x6e,  /* [6886] */
    (xdc_Char)0x0,  /* [6887] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[59] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x17a2,  /* left */
        (xdc_Bits16)0x17a7,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17b0,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17b7,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17bc,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17c5,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17cb,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17d1,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17d6,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17df,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17e3,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17ed,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17f2,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x17f9,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1802,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x180a,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1811,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1818,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x181d,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1827,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x1835,  /* left */
        (xdc_Bits16)0x1839,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x1842,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x184a,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x184f,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1861,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x186d,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x1872,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1877,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x187d,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1882,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x188d,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1893,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1899,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x18a3,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x18a7,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x18ac,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x18b1,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x17b7,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x18b7,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x18c0,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x18c4,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x18ca,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x18b1,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x18ce,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x18d2,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x18e4,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x18c0,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x18ec,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x18f1,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x18fb,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1902,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x190a,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x1914,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8034,  /* left */
        (xdc_Bits16)0x191b,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x1923,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8036,  /* left */
        (xdc_Bits16)0x192b,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8037,  /* left */
        (xdc_Bits16)0x18c4,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x1934,  /* right */
    },  /* [57] */
    {
        (xdc_Bits16)0x8039,  /* left */
        (xdc_Bits16)0x193c,  /* right */
    },  /* [58] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1ae8;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x3b;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8012;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.TimestampNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsEnabled__C, ".const:xdc_runtime_TimestampNull_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsEnabled xdc_runtime_TimestampNull_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsIncluded__C, ".const:xdc_runtime_TimestampNull_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsIncluded xdc_runtime_TimestampNull_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsMask__C, ".const:xdc_runtime_TimestampNull_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsMask xdc_runtime_TimestampNull_Module__diagsMask__C = ((CT__xdc_runtime_TimestampNull_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gateObj__C, ".const:xdc_runtime_TimestampNull_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gateObj xdc_runtime_TimestampNull_Module__gateObj__C = ((CT__xdc_runtime_TimestampNull_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gatePrms__C, ".const:xdc_runtime_TimestampNull_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gatePrms xdc_runtime_TimestampNull_Module__gatePrms__C = ((CT__xdc_runtime_TimestampNull_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__id__C, ".const:xdc_runtime_TimestampNull_Module__id__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__id xdc_runtime_TimestampNull_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerDefined__C, ".const:xdc_runtime_TimestampNull_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerDefined xdc_runtime_TimestampNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerObj__C, ".const:xdc_runtime_TimestampNull_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerObj xdc_runtime_TimestampNull_Module__loggerObj__C = ((CT__xdc_runtime_TimestampNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn0__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn0 xdc_runtime_TimestampNull_Module__loggerFxn0__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn1__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn1 xdc_runtime_TimestampNull_Module__loggerFxn1__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn2__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn2 xdc_runtime_TimestampNull_Module__loggerFxn2__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn4__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn4 xdc_runtime_TimestampNull_Module__loggerFxn4__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn8__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn8 xdc_runtime_TimestampNull_Module__loggerFxn8__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__startupDoneFxn__C, ".const:xdc_runtime_TimestampNull_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__startupDoneFxn xdc_runtime_TimestampNull_Module__startupDoneFxn__C = ((CT__xdc_runtime_TimestampNull_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__count__C, ".const:xdc_runtime_TimestampNull_Object__count__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__count xdc_runtime_TimestampNull_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__heap__C, ".const:xdc_runtime_TimestampNull_Object__heap__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__heap xdc_runtime_TimestampNull_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__sizeof__C, ".const:xdc_runtime_TimestampNull_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__sizeof xdc_runtime_TimestampNull_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__table__C, ".const:xdc_runtime_TimestampNull_Object__table__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__table xdc_runtime_TimestampNull_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.GateNull */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_GateNull_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return xdc_runtime_GateNull_Object__create__S(__obj, __osz, __aa, (xdc_runtime_GateNull___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_BIOS_RtsGateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_BIOS_RtsGateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    xdc_runtime_GateNull_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_BIOS_RtsGateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    xdc_runtime_GateNull_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return xdc_runtime_GateNull_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return xdc_runtime_GateNull_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return xdc_runtime_GateNull_enter((xdc_runtime_GateNull_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    xdc_runtime_GateNull_leave((xdc_runtime_GateNull_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a8.Cache */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_Cache_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_enable__E( xdc_Bits16 type )
{
    ti_sysbios_family_arm_a8_Cache_enable(type);
}

/* disable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_disable__E( xdc_Bits16 type )
{
    ti_sysbios_family_arm_a8_Cache_disable(type);
}

/* inv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_inv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_a8_Cache_inv(blockPtr, byteCnt, type, wait);
}

/* wb__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wb__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_a8_Cache_wb(blockPtr, byteCnt, type, wait);
}

/* wbInv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_a8_Cache_wbInv(blockPtr, byteCnt, type, wait);
}

/* wbAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbAll__E( void )
{
    ti_sysbios_family_arm_a8_Cache_wbAll();
}

/* wbInvAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInvAll__E( void )
{
    ti_sysbios_family_arm_a8_Cache_wbInvAll();
}

/* wait__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wait__E( void )
{
    ti_sysbios_family_arm_a8_Cache_wait();
}


/*
 * ======== ti.sysbios.hal.Core_CoreProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.hal.CoreNull */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Core_CoreProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_CoreNull_Module__startupDone__S();
}

/* getId__E */
xdc_UInt ti_sysbios_hal_Core_CoreProxy_getId__E( void )
{
    return ti_sysbios_hal_CoreNull_getId();
}

/* interruptCore__E */
xdc_Void ti_sysbios_hal_Core_CoreProxy_interruptCore__E( xdc_UInt coreId )
{
    ti_sysbios_hal_CoreNull_interruptCore(coreId);
}

/* lock__E */
xdc_IArg ti_sysbios_hal_Core_CoreProxy_lock__E( void )
{
    return ti_sysbios_hal_CoreNull_lock();
}

/* unlock__E */
xdc_Void ti_sysbios_hal_Core_CoreProxy_unlock__E( void )
{
    ti_sysbios_hal_CoreNull_unlock();
}

/* hwiDisable__E */
xdc_UInt ti_sysbios_hal_Core_CoreProxy_hwiDisable__E( void )
{
    return ti_sysbios_hal_CoreNull_hwiDisable();
}

/* hwiEnable__E */
xdc_UInt ti_sysbios_hal_Core_CoreProxy_hwiEnable__E( void )
{
    return ti_sysbios_hal_CoreNull_hwiEnable();
}

/* hwiRestore__E */
xdc_Void ti_sysbios_hal_Core_CoreProxy_hwiRestore__E( xdc_UInt key )
{
    ti_sysbios_hal_CoreNull_hwiRestore(key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a8.intcps.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_a8_intcps_Hwi___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_IHwi_Params), __eb);
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_HwiProxy_Args__create __args;
    __args.intNum = intNum;
    __args.hwiFxn = hwiFxn;
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_hal_Hwi_HwiProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Hwi_HwiProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_a8_intcps_Hwi_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_getFunc((ti_sysbios_family_arm_a8_intcps_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_setFunc((ti_sysbios_family_arm_a8_intcps_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_getHookContext((ti_sysbios_family_arm_a8_intcps_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_setHookContext((ti_sysbios_family_arm_a8_intcps_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_getIrp((ti_sysbios_family_arm_a8_intcps_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.timers.dmtimer.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_dmtimer_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_timers_dmtimer_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_timers_dmtimer_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_hal_Timer_TimerProxy_Handle ti_sysbios_hal_Timer_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Timer_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_hal_Timer_TimerProxy_Handle)ti_sysbios_hal_Timer_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Timer_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_timers_dmtimer_Timer_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_hal_Timer_TimerProxy_delete(ti_sysbios_hal_Timer_TimerProxy_Handle *instp)
{
    ti_sysbios_hal_Timer_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_timers_dmtimer_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Timer_TimerProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_timers_dmtimer_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_timers_dmtimer_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_timers_dmtimer_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_timers_dmtimer_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getMaxTicks((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_timers_dmtimer_Timer_setNextTick((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_dmtimer_Timer_start((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_dmtimer_Timer_stop((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_timers_dmtimer_Timer_setPeriod((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_timers_dmtimer_Timer_setPeriodMicroSecs((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getPeriod((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getCount((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_timers_dmtimer_Timer_getFreq((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_timers_dmtimer_Timer_getFunc((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_timers_dmtimer_Timer_setFunc((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_timers_dmtimer_Timer_trigger((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getExpiredCounts((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_timers_dmtimer_Timer_getExpiredTicks((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCurrentTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_timers_dmtimer_Timer_getCurrentTick((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_heaps_HeapMem_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.timers.dmtimer.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_dmtimer_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_timers_dmtimer_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_timers_dmtimer_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_knl_Clock_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_knl_Clock_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_knl_Clock_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_timers_dmtimer_Timer_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_knl_Clock_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_timers_dmtimer_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_timers_dmtimer_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_timers_dmtimer_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_timers_dmtimer_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_timers_dmtimer_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getMaxTicks((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_timers_dmtimer_Timer_setNextTick((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_dmtimer_Timer_start((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_dmtimer_Timer_stop((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_timers_dmtimer_Timer_setPeriod((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_timers_dmtimer_Timer_setPeriodMicroSecs((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getPeriod((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getCount((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_timers_dmtimer_Timer_getFreq((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_timers_dmtimer_Timer_getFunc((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_timers_dmtimer_Timer_setFunc((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_timers_dmtimer_Timer_trigger((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getExpiredCounts((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_timers_dmtimer_Timer_getExpiredTicks((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_timers_dmtimer_Timer_getCurrentTick((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_TaskSupport_getDefaultStackSize();
}


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a8.ti81xx.TimerSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_dmtimer_Timer_TimerSupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_timers_dmtimer_Timer_TimerSupportProxy_enable__E( xdc_UInt timerId, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_family_arm_a8_ti81xx_TimerSupport_enable(timerId, eb);
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerBuf_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_LoggerBuf_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_LoggerBuf_Module_GateProxy_Handle xdc_runtime_LoggerBuf_Module_GateProxy_create( const xdc_runtime_LoggerBuf_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_LoggerBuf_Module_GateProxy_Handle)xdc_runtime_LoggerBuf_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_LoggerBuf_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_LoggerBuf_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
Void xdc_runtime_LoggerBuf_Module_GateProxy_delete(xdc_runtime_LoggerBuf_Module_GateProxy_Handle *instp)
{
    xdc_runtime_LoggerBuf_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_LoggerBuf_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerBuf_Module_GateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_LoggerBuf_Module_GateProxy_enter__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_LoggerBuf_Module_GateProxy_leave__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a8.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_LoggerBuf_TimestampProxy_get32__E( void )
{
    return ti_sysbios_family_arm_a8_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_arm_a8_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_a8_TimestampProvider_getFreq(freq);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)xdc_runtime_Main_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Main_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
Void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    xdc_runtime_Main_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(__obj, __osz, __aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IHeap_Params), __eb);
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)xdc_runtime_Memory_HeapProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Memory_HeapProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* delete */
Void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    xdc_runtime_Memory_HeapProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)xdc_runtime_System_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_System_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
Void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    xdc_runtime_System_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a8.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_a8_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_arm_a8_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_a8_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_a8_intcps_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_a8_intcps_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_a8_intcps_Hwi___S1) - sizeof(ti_sysbios_family_arm_a8_intcps_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_a8_intcps_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_a8_intcps_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.timers.dmtimer.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_timers_dmtimer_Timer_Object2__ s0; char c; } ti_sysbios_timers_dmtimer_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_dmtimer_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_timers_dmtimer_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_timers_dmtimer_Timer___S1) - sizeof(ti_sysbios_timers_dmtimer_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_timers_dmtimer_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_timers_dmtimer_Timer_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.GateNull OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_GateNull_Object2__ s0; char c; } xdc_runtime_GateNull___S1;
#pragma DATA_SECTION(xdc_runtime_GateNull_Object__DESC__C, ".const:xdc_runtime_GateNull_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_GateNull_Object__DESC__C = {
    (Ptr)&xdc_runtime_GateNull_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_GateNull_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_GateNull___S1) - sizeof(xdc_runtime_GateNull_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_GateNull_Object2__), /* objSize */
    (Ptr)&xdc_runtime_GateNull_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_GateNull_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.LoggerBuf OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_LoggerBuf_Object2__ s0; char c; } xdc_runtime_LoggerBuf___S1;
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__DESC__C, ".const:xdc_runtime_LoggerBuf_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C = {
    (Ptr)&xdc_runtime_LoggerBuf_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_LoggerBuf_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_LoggerBuf___S1) - sizeof(xdc_runtime_LoggerBuf_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_LoggerBuf_Object2__), /* objSize */
    (Ptr)&xdc_runtime_LoggerBuf_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_LoggerBuf_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module __mod, const xdc_runtime_IHeap_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IHeap_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IHeap_Params), __eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module __mod, const xdc_runtime_IGateProvider_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IGateProvider_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IGateProvider_Params), __eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module __mod, const xdc_runtime_IFilterLogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IFilterLogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IFilterLogger_Params), __eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module __mod, const xdc_runtime_ILogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_ILogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_ILogger_Params), __eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_GateNull_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.a8.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a8_Cache_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.a8.Mmu SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a8_Mmu_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_a8_Mmu_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.a8.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_a8_intcps_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_a8_intcps_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_a8_intcps_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_a8_intcps_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_a8_intcps_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_a8_intcps_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_a8_intcps_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_a8_intcps_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_a8_intcps_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32814;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_a8_intcps_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_a8_intcps_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_a8_intcps_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_a8_intcps_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_a8_intcps_Hwi_Object__ *)ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_a8_intcps_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_a8_intcps_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_a8_intcps_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_a8_intcps_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_a8_intcps_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_arm_a8_intcps_Hwi_Params __prms;
    ti_sysbios_family_arm_a8_intcps_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_a8_intcps_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_a8_intcps_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_a8_intcps_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_a8_intcps_Hwi_Handle ti_sysbios_family_arm_a8_intcps_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_a8_intcps_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_Params __prms;
    ti_sysbios_family_arm_a8_intcps_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_a8_intcps_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_a8_intcps_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_a8_intcps_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_a8_intcps_Hwi_construct(ti_sysbios_family_arm_a8_intcps_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_a8_intcps_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_a8_intcps_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_a8_intcps_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_a8_intcps_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_a8_intcps_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_a8_intcps_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_a8_intcps_Hwi_destruct(ti_sysbios_family_arm_a8_intcps_Hwi_Struct *obj)
{
    ti_sysbios_family_arm_a8_intcps_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_a8_intcps_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_a8_intcps_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_a8_intcps_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_a8_intcps_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_a8_intcps_Hwi_delete(ti_sysbios_family_arm_a8_intcps_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_a8_intcps_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.a8.ti81xx.TimerSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.exc.Exception SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_exc_Exception_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32818;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__ *)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    ti_sysbios_gates_GateHwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32819;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__ *)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    ti_sysbios_gates_GateMutex_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.Cache_CacheProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Cache_CacheProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.hal.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.CoreNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_CoreNull_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.Core_CoreProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_hal_Core_CoreProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Core_CoreProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_hal_CoreNull_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32807;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__ *)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    ti_sysbios_hal_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32808;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__ *)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Timer_Args__create *__args = __aa;
    ti_sysbios_hal_Timer_Params __prms;
    ti_sysbios_hal_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Timer_Handle ti_sysbios_hal_Timer_create( xdc_Int id, ti_sysbios_hal_Timer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Timer_Params __prms;
    ti_sysbios_hal_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Timer_construct(ti_sysbios_hal_Timer_Struct *__obj, xdc_Int id, ti_sysbios_hal_Timer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Timer_destruct(ti_sysbios_hal_Timer_Struct *obj)
{
    ti_sysbios_hal_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Timer_delete(ti_sysbios_hal_Timer_Handle *instp)
{
    ti_sysbios_hal_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32821;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__ *)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *__obj, const ti_sysbios_heaps_HeapMem_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapMem_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    ti_sysbios_heaps_HeapMem_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32795;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__ *)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, __args->clockFxn, __args->timeout, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, clockFxn, timeout, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    ti_sysbios_knl_Clock_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__ *)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Event___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    ti_sysbios_knl_Event_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__ *)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Queue___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    ti_sysbios_knl_Queue_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__ *)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, __args->count, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, count, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    ti_sysbios_knl_Semaphore_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__ *)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Swi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Swi_Args__create *__args = __aa;
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, __args->swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *__obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)__obj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    ti_sysbios_knl_Swi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__ *)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Task___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, __args->fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    ti_sysbios_knl_Task_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.timers.dmtimer.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_timers_dmtimer_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_timers_dmtimer_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_timers_dmtimer_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_timers_dmtimer_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_timers_dmtimer_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_dmtimer_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_timers_dmtimer_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_timers_dmtimer_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32824;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_timers_dmtimer_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_timers_dmtimer_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_timers_dmtimer_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_timers_dmtimer_Timer_Object__ *)ti_sysbios_timers_dmtimer_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_timers_dmtimer_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_timers_dmtimer_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_timers_dmtimer_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_timers_dmtimer_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_timers_dmtimer_Timer_Args__create *__args = __aa;
    ti_sysbios_timers_dmtimer_Timer_Params __prms;
    ti_sysbios_timers_dmtimer_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_timers_dmtimer_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_timers_dmtimer_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_timers_dmtimer_Timer_Handle ti_sysbios_timers_dmtimer_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_timers_dmtimer_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_timers_dmtimer_Timer_Params __prms;
    ti_sysbios_timers_dmtimer_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_timers_dmtimer_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_timers_dmtimer_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_timers_dmtimer_Timer_construct(ti_sysbios_timers_dmtimer_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_timers_dmtimer_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_timers_dmtimer_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_timers_dmtimer_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_timers_dmtimer_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_timers_dmtimer_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_timers_dmtimer_Timer_destruct(ti_sysbios_timers_dmtimer_Timer_Struct *obj)
{
    ti_sysbios_timers_dmtimer_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_timers_dmtimer_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, *((ti_sysbios_timers_dmtimer_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_timers_dmtimer_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_timers_dmtimer_Timer_delete(ti_sysbios_timers_dmtimer_Timer_Handle *instp)
{
    ti_sysbios_timers_dmtimer_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_timers_dmtimer_Timer_TimerSupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_TimerSupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.GateNull SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_GateNull_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_GateNull_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_GateNull_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_GateNull_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_GateNull_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_GateNull_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_GateNull_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_GateNull_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_GateNull_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_GateNull_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_GateNull_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_GateNull_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_GateNull_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_GateNull_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_GateNull_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_GateNull_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_GateNull_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_GateNull_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_GateNull_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_GateNull_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32776;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_GateNull_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_GateNull_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_GateNull_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((xdc_runtime_GateNull_Object__ *)oa) + i;
    }

    if (xdc_runtime_GateNull_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_GateNull_Object__ *)xdc_runtime_GateNull_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_GateNull_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_GateNull_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_GateNull_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_GateNull_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_GateNull_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_GateNull_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_GateNull___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    xdc_runtime_GateNull_Params __prms;
    xdc_runtime_GateNull_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&xdc_runtime_GateNull_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_GateNull_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    return __newobj;
}

/* create */
xdc_runtime_GateNull_Handle xdc_runtime_GateNull_create( const xdc_runtime_GateNull_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    xdc_runtime_GateNull_Params __prms;
    xdc_runtime_GateNull_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&xdc_runtime_GateNull_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_GateNull_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    return __newobj;
}

/* construct */
void xdc_runtime_GateNull_construct(xdc_runtime_GateNull_Struct *__obj, const xdc_runtime_GateNull_Params *__paramsPtr )
{
    xdc_runtime_GateNull_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&xdc_runtime_GateNull_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_GateNull_Params), NULL);
}

/* Object__destruct__S */
xdc_Void xdc_runtime_GateNull_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_GateNull_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void xdc_runtime_GateNull_destruct(xdc_runtime_GateNull_Struct *obj)
{
    xdc_runtime_GateNull_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void xdc_runtime_GateNull_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_GateNull_Object__DESC__C, *((xdc_runtime_GateNull_Object**)instp), NULL, -1, FALSE);
    *((xdc_runtime_GateNull_Handle*)instp) = NULL;
}

/* delete */
void xdc_runtime_GateNull_delete(xdc_runtime_GateNull_Handle *instp)
{
    xdc_runtime_GateNull_Object__delete__S(instp);
}


/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.LoggerBuf SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__S( void )
{
    return xdc_runtime_LoggerBuf_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerBuf_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32778;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_LoggerBuf_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_LoggerBuf_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((xdc_runtime_LoggerBuf_Object__ *)oa) + i;
    }

    if (xdc_runtime_LoggerBuf_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_LoggerBuf_Object__ *)xdc_runtime_LoggerBuf_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_LoggerBuf_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_LoggerBuf___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    xdc_runtime_LoggerBuf_Params __prms;
    xdc_runtime_LoggerBuf_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_LoggerBuf_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E(__newobj, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, __newobj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
xdc_runtime_LoggerBuf_Handle xdc_runtime_LoggerBuf_create( const xdc_runtime_LoggerBuf_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    xdc_runtime_LoggerBuf_Params __prms;
    xdc_runtime_LoggerBuf_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_LoggerBuf_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E(__newobj, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, __newobj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void xdc_runtime_LoggerBuf_construct(xdc_runtime_LoggerBuf_Struct *__obj, const xdc_runtime_LoggerBuf_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    xdc_runtime_LoggerBuf_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_LoggerBuf_Params), __eb);
    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E((xdc_Ptr)__obj, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void xdc_runtime_LoggerBuf_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void xdc_runtime_LoggerBuf_destruct(xdc_runtime_LoggerBuf_Struct *obj)
{
    xdc_runtime_LoggerBuf_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void xdc_runtime_LoggerBuf_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, *((xdc_runtime_LoggerBuf_Object**)instp), (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, 0, FALSE);
    *((xdc_runtime_LoggerBuf_Handle*)instp) = NULL;
}

/* delete */
void xdc_runtime_LoggerBuf_delete(xdc_runtime_LoggerBuf_Handle *instp)
{
    xdc_runtime_LoggerBuf_Object__delete__S(instp);
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_LoggerBuf_TimestampProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.TimestampNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_TimestampNull_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr97gpio0hn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr33gpio2hn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[1]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr7NMIhn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[2]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle semaPIMRunState = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle semaUART1 = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[1]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle timer3 = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[3]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle timer4 = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[4]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle timer6 = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[5]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle timer7 = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[6]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle taskPIMRun = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle rtcint = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[7]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr79eQEP0INThn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[8]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr88eQEP1INThn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[9]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr89eQEP2INThn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[10]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr96gpio0hn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[11]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr98gpio1hn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[12]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr70I2C0hn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[13]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr57gpiohn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[14]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr99gpio1hn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[15]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr71I2C1hn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[16]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr30I2C2hn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[17]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr17USBSSINThn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[18]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr18USBINT0hn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[19]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr19USBINT1hn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[20]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr72UART0INTThn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[21]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr73UART1INThn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[22]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr74UART2INThn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[23]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr44UART3INThn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[24]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr45UART4INThn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[25]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle isr46UART5INThn = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[26]);

