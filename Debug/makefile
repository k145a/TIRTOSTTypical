################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.4

ORDERED_OBJS += \
"./am335x_clock_data.obj" \
"./cache.obj" \
"./clock.obj" \
"./cp15.obj" \
"./cpu.obj" \
"./dmtimer.obj" \
"./ecap.obj" \
"./eeprom.obj" \
"./gpio.obj" \
"./gpio_v2.obj" \
"./hs_mmcsd_rw.obj" \
"./hsi2c.obj" \
"./hsi2cMaster.obj" \
"./interrupt.obj" \
"./main.obj" \
"./mmu.obj" \
"./rtc.obj" \
"./sysdelay.obj" \
"./uart.obj" \
"./uartConsole.obj" \
"./uart_irda_cir.obj" \
"./usb.obj" \
$(GEN_CMDS__FLAG) \
-l"libc.a" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
TIRTOSTTypical.out \

EXE_OUTPUTS__QUOTED += \
"TIRTOSTTypical.out" \

BIN_OUTPUTS += \
TIRTOSTTypical.hex \

BIN_OUTPUTS__QUOTED += \
"TIRTOSTTypical.hex" \


# All Target
all: TIRTOSTTypical.out

# Tool invocations
TIRTOSTTypical.out: $(OBJS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.4/bin/armcl" -mv7A8 --code_state=32 --abi=eabi -me -g --define=am3359 --display_error_number --diag_warning=225 --diag_wrap=off -z -m"TIRTOSTTypical.map" --heap_size=0x800 --stack_size=0x800 -i"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.4/lib" -i"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.4/include" --reread_libs --define=A8_CORE=1 --warn_sections --display_error_number --diag_wrap=off --xml_link_info="TIRTOSTTypical_linkInfo.xml" --rom_model -o "TIRTOSTTypical.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

TIRTOSTTypical.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: ARM Hex Utility'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.4/bin/armhex"  -o "TIRTOSTTypical.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(GEN_MISC_FILES__QUOTED)$(EXE_OUTPUTS__QUOTED)$(GEN_FILES__QUOTED)$(BIN_OUTPUTS__QUOTED)$(GEN_OPTS__QUOTED)$(GEN_CMDS__QUOTED)
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-$(RM) "am335x_clock_data.pp" "cache.pp" "clock.pp" "cpu.pp" "dmtimer.pp" "ecap.pp" "eeprom.pp" "gpio.pp" "gpio_v2.pp" "hs_mmcsd_rw.pp" "hsi2c.pp" "hsi2cMaster.pp" "interrupt.pp" "main.pp" "mmu.pp" "rtc.pp" "sysdelay.pp" "uart.pp" "uartConsole.pp" "uart_irda_cir.pp" "usb.pp" 
	-$(RM) "am335x_clock_data.obj" "cache.obj" "clock.obj" "cp15.obj" "cpu.obj" "dmtimer.obj" "ecap.obj" "eeprom.obj" "gpio.obj" "gpio_v2.obj" "hs_mmcsd_rw.obj" "hsi2c.obj" "hsi2cMaster.obj" "interrupt.obj" "main.obj" "mmu.obj" "rtc.obj" "sysdelay.obj" "uart.obj" "uartConsole.obj" "uart_irda_cir.obj" "usb.obj" 
	-$(RM) "cp15.pp" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

