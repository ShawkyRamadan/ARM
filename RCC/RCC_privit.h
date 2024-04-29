/*
 *RCC_privit.h
 *
 * Created: 29/4/2024 2:59:24 AM
 *  Author: Shawky Ramadan
 */
#ifndef RCC_PRIVIT_H_
#define RCC_PRIVIT_H_

/*************************RCC Registers*******************************/
#define RCC_CR         *((volatile u32*)0x40021000)
#define RCC_CFGR       *((volatile u32*)0x40021004)
#define RCC_CIR        *((volatile u32*)0x40021008)
#define RCC_APB2RSTR   *((volatile u32*)0x4002100C)
#define RCC_APB1RSTR   *((volatile u32*)0x40021010)
#define RCC_AHBENR     *((volatile u32*)0x40021014)
#define RCC_APB2ENR    *((volatile u32*)0x40021018)
#define RCC_APB1ENR    *((volatile u32*)0x4002101C)
#define RCC_BDCR       *((volatile u32*)0x40021020)
#define RCC_CSR        *((volatile u32*)0x40021024)

/***********************************************************************/
/**********************RCC_CR REGISTER*********************************/

#define HSION  0
#define HSIRDY 1
#define HSEON 16
#define HSERDY 17
#define HSEBYP 18
#define CSSON  19
#define PLLON  24
#define PLLRDY 25

/***************************PRESCALER************************************/

#define SYSCLK_DIV2   0b0000
#define SYSCLK_DIV4   0b1001
#define SYSCLK_DIV8   0b1010
#define SYSCLK_DIV16  0b1011
#define SYSCLK_DIV64  0b1100
#define SYSCLK_DIV128 0b1101
#define SYSCLK_DIV256 0b1110
#define SYSCLK_DIV512 0b1111
#define SYSCLK_DIV0   0b0000


/**************************************************************************/

#define SW0  0
#define SW1  1
#define SWS0 2
#define SWS1 3

#define PLL_SRC   16
#define PLL_XTPRE 17



/***********************clk types mode *********************************/
#define HSI_MODE  0
#define HSE_MODE  1
#define PLL_MODE  2

/**********************************************************************/


#define ZERO  0
#define ONE   1



/**********************************************************************/





/***********************************HPRE PINS IN Clock configuration register (RCC_CFGR) ***************************/
#define START_HPRB   4
#define START_PPRE1  8
#define START_PPRE2  11



/****************************************************************************************************************/

/****************************************AHB_PREPHERAL BITS*********************/

#define DMA1  0
#define DMA2  1
#define SRAM  2
#define FLITF 4
#define CRC   6
#define FSMC  8
#define SDIO  10



/******************************************************************************/
/****************************************APB1_PREPHERAL BITS*********************/
#define AFIO 0
#define GPIOA 2
#define GPIOB 3
#define GPIOC 4
#define GPIOD 5
#define GPIOE 6
#define GPIOF 7
#define GPIOG 8
#define ADC1  9
#define ADC2  10
#define TIM1  11
#define SPI1  12
#define TIM8  13
#define USART 14
#define ADC3  15
#define TIM9  19
#define TIM10 20
#define TIM11 11

/******************************************************************************/
/****************************************APB1_PREPHERAL BITS*********************/

#define TIM2 0
#define TIM3 1
#define TIM4 2
#define TIM5 3
#define TIM6 4
#define TIM7 5
#define TIM12 6
#define TIM13 7
#define TIM14 8
#define WWD   9
#define SPI2 14
#define SPI3 15
#define USART2 17
#define USART3 18
#define USART4 19
#define USART5 20
#define I2C1 21
#define I2C2 22
#define USB 23
#define CAN 25
#define BKP 27
#define PWR 28
#define DAC 29



/****************************************************************************/
#define AHB 0
#define APB1 1
#define APB2 2

/*******************************************************************************/

/****************************************PLL FC *********************************/

#define FC2 0X00
#define FC3 0X01
#define FC4 0X02
#define FC5 0X03
#define FC6 0X04
#define FC7 0X05
#define FC8 0X06
#define FC9 0X07
#define FC10 0X08
#define FC11 0X09
#define FC12 0X0A
#define FC13 0X0B
#define FC14 0X0C
#define FC15 0X0D
#define FC316 0X0E


#define PLL_START 18

/********************************************************************************/
#endif
