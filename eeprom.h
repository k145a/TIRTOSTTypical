/*
 * eeprom.h
 *
 *  Created on: Sep 26, 2015
 *      Author: RobsLaptop
 */

#ifndef EEPROM_H_
#define EEPROM_H_


#include "soc_AM335x.h"
#include "hw_types.h"
#include "beaglebone.h"
#include "hsi2c.h"
#include "board.h"
#include "hw_control_AM335x2.h"
#include "interrupt.h"

/******************************************************************************
	**              INTERNAL FUNCTION PROTOTYPES
******************************************************************************/
static void StatusClear(unsigned int);
extern void I2C0PinMux(void);
extern void EEPROMI2CWrite(unsigned char *data, unsigned int length, unsigned short offset);
extern void EEPROMI2InitInterupts(void);
extern void I2CIntRegister(unsigned int i2cBase, unsigned int *isrFN);
/******************************************************************************
**                       INTERNAL MACRO DEFINITIONS
******************************************************************************/
#define I2C_BASE_ADDR                       (SOC_I2C_0_REGS)
static void I2CIsr(void);

#define I2C_SLAVE_ADDR                      (0x00) //x50
#define EEPROM_OFFSET                       (0x00)
/* Number of bytes to be read from EEPROM. */
#define NUM_BYTES_READ                (32u) //(1000u) does not work above 32
#define I2C0_INST_BASE                 (SOC_I2C_0_REGS)
#define I2C1_INST_BASE                 (SOC_I2C_1_REGS)
#define I2C2_INST_BASE                 (SOC_I2C_2_REGS)
#define I2C0_INT_NUM                   (SYS_INT_I2C0INT)
#define I2C1_INT_NUM                   (SYS_INT_I2C1INT)
#define I2C2_INT_NUM                   (SYS_INT_I2C2INT)
/******************************************************************************
**                      INTERNAL VARIABLE DECLARATIONS
******************************************************************************/
volatile unsigned char dataToSlave[2];
volatile unsigned char dataFromSlave[NUM_BYTES_READ];

volatile unsigned int flag2;
volatile unsigned int numOfBytes;
volatile unsigned int tCount;
volatile unsigned int complFlag; //= 1;
volatile unsigned int numOfBytes;
volatile unsigned int txCount;
volatile unsigned int rxCount;
volatile unsigned int busFreq;
#endif /* EEPROM_H_ */
