/*
 * PIM.h
 *
 *  Created on: Jun 25, 2015
 *      Author: RobsKalis
 */
#ifndef PIM_H_
#define PIM_H_

#include <xdc/std.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>
#include <xdc/cfg/global.h> 				//header file for statically defined objects/handles

#include "soc_AM335x.h"
#include <interrupt.h>
#include "cpu.h"
#include <xdc/std.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include "gpio_v2.h"
#include <string.h>
#include <clock.h>

#include <beaglebone.h>
#include <uartStdio.h>
#include <uart_irda_cir.h>

#include "cache.h"
#include "cp15.h"
#include "mmu.h"
#include "dmtimer.h"
#include "pin_mux.h"
#include "rtc.h"
#include "AM335X_device.h"
#include "event.h"

#include "hsi2c.h"
#include "hw_hsi2c.h"
#include "ecap.h"
#include "hw_cm_per.h"
#include "hw_control_AM335x.h"


#include "demoi2c.h"



#define GPIO_OUT_ACTIVE                 (1)
#define GPIO_OUT_INACTIVE               (0)
#define GPIO_IN_ACTIVE 					(0)
#define GPIO_IN_INACTIVE 				(1)

#define GPIO0_DATA_PORT           (SOC_GPIO_0_REGS)
#define GPIO1_DATA_PORT           (SOC_GPIO_1_REGS)
#define GPIO2_DATA_PORT           (SOC_GPIO_2_REGS)

#define GPIO1_29_IN_LAUNCH     (29) //bb pin P8.26 MODE 7
#define GPIO1_15_OUT_CLUTCH    (15) //bb pin P8.15 MODE 7
#define GPIO0_27_OUT_MOTOR     (27) //bb pin P8.17 MODE 7
#define GPIO1_12_IN_SW_V3      (12) //bb pin P8.12 MODE 7
#define GPIO0_26_IN_SW_V2      (26) //bb pin P8.14 MODE 7
#define GPIO1_14_IN_SW_V1      (14) //bb pin P8.16 MODE 7
#define GPIO1_13_IN_SW_S0      (13) //bb pin P8.11 MODE 7


#define GPIO2_2_IN_TIMER4_CLK      (2) //bb pin P8.7 MODE 2
#define GPIO2_4_IN_TIMER6_CLK      (4) //bb pin P8.10 MODE 2
#define GPIO2_3_IN_TIMER7_CLK      (3) //bb pin P8.8 MODE 2

#define GPIO1_16_OUT_PULSE     (16) //bb pin P9.15 MODE 7
#define GPIO1_17_OUT_ERROR      (17) //bb pin P9.23 MODE 7

#define UART0_TXD_OUT_NUMBER     (11) // MODE 0 - UART0_TXD/SPI1 GPIO1_11 bb J1.5
#define UART0_RXD_IN_NUMBER      (10) // MODE 0 - UART0_RXD/SPI1 GPIO1_10 bb J1.4

#define ECAP0_IN				(0)	// MODE 0 ECAP0_IN bb pin P9.42 (AKA GPIO0_7 mode 7 am3358 C18)
#define ECAP1_IN				(0)	// MODE 3 ECAP1_IN bb pin P9.42 (AKA I2C0_SCL mode 0 am3358 pin C6)
#define ECAP2_IN				(0)	// MODE 4 ECAP2_IN bb pin P9.28 (AKA SPI1_CS0 mode 3 am3358 pin C12)
#define I2CEEPROM0				(0x50) // eeprom address

/*******************************************************************************
**                     EXTERNAL FUNCTION DECLARATIONS
*******************************************************************************/
extern void ECAPSetEvtCaptureRegister(unsigned int,unsigned int,unsigned int );
extern void initAllPinsPorts(void);
static void initPeripheralClocks(void);
extern void initEcap(void);
extern void isr31eCAP0INT(UArg arg);
extern void isr47eCAP1INT(UArg arg);
extern void isr62eCAP2INT(UArg arg);
extern void isr57gpio(UArg arg);
extern void isr96gpio0(UArg arg);
extern void isr97gpio0(UArg arg);
extern void isr98gpio1(UArg arg);
extern void isr99gpio1(UArg arg);
extern void isr32gpio2(UArg arg);
extern void isr33gpio2(UArg arg);

extern void isr72UART0INT(UArg arg);
extern void isr73UART1INT(UArg arg);
extern void isr74UART2INT(UArg arg);
extern void isr44UART3INT(UArg arg);
extern void isr45UART4INT(UArg arg);
extern void isr46UART5INT(UArg arg);

extern void isr7NMI(UArg arg);
extern void isr40PRUI2C0(void);
extern void isr70I2C0(void);
extern void isr71I2C1(UArg arg);
extern void isr30I2C2(UArg arg);
extern void isr17USBSSINT(UArg arg);
extern void isr18USBINT0(UArg arg);
extern void isr19USBINT1(UArg arg);

extern void isrTimer0(UArg arg);
extern void isrTimer1(UArg arg);
extern void isrTimer2(UArg arg);
extern void isrTimer3(UArg arg);
extern void isrTimer4(UArg arg);
extern void isrTimer5(UArg arg);
extern void isrTimer6(UArg arg);
extern void isrTimer7(UArg arg);

extern void isr79eQEP0INT(UArg arg);
extern void isr88eQEP1INT(UArg arg);
extern void isr89eQEP2INT(UArg arg);

extern void isrfnRTCInt(void);
extern void initHREG(unsigned int, unsigned int, unsigned int);
extern void timerSetUp(unsigned int);
extern void initAllTimers(void);
extern void initRTC(void);
extern void timerInterruptsInit(unsigned int);
extern void timerIntRegisterSet(unsigned int);
extern void timerConfig(unsigned int);
extern void timerStart(unsigned int);
extern void timerStop(unsigned int);
extern void timerResetCounts(void);
//extern void myDMTimerInit(void);
#define TIMER_INITIAL_COUNT             (0x0u)
#define TIMER_RLD_COUNT                 (0x0u)
extern void timerPinMuxSetup(unsigned int, unsigned int); //
extern void timerDirModeSet(unsigned int, unsigned int,unsigned int);
extern void clearAllQEPInts(void);
//extern void PimMainIdle(void);
/*******************************************************************************
**                     GENERAL VARIABLES
*******************************************************************************/
static unsigned int results=0;
/*******************************************************************************
**                     GPIO VARIABLES
*******************************************************************************/
static unsigned int ptrGPIO0A_PortVal=0;
static unsigned int ptrGPIO0B_PortVal=0;
static unsigned int ptrGPIO1A_PortVal=0;
static unsigned int ptrGPIO1B_PortVal=0;
static unsigned int ptrGPIO2A_PortVal=0;
static unsigned int ptrGPIO2B_PortVal=0;

/*******************************************************************************
**                    ECAP VARIABLES
*******************************************************************************/
static unsigned int CAPTURE_EVENT_1=0;
static unsigned int CAPTURE_EVENT_2=0;
static unsigned int CAPTURE_EVENT_3=0;
static unsigned int CAPTURE_EVENT_4=0;
/*******************************************************************************
**                     EXTERNAL TASKS DECLARATIONS
*******************************************************************************/
//extern void taskfnGPIO1(void);
extern void taskfnPIMRun(void);
extern void PIMRun(void);
extern void PULSE_OUT_VOL1(unsigned int);
extern void taskfnprocessUartInput(unsigned int);
extern void UARTProcessInput(unsigned int);


/*********************************************************************************
**                   I2C INTERNAL MACRO DEFINITION
*********************************************************************************/
/* Address of CAT24C256 E2PROM */
#define I2C_SLAVE_ADDR             (0x50u)

/* Higher byte address(i.eA8-A15) */
#define EPROM_ADDR0_MSB            (0x00u)

/* Lower byte address (i.e A0-A7) */
#define EPROM_ADDR0_LSB            (0x00u)

/*******************************************************************************
**                  I2C INTERNAL FUNCTION PROTOTYPE
*******************************************************************************/
static void initI2CEE(void);
extern void I2CDMAInteruptSetup(unsigned int baseAdd);
extern void I2CSlaveAdressCounterSetup(unsigned int baseAdd, unsigned int slaveAdd, unsigned int count);




volatile unsigned char dataFromSlaveAr[I2C_INSTANCE][2];
volatile unsigned char dataToSlaveAr[I2C_INSTANCE][3];
volatile unsigned int tCountAr[I2C_INSTANCE];
volatile unsigned int rCountAr[I2C_INSTANCE];
volatile unsigned int flagAr[I2C_INSTANCE] = {1, 1, 1};
volatile unsigned int numOfBytesAr[I2C_INSTANCE];



void I2CEdmaIsr(void);
void I2CEdmaErrIsr(void);
//static void SetupI2C(void);
static void SetupEdma(void);
static void EpromRead(void);
//static void CleanUpInterrupts(void);
//static void SetupI2CReception(int dcount);
static void RegisterEdma3Interrupts(void);
static void I2CEdmaReceiveConfig(unsigned int address);
static void I2CEdmaTransmitConfig(unsigned int address);
static void I2CCheck(void);
/*******************************************************************************
**               I2C INTERNAL VARIABLE DEFINITION
*******************************************************************************/
volatile int error = 0;
unsigned char destBuff[50];
volatile unsigned int flag = 1;
unsigned char srcBuff[2]  = {EPROM_ADDR0_MSB, EPROM_ADDR0_LSB};

volatile unsigned int tCount;
volatile unsigned int rCount;
//volatile unsigned int flag = 1;
volatile unsigned int numOfBytes;
volatile unsigned char dataToSlave[2];
//volatile unsigned char dataFromSlave[50];
volatile unsigned char I2Cinstance=0;
/*******************************************************************************
**                      timers
*******************************************************************************/
unsigned int pinReg;
unsigned int tmrStepVary = FALSE;
unsigned int tmr2Flag = FALSE;
volatile  unsigned int tmr4Flag = FALSE;
/*
 * Each Overflow represents a count of 0xFFFFFFFF = 4,294,967,295
 */
static unsigned int timer0OverflowCount =0;
static unsigned int timer1OverflowCount =0;
static unsigned int timer2OverflowCount =0;
static unsigned int timer3OverflowCount =0;
static unsigned int timer4OverflowCount =0;
static unsigned int timer5OverflowCount =0;
static unsigned int timer6OverflowCount =0;
static unsigned int timer7OverflowCount =0;
/*
 * Run End Counter value - max is 0xFFFFFFFF = 4,294,967,295.
 * Use with overflow count (if any) for total run count
 */
static unsigned int timer0RunEndCount=0;
static unsigned int timer1RunEndCount=0;
 static unsigned int timer2RunEndCount=0;
 static unsigned int timer3RunEndCount=0;
 static unsigned int timer4RunEndCount=0;
 static unsigned int timer5RunEndCount=0;
 static unsigned int timer6RunEndCount=0;
 static unsigned int timer7RunEndCount=0;




unsigned int timerCount[10] =
						{
							0xFFF00000u,
							0xFFE00000u,
							0xFFC00000u,
							0xFFA00000u,
							0xFF800000u,
							0xFF600000u,
							0xFF400000u,
							0xFF200000u,
							0xFF000000u,
							0xFD000000u,
						};

/************************************************************************************
 *                                  PIM RUN DATA
 ************************************************************************************/
 struct PimState
 {
    int id;
    char StateNmae[30];
};

 struct PimState PimState1[] =
 {
 		{ 0, { "RESET" }}
 		,{ 1, { "RETRACTING" } }
 		,{ 2, { "S0-HOME FOUND" } }
 		,{ 3, { "LAUNCHED" } }
 		,{ 4, { "MEASURING" } }
 		,{ 5, { "V1" } }
 		,{ 6, { "V2" } }
 		,{ 7, { "V3" } }
 		,{ 8, { "ERROR-CLUTCH" } }
 		,{ 9, { "ERROR-SENSOR" } }
 		,{ 10, { "FINISHED" } }
 };

 static struct PimState PimCurrentState = { 0, { "RESET" }};

/*******************************************************************************
** The variable which indicates whether I2C slide is active.
*/
unsigned int I2CDemoFlag = FALSE;
unsigned int rtcSetFlag = FALSE;
unsigned int rtcSecUpdate = FALSE;
static char UARTinput1[256];
static unsigned int UARTCurrentPosition = 0;
unsigned int PulseOutWidth = 0x0025ce08; //approx 20ms
/********************************************uart defs********************************
 *
 */
#define BAUD_RATE_115200           (115200u)
#define UART_MODULE_INPUT_CLK      (48000000u)

#define START_ADDR_DDR             (0x80000000u)
#define START_ADDR_DEV             (0x44000000u)
#define START_ADDR_OCMC            (0x40300000u)
#define NUM_SECTIONS_DDR           (512u)
#define NUM_SECTIONS_DEV           (960u)
#define NUM_SECTIONS_OCMC          (1u)

#define UART_INSTANCE_BASE_ADD     (SOC_UART_0_REGS)
#define UART_INSTANCE_INT_NUM      (SYS_INT_UART0INT)

/* Baud Rates of UART for communication. */
#define BAUD_RATE_115200          (115200u)
#define BAUD_RATE_128000          (128000u)
#define BAUD_RATE_230400          (230400u)
#define BAUD_RATE_460800          (460800u)
#define BAUD_RATE_921600          (921600u)
#define APP_EXIT                  (FALSE)
#define APP_CONTINUE              (TRUE)
#define NUM_TX_STRINGS            (2)


static unsigned int UartUserInputGet(unsigned int *baudRate,
                                     unsigned int *lineCharConfig);
static void UartCustomizeSettings(unsigned int *baudRate,
                                  unsigned int *lineCharConfig);
static void UartConfigure(unsigned int baudRate, unsigned int lineCharConfig);
static void UartLineCharacSet(unsigned int lineCharConfig);
static void UartBaudRateSet(unsigned int baudRate);
static void MMUConfigAndEnable(void);
static void UARTINTCConfigure(void);
static void UartFIFOConfigure(void);
static void IsrUARTCheck(void);

/*****************************************************************************
**                RTC LOCAL MACRO DEFINITIONS
*****************************************************************************/

#define MASK_HOUR            (0xFF000000u)
#define MASK_MINUTE          (0x00FF0000u)
#define MASK_SECOND          (0x0000FF00u)
#define MASK_MERIDIEM        (0x000000FFu)

#define HOUR_SHIFT           (24)
#define MINUTE_SHIFT         (16)
#define SECOND_SHIFT         (8)

#define MASK_DAY             (0xFF000000u)
#define MASK_MONTH           (0x00FF0000u)
#define MASK_YEAR            (0x0000FF00u)
#define MASK_DOTW            (0x000000FFu)

#define DAY_SHIFT            (24)
#define MONTH_SHIFT          (16)
#define YEAR_SHIFT           (8)

unsigned int userCalendar = 0;
unsigned int userTime = 0;
/******************************************************************************
**               RTC LOCAL FUNCTION PROTOTYPES
******************************************************************************/

static void CalendarResolve(unsigned int calendarValue);
static unsigned int intToASCII(unsigned char byte);
static void TimeResolve(unsigned int timeValue);
static unsigned int UserCalendarInfoGet(void);
static unsigned int UserTimeInfoGet(void);
static void RTCAINTCConfigure(void);



#endif /* PIM_H_ */
