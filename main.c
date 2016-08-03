#include "PIM.h"

void UARTSend(const unsigned char *pucBuffer, unsigned long ulCount);
void initUart(void);
static void RTCIsr(void);
static void Delay(unsigned int count);

void blinkLED(void);
void blinkLED(void) {
	//**************** Check enabling of LED pin ****************
	/* Driving a logic HIGH on the GPIO pin. */
	GPIOPinWrite(GPIO1_DATA_PORT,
	GPIO1_17_OUT_ERROR,
	GPIO_IN_ACTIVE);

	// Delay(0x000000ff); //fFFFF

	/* Driving a logic LOW on the GPIO pin. */
	GPIOPinWrite(GPIO1_DATA_PORT,
	GPIO1_17_OUT_ERROR,
	GPIO_IN_INACTIVE);

	//Delay(0x3FFFF);
}
void blinkLED(void);
void PULSE_OUT_VOL1(unsigned int PulseWidth) {
	//**************** Check enabling of LED pin ****************
	/* Driving a logic HIGH on the GPIO pin. */
	GPIOPinWrite(GPIO1_DATA_PORT,
	GPIO1_16_OUT_PULSE,
	GPIO_IN_ACTIVE);

	Delay(PulseWidth); //fFFFF

	/* Driving a logic LOW on the GPIO pin. */
	GPIOPinWrite(GPIO1_DATA_PORT,
	GPIO1_16_OUT_PULSE,
	GPIO_IN_INACTIVE);

	Delay(PulseWidth);
}
void ResetIO(void);
void ResetIO() {

	GPIOPinWrite(GPIO1_DATA_PORT, GPIO1_15_OUT_CLUTCH, GPIO_OUT_INACTIVE);
	GPIOPinWrite(GPIO0_DATA_PORT, GPIO0_27_OUT_MOTOR, GPIO_OUT_INACTIVE);
	GPIOPinWrite(GPIO1_DATA_PORT, GPIO1_16_OUT_PULSE, GPIO_OUT_ACTIVE);
	GPIOPinWrite(GPIO1_DATA_PORT, GPIO1_17_OUT_ERROR, GPIO_OUT_ACTIVE);

	//Delay(0x3FFFF);
}

/******************************************************************************
 **              GLOBAL VARIABLE DEFINITIONS
 ******************************************************************************/
unsigned char welcome[] =
		"\r\n\r\nStarterWare AM335X UART Interrupt application.\r\n";
unsigned char enter[] =
		"Please enter 8 bytes. They will echoed back individually.\r\n";
volatile unsigned int numRdBytesISR = 0;

/* A flag used to signify the application to transmit data to UART TX FIFO. */
volatile unsigned int txFIFOEmptyFlag = FALSE;

/* This keeps a count of the number of strings transferred to TX FIFO. */
volatile unsigned int txStrCount = 0;

/*
 ** Flag which indicates whether the total Transmit transaction which involves
 ** transfer of all the strings in context is complete.
 */
volatile unsigned int txComplFlag = FALSE;
unsigned int status = 0;
unsigned int semastate = 0;
/*
 * ********************uart declarations ***************************
 */
void UART0AINTCConfigure(void);
/*
 *  ======== taskFxn ========
 */
void taskFxn(UArg a0, UArg a1) {
	System_printf("enter taskFxn()\n");

	Task_sleep(10);

	System_printf("exit taskFxn()\n");

	System_flush(); /* force SysMin output to console */
}

static void resetAllIrqs(void) {
	/*    Clear clk interrupt    22003800 */
	HWREG(SOC_GPIO_0_REGS + 0x2C) = 0xFFFFFFFF;
	HWREG(SOC_GPIO_0_REGS + 0x30) = 0xFFFFFFFF;
	// printf("IRQ0 Cleared\n");
	HWREG(GPIO0_DATA_PORT + 0x34) = 0xFFFFFFFF;
	HWREG(GPIO0_DATA_PORT + 0x38) = 0xFFFFFFFF;
	HWREG(GPIO0_DATA_PORT + 0x44) = 0xFFFFFFFF;
	HWREG(GPIO0_DATA_PORT + 0x48) = 0xFFFFFFFF;
	/*    Clear clk interrupt    */
	HWREG(SOC_GPIO_1_REGS + 0x2C) = 0xFFFFFFFF;
	HWREG(SOC_GPIO_1_REGS + 0x30) = 0xFFFFFFFF;
	//printf("IRQ1 Cleared\n");
	HWREG(GPIO1_DATA_PORT + 0x34) = 0xFFFFFFFF;
	HWREG(GPIO1_DATA_PORT + 0x38) = 0xFFFFFFFF;
	HWREG(GPIO1_DATA_PORT + 0x44) = 0xFFFFFFFF;
	HWREG(GPIO1_DATA_PORT + 0x48) = 0xFFFFFFFF;
	/*    Clear clk interrupt    */
	HWREG(SOC_GPIO_2_REGS + 0x2C) = 0xFFFFFFFF;
	HWREG(SOC_GPIO_2_REGS + 0x30) = 0xFFFFFFFF;
	//printf("IRQ2 Cleared\n");
	HWREG(GPIO2_DATA_PORT + 0x34) = 0xFFFFFFFF;
	HWREG(GPIO2_DATA_PORT + 0x38) = 0xFFFFFFFF;
	HWREG(GPIO2_DATA_PORT + 0x44) = 0xFFFFFFFF;
	HWREG(GPIO2_DATA_PORT + 0x48) = 0xFFFFFFFF;
}

// A function to blink LED once each time a falling edge is encountered on CLK pin
void isr32gpio2(UArg arg) {
	//printf("gpio0Isr32\n");
	blinkLED();
	/*    Clear clk interrupt    */
	resetAllIrqs();
}
// A function to blink LED once each time a falling edge is encountered on CLK pin
void isr33gpio2(UArg arg) {
	//printf("gpio0Isr33\n");
	blinkLED();
	/*    Clear clk interrupt    */
	resetAllIrqs();
}
void isr40PRUI2C0(void) {

}
// A function to blink LED once each time a falling edge is encountered on CLK pin
void isr57gpio(UArg arg) {
	PIMRun();
	//printf("gpio0Isr96\n");
	/*    Clear clk interrupt    */
//again enable Falling edge IRQ
	resetAllIrqs();

}
void isr31eCAP0INT(UArg arg) {
	ECAPIntEnable(SOC_ECAP_2_REGS,
			(ECAP_CEVT1_INT | ECAP_CEVT2_INT | ECAP_CEVT3_INT | ECAP_CEVT4_INT
					| ECAP_CNTOVF_INT));
}
void isr47eCAP1INT(UArg arg) {
	ECAPIntEnable(SOC_ECAP_2_REGS,
			(ECAP_CEVT1_INT | ECAP_CEVT2_INT | ECAP_CEVT3_INT | ECAP_CEVT4_INT
					| ECAP_CNTOVF_INT));
}
void isr62eCAP2INT(UArg arg) {
	ECAPIntEnable(SOC_ECAP_2_REGS,
			(ECAP_CEVT1_INT | ECAP_CEVT2_INT | ECAP_CEVT3_INT | ECAP_CEVT4_INT
					| ECAP_CNTOVF_INT));
}
void isr79eQEP0INT(UArg arg) {
	clearAllQEPInts();
}
/*
 ** I2C0 Interrupt Service Routine. This function will read and write
 ** data through I2C bus.
 */
void isr70I2C0(void) {
	unsigned int status = 0;

	status = I2CMasterIntStatus(SOC_I2C_0_REGS);

	I2CMasterIntClearEx(SOC_I2C_0_REGS,
			(status & ~(I2C_INT_RECV_READY | I2C_INT_TRANSMIT_READY)));

	if (status & I2C_INT_RECV_READY) {
		/* Receive data from data receive register */
		dataFromSlaveAr[I2C_0][rCountAr[I2C_0]++] = I2CMasterDataGet(
				SOC_I2C_0_REGS);
		I2CMasterIntClearEx(SOC_I2C_0_REGS, I2C_INT_RECV_READY);

		if (rCountAr[I2C_0] == numOfBytesAr[I2C_0]) {
			I2CMasterIntDisableEx(SOC_I2C_0_REGS, I2C_INT_RECV_READY);
			/* Generate a STOP */
			I2CMasterStop(SOC_I2C_0_REGS);

		}
	}
	if (status & I2C_INT_TRANSMIT_READY) {
		/* Put data to data transmit register of i2c */

		I2CMasterDataPut(SOC_I2C_0_REGS,
				dataToSlaveAr[I2C_0][tCountAr[I2C_0]++]);
		I2CMasterIntClearEx(SOC_I2C_0_REGS, I2C_INT_TRANSMIT_READY);

		if (tCountAr[I2C_0] == numOfBytesAr[I2C_0]) {
			I2CMasterIntDisableEx(SOC_I2C_0_REGS, I2C_INT_TRANSMIT_READY);

		}
	}

	if (status & I2C_INT_STOP_CONDITION) {
		/* Disable transmit data ready and receive data read interupt */
		I2CMasterIntDisableEx(SOC_I2C_0_REGS, I2C_INT_TRANSMIT_READY |
		I2C_INT_RECV_READY |
		I2C_INT_STOP_CONDITION);
		flagAr[I2C_0] = 0;
	}

	if (status & I2C_INT_NO_ACK) {
		I2CMasterIntDisableEx(SOC_I2C_0_REGS, I2C_INT_TRANSMIT_READY |
		I2C_INT_RECV_READY |
		I2C_INT_NO_ACK |
		I2C_INT_STOP_CONDITION);
		/* Generate a STOP */
		I2CMasterStop(SOC_I2C_0_REGS);

		flagAr[I2C_0] = 0;
	}
}
void isr71I2C1(UArg arg) {

}
void isr17USBSSINT(UArg arg) {

}
void isr18USBINT0(UArg arg) {

}
void isr19USBINT1(UArg arg) {

}
void isr30I2C2(UArg arg) {

}

void isr88eQEP1INT(UArg arg) {
	clearAllQEPInts();
}

void isr89eQEP2INT(UArg arg) {
	clearAllQEPInts();
}
// A function to blink LED once each time a falling edge is encountered on CLK pin
void isr96gpio0(UArg arg) {
	unsigned int pinVal = GPIOPinChangeReadVal(GPIO0_DATA_PORT,
			&ptrGPIO0A_PortVal);
	PIMRun();
	blinkLED();
	//printf("gpio0Isr96\n");
	/*    Clear clk interrupt    */
//again enable Falling edge IRQ
	resetAllIrqs();

}
// A function to blink LED once each time a falling edge is encountered on CLK pin
void isr97gpio0(UArg arg) {
	unsigned int pinVal = GPIOPinChangeReadVal(GPIO0_DATA_PORT,
			&ptrGPIO0B_PortVal);
	PIMRun();
	Semaphore_post(semaPIMRunState);
	//printf("gpio0Isr97\n");
	// blinkLED();
//again enable Falling edge IRQ
	resetAllIrqs();

}
// A function to blink LED once each time a falling edge is encountered on CLK pin
void isr98gpio1(UArg arg) {
	unsigned int pinVal = GPIOPinChangeReadVal(GPIO1_DATA_PORT,
			&ptrGPIO1A_PortVal);
//Semaphore_post(semaPIMRunState);
	PIMRun();
	//blinkLED();

//again enable Falling edge IRQ
	resetAllIrqs();
	//return Semaphore_post((semaPIMRunState)arg);
	// Semaphore_post(semaPIMRunState);
}
void isr99gpio1(UArg arg) {
//Semaphore_post(semaPIMRunState);
	unsigned int pinVal = GPIOPinChangeReadVal(GPIO1_DATA_PORT,
			&ptrGPIO1B_PortVal);
	PIMRun();
	// printf("gpio1Isr99\n");
	//Timer2Start();
	// blinkLED();
	//Timer2Stop();

//again enable Falling edge IRQ
	resetAllIrqs();
	//  Semaphore_post(semaPIMRunState);

}
/*
 ** Uart ISR to read the inputs
 */
void isr72UART0INT(UArg arg) {
	unsigned char rxByte = 0;
	unsigned int intId = 0;
	/* Checking ths source of UART interrupt. */
	intId = UARTIntIdentityGet(UART_INSTANCE_BASE_ADD);

//UARTRegConfigModeEnable(UART_INSTANCE_BASE_ADD,UART_REG_OPERATIONAL_MODE);// other modes: UART_REG_CONFIG_MODE_A, UART_BREG_CONFIG_MODE_
	rxByte = UARTCharGetNonBlocking(UART_INSTANCE_BASE_ADD);
	if (rxByte == 13) {
		//allow processing of string input
		//Semaphore_post(semaUART1);
		UARTProcessInput(1);

	} else {
		if (UARTCurrentPosition <= 256) {
			UARTinput1[UARTCurrentPosition] = rxByte; // keep building array until CR recieved
			UARTCurrentPosition += 1;
		}
	}
	if (UARTCurrentPosition >= 257) {
		UARTCurrentPosition = 0;
	}
}
void isr73UART1INT(UArg arg) {

}
void isr74UART2INT(UArg arg) {

}
void isr44UART3INT(UArg arg) {

}
void isr45UART4INT(UArg arg) {

}
void isr46UART5INT(UArg arg) {

}
/*
 ** Non Masking Interrupt NMI ISR
 */
void isr7NMI(UArg arg) {

	/* Perform nothing */

}
/*
 ** All Timer ISR's
 */
void isrTimer0(UArg arg) {
	/* Clear the status of the interrupt flags */
	DMTimerIntStatusClear(SOC_DMTIMER_0_REGS, DMTIMER_INT_OVF_EN_FLAG);
	timer0OverflowCount += 1;
	/* reset counter if not in auto reset*/
	//   DMTimerCounterSet(SOC_DMTIMER_2_REGS, 0);
}
void isrTimer1(UArg arg) {
	/* Clear the status of the interrupt flags */
	DMTimerIntStatusClear(SOC_DMTIMER_1_REGS, DMTIMER_INT_OVF_EN_FLAG);

	timer1OverflowCount += 1;

	/* reset counter */
	//   DMTimerCounterSet(SOC_DMTIMER_2_REGS, 0);
}
void isrTimer2(UArg arg) {
	/* Clear the status of the interrupt flags */
	DMTimerIntStatusClear(SOC_DMTIMER_2_REGS, DMTIMER_INT_OVF_EN_FLAG);
	timer2OverflowCount += 1;
	/* reset counter */
	//   DMTimerCounterSet(SOC_DMTIMER_2_REGS, 0);
}
void isrTimer3(UArg arg) {
	/* Clear the status of the interrupt flags */
	DMTimerIntStatusClear(SOC_DMTIMER_3_REGS, DMTIMER_INT_OVF_EN_FLAG);
	timer3OverflowCount += 1;
	/* reset counter */
	//   DMTimerCounterSet(SOC_DMTIMER_3_REGS, 0);
}
void isrTimer4(UArg arg) {

	/* Clear the status of the interrupt flags */
	DMTimerIntStatusClear(SOC_DMTIMER_4_REGS, DMTIMER_INT_OVF_EN_FLAG);
	timer4OverflowCount += 1;
	/* reset counter */
	//  DMTimerCounterSet(SOC_DMTIMER_4_REGS, 0);
}
void isrTimer5(UArg arg) {

	/* Clear the status of the interrupt flags */
	DMTimerIntStatusClear(SOC_DMTIMER_5_REGS, DMTIMER_INT_OVF_EN_FLAG);
	timer5OverflowCount += 1;

	/* reset counter */
	//  DMTimerCounterSet(SOC_DMTIMER_5_REGS, 0);
}
void isrTimer6(UArg arg) {

	/* Clear the status of the interrupt flags */
	DMTimerIntStatusClear(SOC_DMTIMER_6_REGS, DMTIMER_INT_OVF_EN_FLAG);
	timer6OverflowCount += 1;
	/* reset counter */
	//  DMTimerCounterSet(SOC_DMTIMER_6_REGS, 0);
}
void isrTimer7(UArg arg) {

	/* Clear the status of the interrupt flags */
	DMTimerIntStatusClear(SOC_DMTIMER_7_REGS, DMTIMER_INT_OVF_EN_FLAG);
	timer7OverflowCount += 1;

	/* reset counter */
	//  DMTimerCounterSet(SOC_DMTIMER_4_REGS, 0);
}
void isrfnRTCInt(void) {
	/* Clear the stat
	 * us of the interrupt flags */
}

/*************** Pim Idle ****************/
void PIMMainIdle(void) {

}
void PIMRun(void) {
	/*{{ 0, { "RESET" }}
	 ,{ 1, { "RETRACTING" } }
	 ,{ 2, { "S0-HOME FOUND" } }
	 ,{ 3, { "LAUNCHED" } }
	 ,{ 4, { "MEASURING" } }
	 ,{ 5, { "V1" } }
	 ,{ 6, { "V2" } }
	 ,{ 7, { "V3" } }
	 ,{ 8, { "ERROR-CLUTCH" } }
	 ,{ 9, { "ERROR-SENSOR" } }
	 */
	status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_29_IN_LAUNCH);

	switch (PimCurrentState.id) {
	case 0: // wait for launch input trigger
		//System_ConsoleUtilsPrintf("%s\n", "launch input trigger");
		status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_29_IN_LAUNCH);
		if (status == GPIO_IN_ACTIVE) {
			timerResetCounts(); //reset all timer counts
			PimCurrentState = PimState1[1];
			GPIOPinWrite(GPIO0_DATA_PORT, GPIO0_27_OUT_MOTOR, GPIO_OUT_ACTIVE);
			//Delay(0x0000000f);
			GPIOPinWrite(GPIO1_DATA_PORT, GPIO1_15_OUT_CLUTCH, GPIO_OUT_ACTIVE);
		}
		break;
	case 1: // porver retracting looking for S0
		//System_ConsoleUtilsPrintf("%s\n", "1 retracting looking for S0");
		status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_13_IN_SW_S0);
		if (status == GPIO_IN_ACTIVE) {
			//turn off clutch start run
			PimCurrentState = PimState1[2];
			GPIOPinWrite(GPIO1_DATA_PORT, GPIO1_15_OUT_CLUTCH,
			GPIO_OUT_INACTIVE);
		}
		break;
	case 2: // wait for S0 home switch released
		//System_ConsoleUtilsPrintf("%s\n", "2 retracting looking for S0");
		status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_13_IN_SW_S0);
		if (status == GPIO_IN_INACTIVE) {
			//turn off clutch wait for first sensor
			PimCurrentState = PimState1[3];
		}
		break;
	case 3: // wait for 1st start sensor
		//System_ConsoleUtilsPrintf("%s\n", "3 wairt for V1");
		status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_14_IN_SW_V1);
		if (status == GPIO_IN_ACTIVE) {
			ECAPClockEnable(SOC_PWMSS2_REGS);
			timerStart(3);
			timerStart(4);
			PULSE_OUT_VOL1(PulseOutWidth); //send pulse
			//1st sensor found
			PimCurrentState = PimState1[4];
		}
		break;
	case 4:									// wait for release of 1st sensor
											//System_ConsoleUtilsPrintf("%s\n", "4 wait for v1 release");
		status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_14_IN_SW_V1);
		if (status == GPIO_IN_INACTIVE) {
			//turn off clutch wait for first sensor
			PimCurrentState = PimState1[5];
		}
		break;
	case 5:				// wait for 2st sensor
						//System_ConsoleUtilsPrintf("%s\n", "5 wair for V2");
		status = GPIOPinReadVal(GPIO0_DATA_PORT, GPIO0_26_IN_SW_V2);
		if (status == GPIO_IN_ACTIVE) {
			timerStop(3);
			//timerStart(6);
			//timerStart(7);  //input from pin
			PULSE_OUT_VOL1(PulseOutWidth); //send pulse
			//1st sensor found
			PimCurrentState = PimState1[6];
		}
		break;
	case 6:									// wait for 2st sensor released
											//System_ConsoleUtilsPrintf("%s\n", "6 wait for v2 release");
		status = GPIOPinReadVal(GPIO0_DATA_PORT, GPIO0_26_IN_SW_V2);
		if (status == GPIO_IN_INACTIVE) {
			//1st sensor found
			PimCurrentState = PimState1[7];
		}
		break;
	case 7:	// wait for 3rd sensor - NOTE 3rd stays active when flagged - DO NOT WAIT FOR RELEASE PASS THROUGH
			//System_ConsoleUtilsPrintf("%s\n", "7 wait for V3");
		status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_12_IN_SW_V3);
		if (status == GPIO_IN_ACTIVE) {
			timerStop(4);
			//timerStop(6);
			//timerStop(7); // clk input from pin
			///ECAPClockDisable(SOC_PWMSS2_REGS);
			PULSE_OUT_VOL1(PulseOutWidth); //send finish pulse
			//3rd sensor found
			PimCurrentState = PimState1[0];
			GPIOPinWrite(GPIO1_DATA_PORT, GPIO1_15_OUT_CLUTCH,
			GPIO_OUT_INACTIVE);
			GPIOPinWrite(GPIO0_DATA_PORT, GPIO0_27_OUT_MOTOR,
			GPIO_OUT_INACTIVE);

			/* get sensor volumn run time totals */
			/* timer3OverflowCount */
			timer3RunEndCount = DMTimerCounterGet(SOC_DMTIMER_3_REGS);
			/* timer4OverflowCount */
			timer4RunEndCount = DMTimerCounterGet(SOC_DMTIMER_4_REGS);
			/* timer6OverflowCount */
			timer6RunEndCount = DMTimerCounterGet(SOC_DMTIMER_6_REGS);
			/* timer6OverflowCount */
			timer7RunEndCount = DMTimerCounterGet(SOC_DMTIMER_7_REGS);
			/* reset run counters */
			CAPTURE_EVENT_1 = ECAPTimeStampRead(SOC_PWMSS2_REGS,
			ECAP_CAPTURE_EVENT_1);
			CAPTURE_EVENT_2 = ECAPTimeStampRead(SOC_PWMSS2_REGS,
			ECAP_CAPTURE_EVENT_2);
			CAPTURE_EVENT_3 = ECAPTimeStampRead(SOC_PWMSS2_REGS,
			ECAP_CAPTURE_EVENT_3);
			CAPTURE_EVENT_4 = ECAPTimeStampRead(SOC_PWMSS2_REGS,
			ECAP_CAPTURE_EVENT_4);

			timerResetCounts();

			/* Set Counter to 0*/
			ECAPCounterConfig(SOC_ECAP_2_REGS, 0);
			/* clear interrupt flags */
			ECAPIntStatusClear(SOC_ECAP_2_REGS, ECAP_CEVT1_INT);
			ECAPIntStatusClear(SOC_ECAP_2_REGS, ECAP_CEVT2_INT);
			ECAPIntStatusClear(SOC_ECAP_2_REGS, ECAP_CEVT3_INT);
			ECAPIntStatusClear(SOC_ECAP_2_REGS, ECAP_CEVT4_INT);
			ECAPIntStatusClear(SOC_ECAP_2_REGS, ECAP_CNTOVF_INT);
			ECAPIntStatusClear(SOC_ECAP_2_REGS, ECAP_ECFLG_INT);
			/*rk Configure ECAP_ECCTL2 to Capture mode*/
			//ECAPOperatingModeSelect(SOC_ECAP_2_REGS, ECAP_CAPTURE_MODE);
			/*rk Configure ECAP_ECCTL2 to Continous mode*/
			//ECAPContinousModeConfig(SOC_ECAP_2_REGS);
			// Configure as 1 shot ending on event sent in
			// ECAPOneShotModeConfig(SOC_ECAP_2_REGS, ECAP_CAPTURE_EVENT4_STOP);
			ECAPOneShotREARM(SOC_ECAP_2_REGS);
		}
		break;
	default:
		//turn off motor and clutch
		PimCurrentState = PimState1[0];
		GPIOPinWrite(GPIO1_DATA_PORT, GPIO1_15_OUT_CLUTCH, GPIO_OUT_INACTIVE);
		GPIOPinWrite(GPIO0_DATA_PORT, GPIO0_27_OUT_MOTOR, GPIO_OUT_INACTIVE);
		break;
	}
}
void UARTProcessInput(unsigned int UartNo) {
	if (UARTCurrentPosition > 0) {								// process data
																//send out string
		int i = 0;
		UARTRegConfigModeEnable(UART_INSTANCE_BASE_ADD,
		UART_REG_OPERATIONAL_MODE);	// other modes: UART_REG_CONFIG_MODE_A, UART_BREG_CONFIG_MODE_

		for (i = 0; i < UARTCurrentPosition; i++) {
			UARTCharPut(SOC_UART_0_REGS, UARTinput1[i]); // clear array"
			//Task_yield();
		}

		for (i = 0; i < UARTCurrentPosition; i++) {
			UARTinput1[i] = ' '; // clear array"
		};
		UARTCurrentPosition = 0;
		//Task_yield();
	}

}
void taskfnprocessUartInput(unsigned int UartNo) {
	while (1) {
		semastate = Semaphore_pend(semaUART1, BIOS_WAIT_FOREVER);

		if (UARTCurrentPosition > 0) { // process data
									   //send out string
			int i = 0;
			UARTRegConfigModeEnable(UART_INSTANCE_BASE_ADD,
			UART_REG_OPERATIONAL_MODE);	// other modes: UART_REG_CONFIG_MODE_A, UART_BREG_CONFIG_MODE_

			for (i = 0; i < UARTCurrentPosition; i++) {
				UARTCharPut(SOC_UART_0_REGS, UARTinput1[UARTCurrentPosition]); // clear array"
				Task_yield();
			}

			for (i = 0; i < UARTCurrentPosition; i++) {
				UARTinput1[UARTCurrentPosition] = ' '; // clear array"
			};
			UARTCurrentPosition = 0;
			Task_yield();
		}
	}
}
void taskfnPIMRun(void) //main PIM run routine is updated with ecah evenet
{ /*{{ 0, { "RESET" }}
 ,{ 1, { "RETRACTING" } }
 ,{ 2, { "S0-HOME FOUND" } }
 ,{ 3, { "LAUNCHED" } }
 ,{ 4, { "MEASURING" } }
 ,{ 5, { "V1" } }
 ,{ 6, { "V2" } }
 ,{ 7, { "V3" } }
 ,{ 8, { "ERROR-CLUTCH" } }
 ,{ 9, { "ERROR-SENSOR" } }
 */
	while (1) {
		semastate = Semaphore_pend(semaPIMRunState, BIOS_WAIT_FOREVER);	// return Semaphore_post((semaPIMRunState)arg);wait for Sem from ISR
		status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_29_IN_LAUNCH);
		switch (PimCurrentState.id) {
		case 0: // wait for launch input trigger
			//System_ConsoleUtilsPrintf("%s\n", "launch input trigger");
			status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_29_IN_LAUNCH);
			if (status == GPIO_IN_ACTIVE) {
				PimCurrentState = PimState1[1];
				GPIOPinWrite(GPIO0_DATA_PORT, GPIO0_27_OUT_MOTOR,
				GPIO_OUT_ACTIVE);
				//Delay(0x0000000f);
				GPIOPinWrite(GPIO1_DATA_PORT, GPIO1_15_OUT_CLUTCH,
				GPIO_OUT_ACTIVE);
			}
			break;
		case 1: // porver retracting looking for S0
			//System_ConsoleUtilsPrintf("%s\n", "1 retracting looking for S0");
			status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_13_IN_SW_S0);
			if (status == GPIO_IN_ACTIVE) {
				//turn off clutch start run
				PimCurrentState = PimState1[2];
				GPIOPinWrite(GPIO1_DATA_PORT, GPIO1_15_OUT_CLUTCH,
				GPIO_OUT_INACTIVE);
			}
			break;
		case 2: // wait for S0 home switch released
			//System_ConsoleUtilsPrintf("%s\n", "2 retracting looking for S0");
			status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_13_IN_SW_S0);
			if (status == GPIO_IN_INACTIVE) {
				//turn off clutch wait for first sensor
				PimCurrentState = PimState1[3];
			}
			break;
		case 3: // wait for 1st start sensor
			//System_ConsoleUtilsPrintf("%s\n", "3 wairt for V1");
			status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_14_IN_SW_V1);
			if (status == GPIO_IN_ACTIVE) {
				//PULSE_OUT_VOL1(0x000000ff); //send pulse
				//1st sensor found
				PimCurrentState = PimState1[4];
			}
			break;
		case 4:								// wait for release of 1st sensor
											//System_ConsoleUtilsPrintf("%s\n", "4 wait for v1 release");
			status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_14_IN_SW_V1);
			if (status == GPIO_IN_INACTIVE) {
				//turn off clutch wait for first sensor
				PimCurrentState = PimState1[5];
			}
			break;
		case 5:						// wait for 2st sensor
									//System_ConsoleUtilsPrintf("%s\n", "5 wair for V2");
			status = GPIOPinReadVal(GPIO0_DATA_PORT, GPIO0_26_IN_SW_V2);
			if (status == GPIO_IN_ACTIVE) {
				//PULSE_OUT_VOL1(0x00ffff); //send pulse
				//1st sensor found
				PimCurrentState = PimState1[6];
			}
			break;
		case 6:									// wait for 2st sensor released
												//System_ConsoleUtilsPrintf("%s\n", "6 wait for v2 release");
			status = GPIOPinReadVal(GPIO0_DATA_PORT, GPIO0_26_IN_SW_V2);
			if (status == GPIO_IN_INACTIVE) {
				//1st sensor found
				PimCurrentState = PimState1[7];
			}
			break;
		case 7:	// wait for 3rd sensor - NOTE 3rd stays active when flagged - DO NOT WAIT FOR RELEASE PASS THROUGH
				//System_ConsoleUtilsPrintf("%s\n", "7 wait for V3");
			status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_12_IN_SW_V3);
			if (status == GPIO_IN_ACTIVE) {
				PULSE_OUT_VOL1(0x00000f); //send finish pulse
				//3rd sensor found
				PimCurrentState = PimState1[0];
				GPIOPinWrite(GPIO1_DATA_PORT, GPIO1_15_OUT_CLUTCH,
				GPIO_OUT_INACTIVE);
				GPIOPinWrite(GPIO0_DATA_PORT, GPIO0_27_OUT_MOTOR,
				GPIO_OUT_INACTIVE);
			}
			break;
		default:
			//turn off motor and clutch
			PimCurrentState = PimState1[0];
			GPIOPinWrite(GPIO1_DATA_PORT, GPIO1_15_OUT_CLUTCH,
			GPIO_OUT_INACTIVE);
			GPIOPinWrite(GPIO0_DATA_PORT, GPIO0_27_OUT_MOTOR,
			GPIO_OUT_INACTIVE);
			break;
		}
		Task_yield();
	}
}
void taskfnGPIO1(void) {
	while (1) {
		//semastate =Semaphore_pend(semaGPIO1,BIOS_WAIT_FOREVER);				// wait for Sem from ISR
		status = GPIOPinReadVal(GPIO1_DATA_PORT, GPIO1_29_IN_LAUNCH);
		if (semastate > 0) {
			GPIOPinWrite(GPIO1_DATA_PORT,
			GPIO1_15_OUT_CLUTCH,
			GPIO_OUT_INACTIVE);
			GPIOPinWrite(GPIO0_DATA_PORT,
			GPIO0_27_OUT_MOTOR,
			GPIO_OUT_INACTIVE);
		} else {
			GPIOPinWrite(GPIO1_DATA_PORT,
			GPIO1_15_OUT_CLUTCH,
			GPIO_OUT_ACTIVE);
			GPIOPinWrite(GPIO0_DATA_PORT,
			GPIO0_27_OUT_MOTOR,
			GPIO_OUT_ACTIVE);
		}
	}

}

void initAllPinsPorts(void) {
	//PeripheralsSetUp();
	/* Enabling functional clocks for GPIO1 instance. */
	GPIO0ModuleClkConfig();
	GPIO1ModuleClkConfig();
	GPIO2ModuleClkConfig();

	//GPIO3ModuleClkConfig();

	/* Selecting GPIO1 pins for use. */
	GPIOPinMuxSetup(GPIO1_29_IN_LAUNCH, PAD_SL_RXE_PU_PUPDE(7));

	GPIOPinMuxSetup(GPIO1_15_OUT_CLUTCH, PAD_SL_RXE_PU_PUPDE(7));
	GPIOPinMuxSetup(GPIO0_27_OUT_MOTOR, PAD_SL_RXE_PU_PUPDE(7));

	GPIOPinMuxSetup(GPIO1_13_IN_SW_S0, PAD_SL_RXE_PU_PUPDE(7));
	GPIOPinMuxSetup(GPIO1_14_IN_SW_V1, PAD_SL_RXE_PU_PUPDE(7));
	GPIOPinMuxSetup(GPIO0_26_IN_SW_V2, PAD_SL_RXE_PU_PUPDE(7));
	GPIOPinMuxSetup(GPIO1_12_IN_SW_V3, PAD_SL_RXE_PU_PUPDE(7));

	GPIOPinMuxSetup(GPIO1_16_OUT_PULSE, PAD_SL_RXE_PU_PUPDE(7));
	GPIOPinMuxSetup(GPIO1_17_OUT_ERROR, PAD_SL_RXE_PU_PUPDE(7));

	GPIOPinMuxSetup(UART0_RXD_IN_NUMBER, PAD_SL_RXE_PU_PUPDE(7));
	GPIOPinMuxSetup(UART0_TXD_OUT_NUMBER, PAD_SL_RXE_PU_PUPDE(7));

	/* setup counters 6,7 to external clk in pins */
	//   timerPinMuxSetup(GPMC_OEN_REN_OFF,PAD_FS_RXE_PU_PUPDE(2)); //timer7 pin GPMC_OEN_REN;mux mode 2
	//   timerPinMuxSetup(GPMC_WEN_OFF,PAD_FS_RXE_PU_PUPDE(2));  //timer6 pin GPMC_WEN; mux mode 2
	/* Enabling the GPIO module. */
	GPIOModuleEnable(GPIO0_DATA_PORT);
	GPIOModuleEnable(GPIO1_DATA_PORT);
	GPIOModuleEnable(GPIO2_DATA_PORT);
	/* Resetting the GPIO module. */

	GPIOModuleReset(GPIO0_DATA_PORT);
	GPIOModuleReset(GPIO1_DATA_PORT);
	GPIOModuleReset(GPIO2_DATA_PORT);

	/* Setting the GPIO data  input pins. */
	GPIODirModeSet(GPIO1_DATA_PORT, GPIO1_29_IN_LAUNCH, GPIO_DIR_INPUT);
	GPIODirModeSet(GPIO1_DATA_PORT, GPIO1_13_IN_SW_S0, GPIO_DIR_INPUT);
	GPIODirModeSet(GPIO1_DATA_PORT, GPIO1_14_IN_SW_V1, GPIO_DIR_INPUT);
	GPIODirModeSet(GPIO0_DATA_PORT, GPIO0_26_IN_SW_V2, GPIO_DIR_INPUT);
	GPIODirModeSet(GPIO1_DATA_PORT, GPIO1_12_IN_SW_V3, GPIO_DIR_INPUT);

	//change clk 6,7 to pin as clock input source
	//   initHREG(SOC_CM_DPLL_REGS,CM_DPLL_CLKSEL_TIMER6_CLK, CONTROL_CLKSEL_TIMER_TCLKIN);
	//   initHREG(SOC_CM_DPLL_REGS,CM_DPLL_CLKSEL_TIMER7_CLK, CONTROL_CLKSEL_TIMER_TCLKIN);
	//   timerDirModeSet( SOC_DMTIMER_7_REGS, DMTIMER_TCLR, GPIO_DIR_INPUT);
	//   timerDirModeSet( SOC_DMTIMER_6_REGS, DMTIMER_TCLR, GPIO_DIR_INPUT);

	/* Setting the GPIO output pins. */
	GPIODirModeSet(GPIO1_DATA_PORT, GPIO1_15_OUT_CLUTCH, GPIO_DIR_OUTPUT);
	GPIODirModeSet(GPIO0_DATA_PORT, GPIO0_27_OUT_MOTOR, GPIO_DIR_OUTPUT);

	GPIODirModeSet(GPIO1_DATA_PORT, GPIO1_16_OUT_PULSE, GPIO_DIR_OUTPUT);
	GPIODirModeSet(GPIO1_DATA_PORT, GPIO1_17_OUT_ERROR, GPIO_DIR_OUTPUT);

	/* Set Int enable for specific pins */
	// GPIOPinIntEnable(GPIO0_DATA_PORT,0, GPIO0_26_IN_SW_V2);
	//GPIOWakeupGlobalEnable(GPIO0_DATA_PORT);
	/* ************** Uart0 Pins *****************/
	//GPIODirModeSet(GPIO1_DATA_PORT, UART0_RXD_IN_NUMBER, GPIO_DIR_INPUT);
	//GPIODirModeSet(GPIO1_DATA_PORT, UART0_TXD_OUT_NUMBER, GPIO_DIR_OUTPUT);
	//blinkLED();
//************* Now enable interrupt on CLK pin *************
	/* Initialize the ARM Interrupt Controller */
	//rk  IntAINTCInit(); //DO NOT USE WITH SYS BIOS
	//rk  IntMasterIRQEnable(); //DO NOT USE WITH SYS BIOS
	/* UART Interrupts */
	/*
	 IntSystemEnable(SYS_INT_UART0INT);
	 IntPrioritySet(SYS_INT_UART0INT, 60, AINTC_HOSTINT_ROUTE_IRQ);
	 IntRegister(SYS_INT_UART0INT, uartIsr);
	 */
	/*    GPIO interrupts    */
	/* IntSystemEnable(SYS_INT_GPIOINT0A);
	 IntPrioritySet(SYS_INT_GPIOINT0A, 120, AINTC_HOSTINT_ROUTE_IRQ);//0h = IntIRQ : Interrupt is routed to IRQ; 1h = IntFIQ : Interrupt is routed to FIQ
	 IntRegister(SYS_INT_GPIOINT0A, gpio0Isr96);
	 IntSystemEnable(SYS_INT_GPIOINT0B);
	 IntPrioritySet(SYS_INT_GPIOINT0B, 120, AINTC_HOSTINT_ROUTE_IRQ);
	 IntRegister(SYS_INT_GPIOINT0B, gpio0Isr97);

	 IntSystemEnable(SYS_INT_GPIOINT1A);
	 IntPrioritySet(SYS_INT_GPIOINT1A, 120, AINTC_HOSTINT_ROUTE_IRQ);//0h = IntIRQ : Interrupt is routed to IRQ; 1h = IntFIQ : Interrupt is routed to FIQ
	 IntRegister(SYS_INT_GPIOINT1A, gpio1Isr98);
	 IntSystemEnable(SYS_INT_GPIOINT1B);
	 IntPrioritySet(SYS_INT_GPIOINT1B, 120, AINTC_HOSTINT_ROUTE_IRQ);
	 IntRegister(SYS_INT_GPIOINT1B, gpio1Isr99);

	 IntSystemEnable(SYS_INT_GPIOINT2A);
	 IntPrioritySet(SYS_INT_GPIOINT2A, 120, AINTC_HOSTINT_ROUTE_IRQ);//0h = IntIRQ : Interrupt is routed to IRQ; 1h = IntFIQ : Interrupt is routed to FIQ
	 IntRegister(SYS_INT_GPIOINT2A, gpio2Isr32);
	 IntSystemEnable(SYS_INT_GPIOINT2B);
	 IntPrioritySet(SYS_INT_GPIOINT2B, 120, AINTC_HOSTINT_ROUTE_IRQ);
	 IntRegister(SYS_INT_GPIOINT2B, gpio2Isr33);
	 */
	/* Setting the GPIO's to raise IRQ at falling edge of input */
	GPIOIntTypeSet(GPIO1_DATA_PORT,
	GPIO1_29_IN_LAUNCH,
	GPIO_INT_TYPE_BOTH_EDGE);
	GPIOIntTypeSet(GPIO1_DATA_PORT,
	GPIO1_14_IN_SW_V1,
	GPIO_INT_TYPE_BOTH_EDGE);
	GPIOIntTypeSet(GPIO0_DATA_PORT,
	GPIO0_26_IN_SW_V2,
	GPIO_INT_TYPE_BOTH_EDGE);
	GPIOIntTypeSet(GPIO1_DATA_PORT,
	GPIO1_12_IN_SW_V3,
	GPIO_INT_TYPE_BOTH_EDGE);
	GPIOIntTypeSet(GPIO1_DATA_PORT,
	GPIO1_13_IN_SW_S0,
	GPIO_INT_TYPE_BOTH_EDGE);

	resetAllIrqs();
}

/*
 ** Enable all the peripherals in use
 */
static void initPeripheralClocks(void) {   // Timer 2 setup code
// run this to avoid question marks in memory locations "?????????????"
	enableModuleClock(CLK_UART0);
	enableModuleClock(CLK_I2C0);

	enableModuleClock(CLK_TIMER2);
	enableModuleClock(CLK_TIMER3);
	enableModuleClock(CLK_TIMER4);
//  enableModuleClock(CLK_TIMER5);
	enableModuleClock(CLK_TIMER6);
	enableModuleClock(CLK_TIMER7);

	enableModuleClock(CLK_EPWMSS0);
	enableModuleClock(CLK_EPWMSS1);
	enableModuleClock(CLK_EPWMSS2);
	//  enableModuleClock(CLK_EPWMSS3);
	// enableModuleClock(CLK_L4WKUP);
	//  enableModuleClock(CLK_L4LS);
	//  enableModuleClock(CLK_EPWMSS0);

}
void I2CCheck()
{


}
/*
 *  ================
 */

Int main() {

	initPeripheralClocks();
	initAllPinsPorts();
	ResetIO();

	initAllTimers();
	/*
	 * ************************ UART SETUP ************************
	 */
	initUart();
	//initI2CEE();
	initEcap();
	int i = 0;

	EEPROMI2CSetUp(0x50);

	//I2CIntRegister(I2CEEPROM0, &isr70I2C0);
	//IntRegister(SYS_INT_I2C0INT, isr70I2C0);
	//setup start/enable interrupts
	I2CDMAInteruptSetup(SOC_I2C_0_REGS);
	I2CMasterIntClearEx(SOC_I2C_0_REGS, 0xffff); //I2C_INT_TRANSMIT_READY);

	//I2CDMARxEventEnable(SOC_I2C_0_REGS);// enable events
	//I2CDMATxEventEnable(SOC_I2C_0_REGS);// enable events

	int toggle = 1;   // 1= write, 0 = read eeprom

	unsigned char eepromData[300];
	unsigned short dataOffset = 0x0000;
	unsigned int dataLength = 300;

	unsigned int instance = 0;
	dataLength = 32; //300;
	unsigned char writeData[] = { 0xAA, 0x55, 0x33, 0xee, 'A', '3', '3', '5',
			'B', 'N', 'L', 'T', '0', '0', 'A', '0', '1', '1', '4', 'P', '1',
			'2', '3', '4', '9', '9', '9', '3', '2', 'E', 'N', 'D' }; // 32 characters total
	//unsigned char writeData[]={'w','e','s','t','-' ,'w','a','t','a','1','2','3','4','5','6','7','8','9','0','w'};
//	 unsigned char writeData[300];
//	 for (i=0; i<32;i++)
//	 {
//		writeData[i]=0xff;
//	}
//	dataLength = 300;
	unsigned char busNum = 0;
	unsigned short slaveAddr = 0x50;
	unsigned char buffer[299];
	//unsigned int bufLen = 2;
	unsigned char *pDataRead[1];
	for (i = 0; i < 20; i++) {
		if (toggle == 0) {
			toggle = 1;
			dataOffset = 0x0000;
			dataLength = 300;
				EEPROMI2CRead(eepromData, dataLength, dataOffset);
			//plat  I2CWrite(instance,slaveAddr,buffer, bufLen,dataWritten);

		} else {
			toggle = 0;
			char i23 = '0';

			switch(i)
			{
			case 1:
			i23 = 'a';
			break;
			case 2:
				dataOffset = 96;//0x60 - multiples of 32
			i23 = 'b';
			break;
			case 3:
			i23 = 'c';
			break;
			case 4:
				dataOffset = 192; //0Xc0;
			i23 = 'd';
			break;
			case 5:
						i23 = 'e';
						break;
			case 6:
						i23 = 'f';
						break;
			case 7:
						i23 = 'g';
						break;
			case 8:
						i23 = 'h';
						break;
			default:
			i23 =0xff;
			}
			int i22 = 0;
//							 for (i22=0; i22<32;i22++)
//								 {
//									writeData[i22]=i23;
//								}
			//bufLen = 300;
			//plat  I2CRead(busNum,slaveAddr,buffer,bufLen,pDataRead);

			//dataOffset = 0x00; //0Xc8; //0xc8 =200//0x6e = memory start 110
			dataLength = 34;
			//I2CSlaveAdressCounterSetup(SOC_I2C_0_REGS, I2C_SLAVE_ADDR,dataLength);
			EEPROMI2CWrite(writeData, dataLength, dataOffset);
		}
	}

	//  initHREG(SOC_CM_DPLL_REGS,CM_DPLL_CLKSEL_TIMER6_CLK, CONTROL_CLKSEL_TIMER_TCLKIN);
	//  initHREG(SOC_CM_DPLL_REGS,CM_DPLL_CLKSEL_TIMER7_CLK, CONTROL_CLKSEL_TIMER_TCLKIN);
	//PeripheralsSetUp();
	Task_Handle task;
	Error_Block eb;

	System_printf("enter main()\n");

	Error_init(&eb);
	task = Task_create(taskFxn, NULL, &eb);

	if (task == NULL) {
		System_printf("Task_create() failed!\n");
		BIOS_exit(0);
	}

	BIOS_start(); /* does not return */
	return (0);
}

/*
 ** A wrapper function performing UART Configurations.
 */
//RK study this one
static void UartConfigure(unsigned int baudRate, unsigned int lineCharConfig) {
	UartBaudRateSet(baudRate);

	/* Switching to Configuration Mode B. */
	UARTRegConfigModeEnable(UART_INSTANCE_BASE_ADD, UART_REG_CONFIG_MODE_B);// UART_REG_CONFIG_MODE_B

	UartLineCharacSet(lineCharConfig);

	/* Disabling write access to Divisor Latches. */
	UARTDivisorLatchDisable(UART_INSTANCE_BASE_ADD);

	/* Disabling Break Control. */
	UARTBreakCtl(UART_INSTANCE_BASE_ADD, UART_BREAK_COND_DISABLE);

	/* Switching to UART16x operating mode. */
	UARTOperatingModeSelect(UART_INSTANCE_BASE_ADD, UART16x_OPER_MODE);
}
/*
 ** A wrapper function performing FIFO configurations.
 */

static void UartFIFOConfigure(void) {
	unsigned int fifoConfig = 0;

	/*
	 ** - Transmit Trigger Level Granularity is 4
	 ** - Receiver Trigger Level Granularity is 1
	 ** - Transmit FIFO Space Setting is 56. Hence TX Trigger level
	 **   is 8 (64 - 56). The TX FIFO size is 64 bytes.
	 ** - The Receiver Trigger Level is 1.
	 ** - Clear the Transmit FIFO.
	 ** - Clear the Receiver FIFO.
	 ** - DMA Mode enabling shall happen through SCR register.
	 ** - DMA Mode 0 is enabled. DMA Mode 0 corresponds to No
	 **   DMA Mode. Effectively DMA Mode is disabled.
	 */
	fifoConfig = UART_FIFO_CONFIG(UART_TRIG_LVL_GRANULARITY_4,
			UART_TRIG_LVL_GRANULARITY_1, UART_FCR_TX_TRIG_LVL_56, 1, 1, 1,
			UART_DMA_EN_PATH_SCR, UART_DMA_MODE_0_ENABLE);

	/* Configuring the FIFO settings. */
	UARTFIFOConfig(UART_INSTANCE_BASE_ADD, fifoConfig);
}

/*
 ** A wrapper function performing UART Baud Rate settings.
 */

static void UartBaudRateSet(unsigned int baudRate) {
	unsigned int divisorValue = 0;

	/* Computing the Divisor Value. */
	divisorValue = UARTDivisorValCompute(UART_MODULE_INPUT_CLK, baudRate,
	UART16x_OPER_MODE,
	UART_MIR_OVERSAMPLING_RATE_42);

	/* Programming the Divisor Latches. */
	UARTDivisorLatchWrite(UART_INSTANCE_BASE_ADD, divisorValue);
}

/*
 ** A wrapper function performing UART Line Characteristics Configuration.
 */

static void UartLineCharacSet(unsigned int lineCharConfig) {
	unsigned int wLenStbFlag = 0;
	unsigned int parityFlag = 0;

	wLenStbFlag = (lineCharConfig & (UART_LCR_NB_STOP | UART_LCR_CHAR_LENGTH));
	parityFlag = (lineCharConfig & (UART_LCR_PARITY_TYPE2 |
	UART_LCR_PARITY_TYPE1 |
	UART_LCR_PARITY_EN));

	UARTLineCharacConfig(UART_INSTANCE_BASE_ADD, wLenStbFlag, parityFlag);
}

static void Delay(volatile unsigned int count) {
	while (count--)
		;
}

void initRTC() {
	/* Performing the System Clock configuration for RTC. */
	RTCModuleClkConfig();

	/* Disabling Write Protection for RTC registers.*/
	RTCWriteProtectDisable(SOC_RTC_0_REGS);

	/* Selecting Internal Clock source for RTC. */
	RTC32KClkSourceSelect(SOC_RTC_0_REGS, RTC_INTERNAL_CLK_SRC_SELECT);

	/* Enabling RTC to receive the Clock inputs. */
	RTC32KClkClockControl(SOC_RTC_0_REGS, RTC_32KCLK_ENABLE);

	/* Enable the RTC module. */
	RTCEnable(SOC_RTC_0_REGS);

	/*----------------------*/

	/* Programming calendar information in the Calendar registers. */
	RTCCalendarSet(SOC_RTC_0_REGS, userCalendar);

	/* Programming the time information in the Time registers. */
	RTCTimeSet(SOC_RTC_0_REGS, userTime);

	/* Set the 32KHz counter to run. */
	RTCRun(SOC_RTC_0_REGS);

	/* Enabling RTC interrupts. Configuring RTC to interrupt every second.*/
	RTCIntTimerEnable(SOC_RTC_0_REGS, RTC_INT_EVERY_SECOND);
}
/*
 ** This function configures the AINTC to receive RTC interrupts.
 */

static void RTCAINTCConfigure(void) {
	/* Initializing the ARM Interrupt Controller. */
	IntAINTCInit();

	/* Registering the Interrupt Service Routine(ISR). */
	IntRegister(SYS_INT_RTCINT, RTCIsr);

	/* Setting the priority for the system interrupt in AINTC. */
	IntPrioritySet(SYS_INT_RTCINT, 0, AINTC_HOSTINT_ROUTE_IRQ);

	/* Enabling the system interrupt in AINTC. */
	IntSystemEnable(SYS_INT_RTCINT);
}

/*
 ** This function prints the current time read from the RTC registers.
 */
static void TimeResolve(unsigned int timeValue) {
	unsigned char timeArray[3] = { 0 };
	unsigned char bytePrint[2] = { 0 };
	unsigned int count = 0, i = 0;
	unsigned int asciiTime = 0;

	timeArray[0] = (unsigned char) ((timeValue & MASK_HOUR) >> HOUR_SHIFT);
	timeArray[1] = (unsigned char) ((timeValue & MASK_MINUTE) >> MINUTE_SHIFT);
	timeArray[2] = (unsigned char) ((timeValue & MASK_SECOND) >> SECOND_SHIFT);

	while (count < 3) {
		i = 0;
		asciiTime = intToASCII(timeArray[count]);
		bytePrint[0] = (unsigned char) ((asciiTime & 0x0000FF00) >> 0x08);
		bytePrint[1] = (unsigned char) (asciiTime & 0x000000FF);
		while (i < 2) {
			ConsoleUtilsPrintf("%c", (bytePrint[i]));
			i++;
		}
		count++;
		if (count != 3) {
			ConsoleUtilsPrintf("%c", ':');
		} else {
			ConsoleUtilsPrintf("%c", ' ');
		}
	}
}
void initUart() {
	/*
	 unsigned char *pTxStr[NUM_TX_STRINGS] = {welcome, enter};
	 unsigned int numByteChunks[NUM_TX_STRINGS] = {0};
	 unsigned int remainBytes[NUM_TX_STRINGS] = {0};
	 static unsigned char *qTxStr = NULL;
	 unsigned int lineCharConfig = 0;
	 unsigned int numBytesTx = 0;
	 unsigned int baudRate = 0;
	 int retVal = -1;
	 */
	/* Setup the MMU and do necessary MMU configurations. */
	//    MMUConfigAndEnable();
	/* Enable all levels of CACHE. */
	//    CacheEnable(CACHE_ALL);
	/* Configuring the system clocks for UART0 instance. */
	UART0ModuleClkConfig();

	/* Performing the Pin Multiplexing for UART0 instance. */
	UARTPinMuxSetup(0);

	/* Performing a module reset. */
	UARTModuleReset(SOC_UART_0_REGS);

	/* Performing FIFO configurations. */
	UartFIFOConfigure();

	/* Performing Baud Rate settings. */
	//UartBaudRateSet(19200);
	UartConfigure(BAUD_RATE_115200, (UART_FRAME_WORD_LENGTH_8 |
	UART_FRAME_NUM_STB_1 |
	UART_PARITY_NONE));

	/* Select the console type based on compile time check */
	//ConsoleUtilsSetType(CONSOLE_UART);
	/* Enabling IRQ in CPSR of ARM processor. */
	//IntMasterIRQEnable();
	/* Configuring AINTC to receive UART0 interrupts. */
	//UARTINTCConfigure();
	/* Enabling required UART Interrupts. */
	UARTIntEnable(UART_INSTANCE_BASE_ADD,
			(UART_INT_LINE_STAT | UART_INT_THR | UART_INT_RHR_CTI));
}

void UartInterruptEnable(void) {
	/* Enabling IRQ in CPSR of ARM processor. */
	IntMasterIRQEnable();

	/* Configuring AINTC to receive UART0 interrupts. */
	UART0AINTCConfigure();

	/* Enabling the specified UART interrupts. */
	UARTIntEnable(SOC_UART_0_REGS,
			( UART_INT_LINE_STAT | UART_INT_THR | UART_INT_RHR_CTI));
}

void IsrUARTCheck(void) {
	unsigned int rxByte = 0;
	unsigned int rxCntr = 0;
	unsigned int intId = 0;

	/* Checking ths source of UART interrupt. */
	intId = UARTIntIdentityGet(SOC_UART_0_REGS);

	switch (intId) {
	case UART_INTID_TX_THRES_REACH:
		/* Disabling the THR interrupt. */
		UARTIntDisable(SOC_UART_0_REGS, UART_INT_THR);
		break;

	case UART_INTID_RX_THRES_REACH:
		rxByte = UARTCharGetNonBlocking(SOC_UART_0_REGS);

		/* Check for buffer overflow */
		//assert ( rxCntr < RX_BUFFER_LENGTH );
		/* Process incoming data */
		//rxData[rxCntr++] = rxByte;
		//tasks[IDX_SAVE_DATA].runFunc = TRUE;
		break;

	case UART_INTID_RX_LINE_STAT_ERROR:
	case UART_INTID_CHAR_TIMEOUT:
		rxCntr = 0;
		rxByte = UARTCharGetNonBlocking(SOC_UART_0_REGS);
		//printf("%X ", rxByte);
		break;

	default:
		break;
	}
}

void UART0AINTCConfigure(void) {
	/* Initializing the ARM Interrupt Controller. */
	IntAINTCInit();

	/* Registering the Interrupt Service Routine(ISR). */
	IntRegister( SYS_INT_UART0INT, IsrUARTCheck);

	/* Setting the priority for the system interrupt in AINTC. */
	IntPrioritySet( SYS_INT_UART0INT, 0, AINTC_HOSTINT_ROUTE_IRQ);

	/* Enabling the system interrupt in AINTC. */
	IntSystemEnable( SYS_INT_UART0INT);
}

//*****************************************************************************
//
// Send a string to the UART.
//
//*****************************************************************************
void UARTSend(const unsigned char *pucBuffer, unsigned long ulCount) {
	//
	// Loop while there are more characters to send.
	//
	while (ulCount--) {
		//
		// Write the next character to the UART.
		//
		UARTCharPutNonBlocking(SOC_UART_0_REGS, *pucBuffer++);
	}
}
/*******************************************************************************
 **                     FUNCTION DEFINITIONS TIMER2
 *******************************************************************************/
/**
 * \brief   Enable the DMTimer interrupts.
 *
 * \param  timerNumber    timer to be set.
 * 	isr function name isrTimerx wehre x is timer number.
 *
 * 'intFlags' can take the following values \n
 *    DMTIMER_INT_TCAR_EN_FLAG - IRQ enable for capture \n
 *   all flags = DMTIMER_INT_OVF_EN_FLAG - IRQ enable for overflow \n
 *    DMTIMER_INT_MAT_EN_FLAG - IRQ enable for match \n
 *
 * \return  None.
 *
 **/
void timerIntRegisterSet(unsigned int timerNumber) {

	switch (timerNumber) {
	case 0: // timer0
		IntRegister(SYS_INT_TINT0, isrTimer0);

		/* Set the priority */
		IntPrioritySet(SYS_INT_TINT0, 0, AINTC_HOSTINT_ROUTE_IRQ);

		/* Enable the system interrupt */
		IntSystemEnable(SYS_INT_TINT0);
		break;
	case 1: // timer1

		break;
	case 2: // timer2
		IntRegister(SYS_INT_TINT2, isrTimer2);

		/* Set the priority */
		IntPrioritySet(SYS_INT_TINT2, 0, AINTC_HOSTINT_ROUTE_IRQ);

		/* Enable the system interrupt */
		IntSystemEnable(SYS_INT_TINT2);
		break;
	case 3: // timer1
		IntRegister(SYS_INT_TINT3, isrTimer3);

		/* Set the priority */
		IntPrioritySet(SYS_INT_TINT3, 0, AINTC_HOSTINT_ROUTE_IRQ);

		/* Enable the system interrupt */
		IntSystemEnable(SYS_INT_TINT3);
		break;
	case 4: // timer4
		IntRegister(SYS_INT_TINT4, isrTimer4);

		/* Set the priority */
		IntPrioritySet(SYS_INT_TINT4, 0, AINTC_HOSTINT_ROUTE_IRQ);

		/* Enable the system interrupt */
		IntSystemEnable(SYS_INT_TINT4);
		break;
	case 5: // timer5
		IntRegister(SYS_INT_TINT5, isrTimer5);

		/* Set the priority */
		IntPrioritySet(SYS_INT_TINT5, 0, AINTC_HOSTINT_ROUTE_IRQ);

		/* Enable the system interrupt */
		IntSystemEnable(SYS_INT_TINT5);
		break;
	case 6: // timer6
		IntRegister(SYS_INT_TINT6, isrTimer6);

		/* Set the priority */
		//	    IntPrioritySet(SYS_INT_TINT6, 0, AINTC_HOSTINT_ROUTE_IRQ);
		/* Enable the system interrupt */
		IntSystemEnable(SYS_INT_TINT6);
		break;
	case 7: // timer7
		IntRegister(SYS_INT_TINT7, isrTimer7);

		/* Set the priority */
		IntPrioritySet(SYS_INT_TINT7, 0, AINTC_HOSTINT_ROUTE_IRQ);

		/* Enable the system interrupt */
		IntSystemEnable(SYS_INT_TINT7);
		break;
	default:

		break;
	}
}

void initAllTimers() {

	timerIntRegisterSet(3);
	timerIntRegisterSet(4);
	//timerIntRegisterSet(6);
	//timerIntRegisterSet(7);

	timerConfig(3);
	timerConfig(4);
	//timerConfig(6);
	//timerConfig(7);

	timerInterruptsInit(3);
	timerInterruptsInit(4);
	//  timerInterruptsInit(6);
	//timerInterruptsInit(7);

	timerSetUp(3);
	timerSetUp(4);
	//timerSetUp(6);
	//timerSetUp(7);

	initRTC();
}
/*
 * Reset all Timer Count variables
 */
void timerResetCounts(void) {

	/* get sensor volumn run time totals */
	timer3OverflowCount = 0;
	timer3RunEndCount = 0;
	timer4OverflowCount = 0;
	timer4RunEndCount = 0;
	timer6OverflowCount = 0;
	timer6RunEndCount = 0;
	timer7OverflowCount = 0;
	timer7RunEndCount = 0;

	/* reset run counters */
	DMTimerCounterSet(SOC_DMTIMER_3_REGS, 0);
	DMTimerCounterSet(SOC_DMTIMER_4_REGS, 0);
	DMTimerCounterSet(SOC_DMTIMER_6_REGS, 0);
	DMTimerCounterSet(SOC_DMTIMER_7_REGS, 0);
}

void timerSetUp(unsigned int timerNumber) {
	switch (timerNumber) {
	case 0: // timer0
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_0_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		// DMTimerReloadSet(SOC_DMTIMER_0_REGS, TIMER_RLD_COUNT);
		/* Configure the DMTimer for Auto-reload and compare mode */
		DMTimerModeConfigure(SOC_DMTIMER_0_REGS, (DMTIMER_TCLR_AR |
		DMTIMER_TCLR_PRE));
		break;
	case 1: // timer1
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_1_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_1_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for Auto-reload and compare mode */
		DMTimerModeConfigure(SOC_DMTIMER_1_REGS, DMTIMER_AUTORLD_NOCMP_ENABLE);
		break;
	case 2: // timer2
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_2_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_2_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for Auto-reload and compare mode */
		DMTimerModeConfigure(SOC_DMTIMER_2_REGS, DMTIMER_AUTORLD_NOCMP_ENABLE);
		break;
	case 3: // timer1
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_3_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_3_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for Auto-reload and compare mode */
		DMTimerModeConfigure(SOC_DMTIMER_3_REGS, (DMTIMER_TCLR_AR |
		DMTIMER_TCLR_PRE));
		break;
	case 4: // timer4
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_4_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_4_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for Auto-reload and compare mode */
		DMTimerModeConfigure(SOC_DMTIMER_4_REGS, (DMTIMER_TCLR_AR |
		DMTIMER_TCLR_PRE));
		break;
	case 5: // timer5
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_5_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_5_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for Auto-reload and compare mode */
		DMTimerModeConfigure(SOC_DMTIMER_5_REGS,
		DMTIMER_AUTORLD_NOCMP_ENABLE | 0x300);
		break;
	case 6: // timer6
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_6_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_6_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for Auto-reload and compare mode */
		DMTimerModeConfigure(SOC_DMTIMER_6_REGS,
		DMTIMER_AUTORLD_NOCMP_GPOIN_ENABLE | 0x300);
		break;
	case 7: // timer7
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_7_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_7_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for Auto-reload and compare mode */
		DMTimerModeConfigure(SOC_DMTIMER_7_REGS,
		DMTIMER_AUTORLD_NOCMP_GPOIN_ENABLE);
		break;
	default:

		break;
	}
}

void timerConfig(unsigned int timerNumber) {

	/*
	 ** Enables the Timer Interrupts
	 */

	switch (timerNumber) {
	case 0: // timer0
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_0_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_0_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for auto reset mode */
		DMTimerModeConfigure(SOC_DMTIMER_0_REGS, DMTIMER_AUTORLD_NOCMP_ENABLE);

		timerStop(timerNumber);
		break;
	case 1: // timer1
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_1_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_1_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for one shot mode */
		DMTimerModeConfigure(SOC_DMTIMER_1_REGS, DMTIMER_AUTORLD_NOCMP_ENABLE);

		timerStop(timerNumber);
		break;
	case 2: // timer2
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_2_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_2_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for one shot mode */
		DMTimerModeConfigure(SOC_DMTIMER_2_REGS, DMTIMER_AUTORLD_NOCMP_ENABLE);

		timerStop(timerNumber);
		break;
	case 3: // timer3
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_3_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_3_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for one shot mode */
		DMTimerModeConfigure(SOC_DMTIMER_3_REGS, DMTIMER_AUTORLD_NOCMP_ENABLE);

		timerStop(timerNumber);
		break;
	case 4: // timer4
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_4_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_4_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for one shot mode */
		DMTimerModeConfigure(SOC_DMTIMER_4_REGS, DMTIMER_AUTORLD_NOCMP_ENABLE);

		timerStop(timerNumber);
		break;
	case 5: // timer5
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_5_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_5_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for one shot mode */
		DMTimerModeConfigure(SOC_DMTIMER_5_REGS, DMTIMER_AUTORLD_NOCMP_ENABLE);

		timerStop(timerNumber);
		break;
	case 6: // timer6
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_6_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_6_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for one shot mode */
		DMTimerModeConfigure(SOC_DMTIMER_6_REGS, DMTIMER_AUTORLD_NOCMP_ENABLE);

		timerStop(timerNumber);

		break;
	case 7: // timer7
		/* Load the counter with the initial count value */
		DMTimerCounterSet(SOC_DMTIMER_7_REGS, TIMER_INITIAL_COUNT);

		/* Load the load register with the reload count value */
		DMTimerReloadSet(SOC_DMTIMER_7_REGS, TIMER_RLD_COUNT);

		/* Configure the DMTimer for one shot mode */
		DMTimerModeConfigure(SOC_DMTIMER_7_REGS, DMTIMER_AUTORLD_NOCMP_ENABLE);

		timerStop(timerNumber);
		break;
	default:

		break;
	}
}

void timerInterruptsInit(unsigned int timerNumber) {
	/*
	 ** Enables the Timer Interrupts
	 */
	switch (timerNumber) {
	case 0: // timer0
		/* Enable the DMTimer interrupts */
		DMTimerIntEnable(SOC_DMTIMER_0_REGS, DMTIMER_INT_OVF_EN_FLAG);
		break;
	case 1: // timer1
		/* Enable the DMTimer interrupts */
		DMTimerIntEnable(SOC_DMTIMER_1_REGS, DMTIMER_INT_OVF_EN_FLAG);
		break;
	case 2: // timer2
		/* Enable the DMTimer interrupts */
		DMTimerIntEnable(SOC_DMTIMER_2_REGS, DMTIMER_INT_OVF_EN_FLAG);
		break;
	case 3: // timer3
		/* Enable the DMTimer interrupts */
		DMTimerIntEnable(SOC_DMTIMER_3_REGS, DMTIMER_INT_OVF_EN_FLAG);
		break;
	case 4: // timer4
		/* Enable the DMTimer interrupts */
		DMTimerIntEnable(SOC_DMTIMER_4_REGS, DMTIMER_INT_OVF_EN_FLAG);
		break;
	case 5: // timer5
		/* Enable the DMTimer interrupts */
		DMTimerIntEnable(SOC_DMTIMER_5_REGS, DMTIMER_INT_OVF_EN_FLAG);
		break;
	case 6: // timer6
		/* Enable the DMTimer interrupts */
		DMTimerIntEnable(SOC_DMTIMER_6_REGS, DMTIMER_INT_OVF_EN_FLAG);
		break;
	case 7: // timer7
		/* Enable the DMTimer interrupts */
		DMTimerIntEnable(SOC_DMTIMER_7_REGS, DMTIMER_INT_OVF_EN_FLAG);
		break;
	default:

		break;
	}
}
/**
 * \brief   Set up DMTimer count values.
 *
 * \timerNumber 	timer number to be set
 * Configure the DMTimer for auto reset mode
 *
 * sends stoptimer command
 *
 * \return  None.
 *
 **/
/*
 ** Stops the Timer. The Timer Counter is Reset.
 */
void timerStop(unsigned int timerNumber) {

	switch (timerNumber) {
	case 0: // timer0
		DMTimerDisable(SOC_DMTIMER_0_REGS);
		break;
	case 1: // timer1
		DMTimerDisable(SOC_DMTIMER_1_REGS);
		break;
	case 2: // timer2
		DMTimerDisable(SOC_DMTIMER_2_REGS);
		break;
	case 3: // timer3
		DMTimerDisable(SOC_DMTIMER_3_REGS);
		break;
	case 4: // timer4
		DMTimerDisable(SOC_DMTIMER_4_REGS);
		break;
	case 5: // timer5
		DMTimerDisable(SOC_DMTIMER_5_REGS);
		break;
	case 6: // timer6
		DMTimerDisable(SOC_DMTIMER_6_REGS);
		break;
	case 7: // timer7
		DMTimerDisable(SOC_DMTIMER_7_REGS);
		break;
	default:

		break;
	}
}
/*********************************************************/
/*						I2C
 /*********************************************************/
void I2CDMAInteruptSetup(unsigned int baseAdd) {
//set interrupt bits
	I2CMasterIntEnableEx(baseAdd,
			(I2C_INT_GENERAL_CALL |I2C_IRQENABLE_SET_ASS_IE
					 | I2C_IRQENABLE_SET_BF_IE|I2C_IRQENABLE_SET_GC_IE|I2C_IRQENABLE_SET_XDR_IE
					 | I2C_IRQENABLE_SET_XRDY_IE |I2C_IRQENABLE_SET_RRDY_IE| I2C_IRQENABLE_SET_NACK_IE ));//I2C_IRQENABLE_SET_XDR_IE | I2C_IRQENABLE_SET_XRDY_IE| I2C_IRQENABLE_SET_RRDY_IE |
//set I2C_CON Bits
	I2CMasterEnable(baseAdd);
	//I2CDMATxEventEnable(baseAdd);
	//I2CDMARxEventEnable(baseAdd);
	//I2CDMATxEventDisable(baseAdd);
	//I2CDMARxEventDisable(baseAdd);
	I2CWakeUpEnable(baseAdd, I2C_WAKE_UP_DATA_RECV_TX_RDY, I2C_WAKE_UP_IRQ);
//enable DMA if used
	//I2CWakeUpEnable(baseAdd, I2C_WAKE_UP_DATA_RECV_TX_RDY,I2C_WAKE_UP_DMA_TRANSMIT);
	//I2CWakeUpEnable(baseAdd, I2C_WAKE_UP_DATA_RECV_TX_RDY,I2C_WAKE_UP_DMA_RECV);
	//int thresholdVal =1;
	//I2CFIFOThresholdConfig(baseAdd, thresholdVal,I2C_TX_MODE);
	//I2CFIFOThresholdConfig(baseAdd, thresholdVal,I2C_RX_MODE);

	/* Enable IRQ in CPSR */
	// IntMasterIRQEnable();
	/* Configures AINTC to generate interrupt */
	I2CMasterEnable(baseAdd);

}
void I2CSlaveAdressCounterSetup(unsigned int baseAdd, unsigned int slaveAdd,
		unsigned int count) {
	//Init I2C_SA and I2C_CNT regfisters
	I2CMasterSlaveAddrSet(baseAdd, slaveAdd);
	I2CSetDataCount(baseAdd, count);
}
void initI2CEE() {
	unsigned int i;
	unsigned char temp;

	/*
	 ** Configures I2C to Master mode to generate start codition
	 ** on I2C bus and to transmit data at a bus speed of  100khz
	 */
	 //SetupI2C();
	//rk EpromRead();
}

/**
 * \change a memory location
 * \param  baseAdd      The memory address base address
 * \param  offsetReg	specic register address offset from baseadd
 * \param  value    	value to put in the bas Add location
 * \return None
 */
void initHREG(unsigned int baseAdd, unsigned int offsetReg, unsigned int value) {
	/* Checking if pin is required to be an output pin. */

	HWREG(baseAdd + offsetReg) = value;	 //GPO_CFG bit 14 of DMTIMER_TCLR

}
/**
 * \brief  This API configures the direction of a specified GPIO pin as being
 *         either input or output.
 *
 * \param  baseAdd       The memory address of the GPIO instance being used
 * \param  pinNumber     The number of the pin in the GPIO instance
 * \param  pinDirection  The required direction for the GPIO pin
 *
 * 'pinReg' Timer register to configure pin:
 *
 *
 * 'pinDirection' can take one of the following values:
 * - GPIO_DIR_INPUT - to configure the pin as an input pin\n
 * - GPIO_DIR_OUTPUT - to configure the pin as an output pin\n
 *
 * \return None
 */

void timerDirModeSet(unsigned int baseAdd, unsigned int pinReg,
		unsigned int pinDirection) {
	/* Checking if pin is required to be an output pin. */
	if (!pinDirection) {
		HWREG(baseAdd + pinReg) &= ~(1 << 14);//GPO_CFG bit 14 of DMTIMER_TCLR
	} else {
		HWREG(baseAdd + pinReg) |= (1 << 14);	//GPO_CFG bit 14 or DMTIMER_TCLR
	}
}
/**
 * \brief  This function does the pin multiplexing for any GPIO Pin.
 *
 * \param  pinReg   This is the offset reigster Control Register
 *
 * \param  padConfValue This is the value to be written to the Pad Control
 *                      register whose offset address is given by 'offsetAddr'.
 *
 * The 'offsetAddr' and 'padConfValue' can be obtained from macros defined
 * in the file 'include/armv7a/am335x/pin_mux.h'.\n
 *
 * \return  None.
 */
void timerPinMuxSetup(unsigned int pinReg, unsigned int padConfValue) {
	HWREG(SOC_CONTROL_REGS + pinReg) = (padConfValue);

}

/*
 ** Initializes ECAP MUST setup both ECCTL1 & ECCTL2 register for capture/pwm modes
 */
void initEcap(void) {
	/* Set ecap_evt_capt register to eCap events on Vol1 dig ins and Meter Pulse in */
	// HWREG(0x44E00000 + CM_PER_EPWMSS0_CLKCTRL) =0x02;
	// ECAPSetEvtCaptureRegister(ti_sysbios_knl_Event_Id_17,ti_sysbios_knl_Event_Id_18,ti_sysbios_knl_Event_Id_19 );
	ECAPSetEvtCaptureRegister(20, 18, 19);

	/* Configure ECAP_ECCTL1 Event trigger edge 1=rising edge */
	ECAPCapeEvtPolarityConfig(SOC_ECAP_2_REGS, ECAP_APWM_ACTIVE_LOW,
	ECAP_APWM_ACTIVE_LOW, ECAP_APWM_ACTIVE_LOW, ECAP_APWM_ACTIVE_LOW);

	/* Configure ECAP_ECCTL1 Event Counter reset 0=do not reset on capture event */
	ECAPCaptureEvtCntrRstConfig(SOC_ECAP_2_REGS, ECAP_APWM_ACTIVE_HIGH,
	ECAP_APWM_ACTIVE_HIGH, ECAP_APWM_ACTIVE_HIGH,
	ECAP_APWM_ACTIVE_HIGH);

	/*Configure ECAP_ECCTL1 enblable capture loading    */
	ECAPCaptureLoadingEnable(SOC_ECAP_2_REGS);

	/*configure ecap prescale from 0 to 60 */
	ECAPPrescaleConfig(SOC_ECAP_2_REGS, 0);

	/*rk Configure ECAP_ECCTL2 to Capture mode*/
	ECAPOperatingModeSelect(SOC_ECAP_2_REGS, ECAP_CAPTURE_MODE);

	/*rk Configure ECAP_ECCTL2 to Continous mode*/
	//ECAPContinousModeConfig(SOC_ECAP_2_REGS);
	// Configure as 1 shot ending on event sent in
	ECAPOneShotModeConfig(SOC_ECAP_2_REGS, ECAP_CAPTURE_EVENT4_STOP);

	/*rk Configure ECAP_ECCTL2 to Time Stamp freerunning 1=free run 0=stopped*/
	ECAPCounterControl(SOC_ECAP_2_REGS, ECAP_COUNTER_FREE_RUNNING);

	/* Configure sync0_sel bits */
	ECAPSyncInOutSelect(SOC_ECAP_2_REGS, ECAP_ENABLE_COUNTER, ECAP_SYNC_IN);

	/* Set Counter to 0*/
	ECAPCounterConfig(SOC_ECAP_2_REGS, 0);

	/* enable interrupts */
	ECAPIntEnable(SOC_ECAP_2_REGS,
			(ECAP_CEVT1_INT | ECAP_CEVT2_INT | ECAP_CEVT3_INT | ECAP_CEVT4_INT
					| ECAP_CNTOVF_INT));

	/* clear interrupt flags */
	clearAllQEPInts();
	/* Enable Clock  */
	//    ECAPClockEnable(SOC_PWMSS2_REGS);
	//ECAPClockEnable(SOC_PRCM_REGS);
}
/**
 * \RK brief  This function Set the Ecap Events to Capture
 *
 * \param  ECAP0,ECAP1,ECAP2   Ecap Events See AM3358 table section 9.2.4.4.5
 *
 * \param  padConfValue This is the value to be written to the Pad Control
 * \return  None.
 */
void ECAPSetEvtCaptureRegister(unsigned int ECAP0, unsigned int ECAP1,
		unsigned int ECAP2) {
	/*  shift then "OR" all values into register */
	HWREG(SOC_CONTROL_REGS + 0xFd4) |= (ECAP2 << 16) | (ECAP1 << 8) | (ECAP0);
}
/**
 * \RK Clear all QEP interrupt flags
 * \return  None.
 */
void clearAllQEPInts(void) {

	ECAPIntStatusClear(SOC_ECAP_2_REGS, ECAP_CEVT1_INT);
	ECAPIntStatusClear(SOC_ECAP_2_REGS, ECAP_CEVT2_INT);
	ECAPIntStatusClear(SOC_ECAP_2_REGS, ECAP_CEVT3_INT);
	ECAPIntStatusClear(SOC_ECAP_2_REGS, ECAP_CEVT4_INT);
	ECAPIntStatusClear(SOC_ECAP_2_REGS, ECAP_CNTOVF_INT);
	ECAPIntStatusClear(SOC_ECAP_2_REGS, ECAP_ECFLG_INT);

}
/*
 ** Starts the Timer
 */
void timerStart(unsigned int timerNumber) {
	/* Start the DMTimer */

	switch (timerNumber) {
	case 0: // timer0
		DMTimerEnable(SOC_DMTIMER_0_REGS);
		break;
	case 1: // timer1
		DMTimerEnable(SOC_DMTIMER_1_REGS);
		break;
	case 2: // timer2
		DMTimerEnable(SOC_DMTIMER_2_REGS);
		break;
	case 3: // timer3
		DMTimerEnable(SOC_DMTIMER_3_REGS);
		break;
	case 4: // timer4
		DMTimerEnable(SOC_DMTIMER_4_REGS);
		break;
	case 5: // timer5
		DMTimerEnable(SOC_DMTIMER_5_REGS);
		break;
	case 6: // timer6
		DMTimerEnable(SOC_DMTIMER_6_REGS);
		break;
	case 7: // timer7
		DMTimerEnable(SOC_DMTIMER_7_REGS);
		break;
	default:

		break;
	}
}
