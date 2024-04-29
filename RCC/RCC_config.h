/*
 *RCC_config.h
 *
 * Created: 29/4/2024 2:59:24 AM
 *  Author: Shawky Ramadan
 */



#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_

#define RCC_CLK_MODE PLL_MODE

#define PLL_FACTOR FC2
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


#endif
