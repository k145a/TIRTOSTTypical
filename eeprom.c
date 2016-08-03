/**
 * \file   eeprom.c
 *
 * \brief  This file contains functions for accessing eeprom
 */

/*
 * Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
 */
/*
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include "eeprom.h"

/******************************************************************************
 **                          FUNCTION DEFINITIONS
 ******************************************************************************/
/**
 * \brief   Sets up the EEPROM I2C interface - Disables all interupts
 *
 * \param   slaveAddr   Slave Address of the EEPROM
 *
 * \return  None.
 */
void EEPROMI2CSetUp(unsigned int slaveAddr) {
	/* Configuring system clocks for I2C0 instance. */
	I2C0ModuleClkConfig();

	/* Performing Pin Multiplexing for I2C0. */
	I2CPinMuxSetup(0); //I2C0PinMux();

	/* Disables the auto idle functionality */
	I2CAutoIdleDisable(I2C_BASE_ADDR);

	/* Put i2c in reset/disabled state */
	I2CMasterDisable(I2C_BASE_ADDR);

	/* Configure i2c bus speed to 100khz */
	I2CMasterInitExpClk(I2C_BASE_ADDR, 48000000, 24000000, 100000);

	/* Set i2c slave address */
	I2CMasterSlaveAddrSet(I2C_BASE_ADDR, slaveAddr); //rk must be 0x50 for BBB on board eeprom

	/* Disable all I2C interrupts */
	I2CMasterIntDisableEx(I2C_BASE_ADDR, 0xFFFFFFFF);

	/* Bring I2C module out of reset */
	I2CMasterEnable(I2C_BASE_ADDR);

	while (!I2CSystemStatusGet(I2C_BASE_ADDR))
		;
}
/**
 * \rk
 * \brief   This function write data to EEPROM.
 *
 * \param   data    Address where data is to be writen to.
 * \param   length  Length of data to be written
 * \param   offset  Address of the byte from which data to be read.
 *
 * \return  None.
 *
 * \note    This muxing depends on the profile in which the EVM is configured.
 *          EEPROMI2CSetUp Shall be called Before this API is used
 *          Acknowledge bit is automatically sent by i2c in receive mode.
 */
void EEPROMI2CWrite(unsigned char writeData[], unsigned int length,
		unsigned short offset) {
	unsigned int idx = 0;

	/* Set i2c slave address */
	I2CMasterSlaveAddrSet(SOC_I2C_0_REGS, 0x50);

	/* First send the register offset - TX operation */
	I2CSetDataCount(I2C_BASE_ADDR, length);

	StatusClear(I2C_BASE_ADDR);

	/* set the i2c to master=1 or slave=0 mode  */
	I2CMasterControl(I2C_BASE_ADDR, I2C_CFG_MST_TX);

//	I2CDMATxEventEnable(SOC_I2C_0_REGS);// enable events

	/* Transmit interrupt is enabled */
//	I2CMasterIntEnableEx(SOC_I2C_0_REGS, I2C_INT_TRANSMIT_READY);

	I2CMasterStart(I2C_BASE_ADDR);

	/* Wait for the START to actually occir on the bus */
	while (0 == I2CMasterBusBusy(I2C_BASE_ADDR));

	/* Wait for the Tx register to be empty GETS STUCK HERE */
	while (0 == I2CMasterIntRawStatusEx(I2C_BASE_ADDR, I2C_INT_TRANSMIT_READY));
	I2CMasterIntClearEx(I2C_BASE_ADDR, I2C_INT_TRANSMIT_READY);

	I2CMasterDataPut(I2C_BASE_ADDR, (unsigned char) ((offset >> 8) & 0xFF));

	/* Wait for the START to actually occir on the bus */
	//while (0 == I2CMasterBusBusy(I2C_BASE_ADDR));

	/* Wait for the Tx register to be empty GETS STUCK HERE */
	while (0 == I2CMasterIntRawStatusEx(I2C_BASE_ADDR, I2C_INT_TRANSMIT_READY));
	I2CMasterIntClearEx(I2C_BASE_ADDR, I2C_INT_TRANSMIT_READY);
	//rkwhile (0 == I2CMasterBusBusy(I2C_BASE_ADDR));
	//rkwhile (0== (I2CMasterIntRawStatus(I2C_BASE_ADDR) & I2C_INT_ADRR_READY_ACESS)); //I2C_INT_TRANSMIT_READY
	//StatusClear(I2C_BASE_ADDR);
	/* Push offset out and tell CPLD from where we intend to read the data */
	I2CMasterDataPut(I2C_BASE_ADDR, (unsigned char) (offset & 0xFF));

	/* Wait for the START to actually occir on the bus */
	while (0 == I2CMasterBusBusy(I2C_BASE_ADDR));

	while (0== (I2CMasterIntRawStatus(I2C_BASE_ADDR) & I2C_INT_TRANSMIT_READY));

	StatusClear(I2C_BASE_ADDR);

//	I2CSetDataCount(I2C_BASE_ADDR, length);

	/* Now that we have sent the register offset, start a TX operation*/
//	I2CMasterControl(I2C_BASE_ADDR, I2C_CFG_MST_TX);

	/* Transmit interrupt is enabled */
//	I2CMasterIntEnableEx(SOC_I2C_0_REGS, I2C_INT_TRANSMIT_READY);

	/* Repeated start condition */
//	I2CMasterStart(I2C_BASE_ADDR);

	//test 20 char array
	//char writeData[] ={'t','e','s','t','-' ,'d','a','t','a','1','2','3','4','5','6','7','8','9','0','-'};

	int i3 = 0;
	for (i3 = 0; i3 < 32; i3++) {
		/* Wait for the Tx register to be empty */
		while (0 == I2CMasterIntRawStatusEx(I2C_BASE_ADDR,I2C_INT_TRANSMIT_READY));
//if (i3 >30)
//{
//int q99 = 0;
//	//
//}
		//I2CMasterIntClearEx(I2C_BASE_ADDR, I2C_INT_NO_ACK );
		//data[idx++] = (unsigned char)I2CMasterDataGet(I2C_BASE_ADDR);
		/* Push offset out and tell CPLD from where we intend to read the data */
		I2CMasterDataPut(I2C_BASE_ADDR, (unsigned char) writeData[i3]);


		while (0== (I2CMasterIntRawStatus(I2C_BASE_ADDR) & I2C_INT_TRANSMIT_READY));
		I2CMasterIntClearEx(I2C_BASE_ADDR, I2C_INT_TRANSMIT_READY);
		StatusClear(I2C_BASE_ADDR);
		//while (0== (I2CMasterIntRawStatus(I2C_BASE_ADDR) & I2C_INT_ADRR_READY_ACESS));
		//StatusClear(I2C_BASE_ADDR);
//		while (0 == (I2CMasterIntRawStatus(I2C_BASE_ADDR)
//						& I2C_INT_ADRR_READY_ACESS));
//		// rk wait for acknowledge from slave device written to
//		//while (0 == I2CMasterIntRawStatusEx(I2C_BASE_ADDR, I2C_INT_NO_ACK));
//		I2CMasterIntClearEx(I2C_BASE_ADDR, I2C_INT_NO_ACK);
//		StatusClear(I2C_BASE_ADDR);
	}

	I2CMasterStop(I2C_BASE_ADDR);

//	while(0 == (I2CMasterIntRawStatus(I2C_BASE_ADDR) & I2C_INT_STOP_CONDITION));

	I2CMasterIntClearEx(I2C_BASE_ADDR, I2C_INT_STOP_CONDITION);
}

/**
 * \brief   This function reads data from EEPROM.
 *
 * \param   data    Address where data is to be written to .
 * \param   length  Length of data to be read
 * \param   offset  Address of the byte from which data to be written.
 *
 * \return  None.
 *
 * \note    This muxing depends on the profile in which the EVM is configured.
 *          EEPROMI2CSetUp Shall be called Before this API is used
 *          Acknowledge bit is automatically sent by i2c in receive mode.
 */
void EEPROMI2CRead(unsigned char *data, unsigned int length,
		unsigned short offset) {
	unsigned int idx = 0;

	/* First send the register offset - TX operation */
	I2CSetDataCount(I2C_BASE_ADDR, 2);

	StatusClear(I2C_BASE_ADDR);

	I2CMasterControl(I2C_BASE_ADDR, I2C_CFG_MST_TX);

	/* Set i2c slave address */
//	I2CMasterSlaveAddrSet(SOC_I2C_0_REGS, 0x50);// must use 0x50 for bbb eeprom

	/* Transmit interrupt is enabled */
//	I2CMasterIntEnableEx(SOC_I2C_0_REGS, I2C_INT_TRANSMIT_READY);
	/*I2C Transmit Event is enabled */
//	    I2CDMATxEventEnable(SOC_I2C_0_REGS);
	I2CMasterStart(I2C_BASE_ADDR);

	/* Wait for the START to actually occir on the bus */
	while (0 == I2CMasterBusBusy(I2C_BASE_ADDR))
		;

	I2CMasterDataPut(I2C_BASE_ADDR, (unsigned char) ((offset >> 8) & 0xFF));

	/* Wait for the Tx register to be empty GETS STUCK HERE*/
	while (0 == I2CMasterIntRawStatusEx(I2C_BASE_ADDR, I2C_INT_TRANSMIT_READY))
		;
	/* Push offset out and tell CPLD from where we intend to read the data */
	I2CMasterDataPut(I2C_BASE_ADDR, (unsigned char) (offset & 0xFF));

	I2CMasterIntClearEx(I2C_BASE_ADDR, I2C_INT_TRANSMIT_READY);

	while(0 == (I2CMasterIntRawStatus(I2C_BASE_ADDR) & I2C_INT_ADRR_READY_ACESS));

	StatusClear(I2C_BASE_ADDR);
//	while (0 == (I2CMasterIntRawStatus(I2C_BASE_ADDR) & I2C_INT_ADRR_READY_ACESS));
//
//	StatusClear(I2C_BASE_ADDR);

	I2CSetDataCount(I2C_BASE_ADDR, length);

	/* Now that we have sent the register offset, start a RX operation*/
	I2CMasterControl(I2C_BASE_ADDR, I2C_CFG_MST_RX);

	/* Receive and Stop Condition Interrupts are enabled */
//	I2CMasterIntEnableEx(SOC_I2C_0_REGS, I2C_INT_RECV_READY |
//	I2C_INT_STOP_CONDITION);
	/* Repeated start condition */
	I2CMasterStart(I2C_BASE_ADDR);

	while (length--) {
		while (0 == I2CMasterIntRawStatusEx(I2C_BASE_ADDR,
											I2C_INT_RECV_READY)); //RK MUST HAVE THE ';' or it gets stuck
			data[idx++] = (unsigned char) I2CMasterDataGet(I2C_BASE_ADDR);
		I2CMasterIntClearEx(I2C_BASE_ADDR, I2C_INT_RECV_READY);
	}

	I2CMasterStop(I2C_BASE_ADDR);

	//rkwhile(0 == (I2CMasterIntRawStatus(I2C_BASE_ADDR) & I2C_INT_STOP_CONDITION));

	I2CMasterIntClearEx(I2C_BASE_ADDR, I2C_INT_STOP_CONDITION);
}

/*
 ** rk modified
 ** Clear the status of all interrupts
 **
 * \param   i2c address in memory
 *
 * \return  none
 */
void StatusClear(unsigned int instAddr) {
	//unsigned int instAddr; //rk no need just send it the base address directly
	//instAddr = getI2CAddr(instNum);

	//I2CMasterIntEnableEx(instAddr, 0x7FF);
	I2CMasterIntClearEx(instAddr, 0xFFFF);
	//I2CMasterIntDisableEx(instAddr, 0x7FF);

}

/* Pin Multiplexing for I2C0. */
void I2C0PinMux(void) {
	HWREG(SOC_CONTROL_REGS + CONTROL_CONF_I2C0_SDA) =
			(CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_RXACTIVE
					| CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_SLEWCTRL
					| CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_PUTYPESEL);

	HWREG(SOC_CONTROL_REGS + CONTROL_CONF_I2C0_SCL) =
			(CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_RXACTIVE
					| CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_SLEWCTRL
					| CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_PUTYPESEL);
}

/* Read Data from EEPROM */
void BoardInfoRead(unsigned char *data) {
	EEPROMI2CSetUp(I2C_SLAVE_ADDR);
	EEPROMI2CRead(data, MAX_DATA, EEPROM_OFFSET);
}
/* RK CODE BELOW NOT PART OR ORIGINAL FILE  *//*
 *
 *
 /* Clear status of all interrupts */

/*
 ** Receives data over I2C bus
 */
static void SetupI2CReception(unsigned int dcount) {
	/* Data Count specifies the number of bytes to be transmitted */
	I2CSetDataCount(SOC_I2C_0_REGS, 0x02);

	numOfBytes = I2CDataCountGet(SOC_I2C_0_REGS);

	/* Clear status of all interrupts */
	// CleanUpInterrupts();
	/* Configure I2C controller in Master Transmitter mode */
	I2CMasterControl(SOC_I2C_0_REGS, I2C_CFG_MST_TX);

	/* Transmit interrupt is enabled */
	I2CMasterIntEnableEx(SOC_I2C_0_REGS, I2C_INT_TRANSMIT_READY);

	/* Generate Start Condition over I2C bus */
	I2CMasterStart(SOC_I2C_0_REGS);

	while (I2CMasterBusBusy(SOC_I2C_0_REGS) == 0)
		;

	while (tCount != numOfBytes)
		;

	flag2 = 1;

	/* Wait untill I2C registers are ready to access */
	while (!(I2CMasterIntRawStatus(SOC_I2C_0_REGS) & (I2C_INT_ADRR_READY_ACESS)))
		;

	/* Data Count specifies the number of bytes to be received */
	I2CSetDataCount(SOC_I2C_0_REGS, dcount);

	numOfBytes = I2CDataCountGet(SOC_I2C_0_REGS);

	//CleanUpInterrupts();

	/* Configure I2C controller in Master Receiver mode */
	I2CMasterControl(SOC_I2C_0_REGS, I2C_CFG_MST_RX);

	/* Receive and Stop Condition Interrupts are enabled */
	I2CMasterIntEnableEx(SOC_I2C_0_REGS, I2C_INT_RECV_READY |
	I2C_INT_STOP_CONDITION);

	/* Generate Start Condition over I2C bus */
	I2CMasterStart(SOC_I2C_0_REGS);

	while (I2CMasterBusBusy(SOC_I2C_0_REGS) == 0)
		;

	while (flag2)
		;

	flag2 = 1;
}

/** I2C Interrupt Service Routine. This function will read and write
 ** data through I2C bus.
 ** file: C:\ti\AM335X_StarterWare_02_00_01_01\examples\evmAM335x\hsi2c_eeprom\hsi2ceeprom.c
 */
static void I2CIsr(void) {
	unsigned int status = 0;

	/* Get only Enabled interrupt status */
	status = I2CMasterIntStatus(I2C0_INST_BASE);

	/*
	 ** Clear all enabled interrupt status except receive ready and
	 ** transmit ready interrupt status
	 */
	I2CMasterIntClearEx(I2C0_INST_BASE,
			(status & ~(I2C_INT_RECV_READY | I2C_INT_TRANSMIT_READY)));

	if (status & I2C_INT_RECV_READY) {
		/* Receive data from data receive register */
		dataFromSlave[rxCount++] = I2CMasterDataGet(I2C0_INST_BASE);

		/* Clear receive ready interrupt status */
		I2CMasterIntClearEx(I2C0_INST_BASE, I2C_INT_RECV_READY);

		if (rxCount == numOfBytes) {
			/* Disable the receive ready interrupt */
			I2CMasterIntDisableEx(I2C0_INST_BASE, I2C_INT_RECV_READY);
			/* Generate a STOP */
			I2CMasterStop(I2C0_INST_BASE);
		}
	}

	if (status & I2C_INT_TRANSMIT_READY) {
		/* Put data to data transmit register of i2c */
		I2CMasterDataPut(I2C0_INST_BASE, dataToSlave[txCount++]);

		/* Clear Transmit interrupt status */
		I2CMasterIntClearEx(I2C0_INST_BASE, I2C_INT_TRANSMIT_READY);

		if (txCount == numOfBytes) {
			/* Disable the transmit ready interrupt */
			I2CMasterIntDisableEx(I2C0_INST_BASE, I2C_INT_TRANSMIT_READY);
		}
	}

	if (status & I2C_INT_STOP_CONDITION) {
		/* Disable transmit data ready and receive data read interupt */
		I2CMasterIntDisableEx(I2C0_INST_BASE, I2C_INT_TRANSMIT_READY |
		I2C_INT_RECV_READY |
		I2C_INT_STOP_CONDITION);
		complFlag = 0;
	}

	if (status & I2C_INT_NO_ACK) {
		I2CMasterIntDisableEx(I2C0_INST_BASE, I2C_INT_TRANSMIT_READY |
		I2C_INT_RECV_READY |
		I2C_INT_NO_ACK |
		I2C_INT_STOP_CONDITION);
		/* Generate a STOP */
		I2CMasterStop(I2C0_INST_BASE);

		complFlag = 0;
	}
}
void EEPROMI2InitInterupts(void) {

}
/*
 ** Configures AINTC to get PMIC interrupt
 ** param i2cbase base address of i2c
 ** isrFN dunction pointer to interrupt function
 */
void I2CIntRegister(unsigned int i2cBase, unsigned int *isrFN) {
	if (I2C0_INST_BASE == i2cBase)
		IntRegister(I2C0_INST_BASE + I2C0_INT_NUM, isrFN);
	if (I2C1_INST_BASE == i2cBase)
		IntRegister(I2C1_INST_BASE + I2C1_INT_NUM, isrFN);
	if (I2C2_INST_BASE == i2cBase)
		IntRegister(I2C2_INST_BASE + I2C2_INT_NUM, isrFN);
}

/*
 ** I2C0 Interrupt Service Routine. This function will read and write
 ** data through I2C bus.
 */

/****************************** End Of File *********************************/
