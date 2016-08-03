/*
 * Do not modify this file; it is automatically generated from the template
 * linkcmd.xdt in the ti.targets.elf package and will be overwritten.
 */

/*
 * put '"'s around paths because, without this, the linker
 * considers '-' as minus operator, not a file name character.
 */


-l"C:\ti\workspace_v6_0\TIRTOSTTypical\Debug\configPkg\package\cfg\app_pea8fnv.oea8fnv"
-l"C:\ti\workspace_v6_0\TIRTOSTTypical\src\sysbios\sysbios.aea8fnv"
-l"C:\ti\bios_6_42_02_29\packages\ti\targets\arm\rtsarm\lib\ti.targets.arm.rtsarm.aea8fnv"
-l"C:\ti\bios_6_42_02_29\packages\ti\targets\arm\rtsarm\lib\boot.aea8fnv"
-l"C:\ti\bios_6_42_02_29\packages\ti\targets\arm\rtsarm\lib\auto_init.aea8fnv"

--retain="*(xdc.meta)"

/* C6x Elf symbols */
--symbol_map __TI_STACK_SIZE=__STACK_SIZE
--symbol_map __TI_STACK_BASE=__stack
--symbol_map _stack=__stack



--args 0x0
-heap  0x0
-stack 0x2000

MEMORY
{
    SRAM_LO (RWX) : org = 0x402f0000, len = 0x400
    SRAM_HI (RWX) : org = 0x402f0400, len = 0xfc00
    OCMC_SRAM (RWX) : org = 0x40300000, len = 0x10000
    DDR2 : org = 0x80000000, len = 0x10000000
}

/*
 * Linker command file contributions from all loaded packages:
 */

/* Content from xdc.services.global (null): */

/* Content from xdc (null): */

/* Content from xdc.corevers (null): */

/* Content from xdc.shelf (null): */

/* Content from xdc.services.spec (null): */

/* Content from xdc.services.intern.xsr (null): */

/* Content from xdc.services.intern.gen (null): */

/* Content from xdc.services.intern.cmd (null): */

/* Content from xdc.bld (null): */

/* Content from ti.targets (null): */

/* Content from ti.targets.arm.elf (null): */

/* Content from xdc.rov (null): */

/* Content from xdc.runtime (null): */

/* Content from ti.targets.arm.rtsarm (null): */

/* Content from ti.sysbios.interfaces (null): */

/* Content from ti.sysbios.family (null): */

/* Content from ti.sysbios.family.arm (ti/sysbios/family/arm/linkcmd.xdt): */
--retain "*(.vecs)"

/* Content from xdc.services.getset (null): */

/* Content from ti.sysbios.family.arm.a8 (null): */

/* Content from ti.sysbios.rts (ti/sysbios/rts/linkcmd.xdt): */

/* Content from xdc.runtime.knl (null): */

/* Content from ti.catalog.arm.cortexa8 (null): */

/* Content from ti.catalog.peripherals.hdvicp2 (null): */

/* Content from ti.catalog (null): */

/* Content from xdc.platform (null): */

/* Content from xdc.cfg (null): */

/* Content from ti.platforms.beaglebone (null): */

/* Content from ti.sysbios (null): */

/* Content from ti.sysbios.hal (null): */

/* Content from ti.sysbios.knl (null): */

/* Content from ti.sysbios.family.arm.exc (null): */

/* Content from ti.sysbios.family.arm.a8.intcps (ti/sysbios/family/arm/a8/intcps/linkcmd.xdt): */
ti_sysbios_family_arm_a8_intcps_Hwi_intc = 0x48200000;

/* Content from ti.sysbios.gates (null): */

/* Content from ti.sysbios.xdcruntime (null): */

/* Content from ti.sysbios.heaps (null): */

/* Content from ti.sysbios.timers.dmtimer (null): */

/* Content from ti.sysbios.family.arm.a8.ti81xx (null): */

/* Content from ti.sysbios.utils (null): */

/* Content from configPkg (null): */

/* Content from xdc.services.io (null): */


/*
 * symbolic aliases for static instance objects
 */
xdc_runtime_Startup__EXECFXN__C = 1;
xdc_runtime_Startup__RESETFXN__C = 1;
TSK_idle = ti_sysbios_knl_Task_Object__table__V + 76;

SECTIONS
{
    .text: load >> DDR2
    .stack: load > DDR2
    GROUP: load > DDR2
    {
        .bss:
        .neardata:
        .rodata:
    }
    .binit: load > DDR2
    .cinit: load > DDR2
    .init_array: load > DDR2
    .const: load >> DDR2
    .data: load >> DDR2
    .fardata: load >> DDR2
    .switch: load >> DDR2
    .sysmem: load > DDR2
    .far: load >> DDR2
    .args: load > DDR2 align = 0x4, fill = 0 {_argsize = 0x0; }
    .cio: load >> DDR2
    .ARM.exidx: load > DDR2
    .ARM.extab: load >> DDR2
    .vecs: load > DDR2
    ti.sysbios.family.arm.a8.mmuTableSection: load > DDR2, type = NOINIT
    xdc.meta: load > DDR2, type = COPY

}
