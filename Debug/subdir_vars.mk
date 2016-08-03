################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CFG_SRCS += \
../app.cfg 

ASM_SRCS += \
../cp15.asm 

C_SRCS += \
../am335x_clock_data.c \
../cache.c \
../clock.c \
../cpu.c \
../dmtimer.c \
../ecap.c \
../eeprom.c \
../gpio.c \
../gpio_v2.c \
../hs_mmcsd_rw.c \
../hsi2c.c \
../hsi2cMaster.c \
../interrupt.c \
../main.c \
../mmu.c \
../rtc.c \
../sysdelay.c \
../uart.c \
../uartConsole.c \
../uart_irda_cir.c \
../usb.c 

OBJS += \
./am335x_clock_data.obj \
./cache.obj \
./clock.obj \
./cp15.obj \
./cpu.obj \
./dmtimer.obj \
./ecap.obj \
./eeprom.obj \
./gpio.obj \
./gpio_v2.obj \
./hs_mmcsd_rw.obj \
./hsi2c.obj \
./hsi2cMaster.obj \
./interrupt.obj \
./main.obj \
./mmu.obj \
./rtc.obj \
./sysdelay.obj \
./uart.obj \
./uartConsole.obj \
./uart_irda_cir.obj \
./usb.obj 

ASM_DEPS += \
./cp15.pp 

C_DEPS += \
./am335x_clock_data.pp \
./cache.pp \
./clock.pp \
./cpu.pp \
./dmtimer.pp \
./ecap.pp \
./eeprom.pp \
./gpio.pp \
./gpio_v2.pp \
./hs_mmcsd_rw.pp \
./hsi2c.pp \
./hsi2cMaster.pp \
./interrupt.pp \
./main.pp \
./mmu.pp \
./rtc.pp \
./sysdelay.pp \
./uart.pp \
./uartConsole.pp \
./uart_irda_cir.pp \
./usb.pp 

GEN_MISC_DIRS += \
./configPkg/ 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_OPTS += \
./configPkg/compiler.opt 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt 

GEN_FILES__QUOTED += \
"configPkg\linker.cmd" \
"configPkg\compiler.opt" 

GEN_MISC_DIRS__QUOTED += \
"configPkg\" 

C_DEPS__QUOTED += \
"am335x_clock_data.pp" \
"cache.pp" \
"clock.pp" \
"cpu.pp" \
"dmtimer.pp" \
"ecap.pp" \
"eeprom.pp" \
"gpio.pp" \
"gpio_v2.pp" \
"hs_mmcsd_rw.pp" \
"hsi2c.pp" \
"hsi2cMaster.pp" \
"interrupt.pp" \
"main.pp" \
"mmu.pp" \
"rtc.pp" \
"sysdelay.pp" \
"uart.pp" \
"uartConsole.pp" \
"uart_irda_cir.pp" \
"usb.pp" 

OBJS__QUOTED += \
"am335x_clock_data.obj" \
"cache.obj" \
"clock.obj" \
"cp15.obj" \
"cpu.obj" \
"dmtimer.obj" \
"ecap.obj" \
"eeprom.obj" \
"gpio.obj" \
"gpio_v2.obj" \
"hs_mmcsd_rw.obj" \
"hsi2c.obj" \
"hsi2cMaster.obj" \
"interrupt.obj" \
"main.obj" \
"mmu.obj" \
"rtc.obj" \
"sysdelay.obj" \
"uart.obj" \
"uartConsole.obj" \
"uart_irda_cir.obj" \
"usb.obj" 

ASM_DEPS__QUOTED += \
"cp15.pp" 

C_SRCS__QUOTED += \
"../am335x_clock_data.c" \
"../cache.c" \
"../clock.c" \
"../cpu.c" \
"../dmtimer.c" \
"../ecap.c" \
"../eeprom.c" \
"../gpio.c" \
"../gpio_v2.c" \
"../hs_mmcsd_rw.c" \
"../hsi2c.c" \
"../hsi2cMaster.c" \
"../interrupt.c" \
"../main.c" \
"../mmu.c" \
"../rtc.c" \
"../sysdelay.c" \
"../uart.c" \
"../uartConsole.c" \
"../uart_irda_cir.c" \
"../usb.c" 

GEN_CMDS__FLAG += \
-l"./configPkg/linker.cmd" 

GEN_OPTS__FLAG += \
--cmd_file="./configPkg/compiler.opt" 

ASM_SRCS__QUOTED += \
"../cp15.asm" 


