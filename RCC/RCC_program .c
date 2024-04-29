/*
 *RCC_program .c
 *
 * Created: 29/4/2024 2:59:24 AM
 *  Author: Shawky Ramadan
 */
#include"Std_types.h"
#include"Bit_Math.h"
#include"RCC_interface.h"
#include"RCC_privit.h"
#include"RCC_config.h"
void MRCC_voidInti(void){
	
	/*****************************************ENABLE HSI MODE*************************************************/
	#if RCC_CLK_MODE==HSI_MODE

	SET_BIT(RCC_CR,HSION);
	CLEAR_BIT(RCC_CFGR ,SW0);
	CLEAR_BIT(RCC_CFGR ,SW1);
	while(GET_BIT(RCC_CR,1)==0);

	

	#elif RCC_CLK_MODE==HSE_MODE
	
	SET_BIT(RCC_CR,HSEON);
	SET_BIT(RCC_CFGR ,SW0);
	CLEAR_BIT(RCC_CFGR ,SW1);
	/***************************************ENABLE PLL MODE**************************************************/
	
	#elif RCC_CLK_MODE==PLL_MODE
	/*select mul factor in PLL*/
	SET_BIT(RCC_CR,PLLON);
	SET_BIT(RCC_CFGR ,SW1);
	CLEAR_BIT(RCC_CFGR ,SW0);
    #if PLL_FACTOR==FC2
	RCC_CFGR|=FC2<<PLL_START;
    #elif PLL_FACTOR==FC3
	RCC_CFGR|=FC3<<PLL_START;
    #elif PLL_FACTOR==FC4
	RCC_CFGR|=FC4<<PLL_START;
    #elif PLL_FACTOR==FC5
	RCC_CFGR|=FC5<<PLL_START;
    #elif PLL_FACTOR==FC6
	RCC_CFGR|=FC6<<PLL_START;
    #elif PLL_FACTOR==FC7
	RCC_CFGR|=FC7<<PLL_START;
    #elif PLL_FACTOR==FC8
	RCC_CFGR|=FC8<<PLL_START;
    #elif PLL_FACTOR==FC9
	RCC_CFGR|=FC9<<PLL_START;
    #elif PLL_FACTOR==FC10
	RCC_CFGR|=FC10<<PLL_START;
    #elif PLL_FACTOR==FC11
	RCC_CFGR|=FC11<<PLL_START;
    #elif PLL_FACTOR==FC12
	RCC_CFGR|=FC12<<PLL_START;
    #elif PLL_FACTOR==FC13
	RCC_CFGR|=FC13<<PLL_START;
    #elif PLL_FACTOR==FC14
	RCC_CFGR|=FC14<<PLL_START;
    #elif PLL_FACTOR==FC15
	RCC_CFGR|=FC15<<PLL_START;

#elif PLL_FACTOR==FC16
	RCC_CFGR|=FC1<<PLL_START;

#endif

	
	#endif
}
	
void MRCC_voidPrescaler(u8 u8Bus_ID,u8 u8Prescaler_ID){
		
		if(u8Bus_ID==AHB)
			{switch(u8Prescaler_ID){
				case SYSCLK_DIV2:
				RCC_CFGR&=~(0B1111<<START_HPRB);
				RCC_CFGR|=SYSCLK_DIV2<<START_HPRB;
				break;
				case SYSCLK_DIV4:
				RCC_CFGR&=~(0B1111<<START_HPRB);
				RCC_CFGR|=SYSCLK_DIV4<<START_HPRB;
				break;
				
				case SYSCLK_DIV8:
				RCC_CFGR&=~(0B1111<<START_HPRB);
				RCC_CFGR|=SYSCLK_DIV8<<START_HPRB;
				break;
				
				case SYSCLK_DIV16:
				RCC_CFGR&=~(0B1111<<START_HPRB);
				RCC_CFGR|=SYSCLK_DIV16<<START_HPRB;
				break;
				
				case SYSCLK_DIV64:
				RCC_CFGR&=~(0B1111<<START_HPRB);
				RCC_CFGR|=SYSCLK_DIV64<<START_HPRB;
				break;
				
				case SYSCLK_DIV128:
				RCC_CFGR&=~(0B1111<<START_HPRB);
				RCC_CFGR|=SYSCLK_DIV128<<START_HPRB;
				break;
				
				case SYSCLK_DIV256:
				RCC_CFGR&=~(0B1111<<START_HPRB);
				RCC_CFGR|=SYSCLK_DIV256<<START_HPRB;
				break;
				case SYSCLK_DIV512:
				RCC_CFGR&=~(0B1111<<START_HPRB);
				RCC_CFGR|=SYSCLK_DIV512<<START_HPRB;
				break;
				
				default:
				break;
				
			}
			}
	
	else if(u8Bus_ID==APB1)
	{
		{	switch(u8Prescaler_ID){
				case SYSCLK_DIV2:
				RCC_CFGR|=SYSCLK_DIV2<<START_PPRE1;
				break;
				case SYSCLK_DIV4:
				RCC_CFGR|=SYSCLK_DIV4<<START_PPRE1;
				break;
				
				case SYSCLK_DIV8:
				RCC_CFGR|=SYSCLK_DIV8<<START_PPRE1;
				break;
				
				case SYSCLK_DIV16:
				RCC_CFGR|=SYSCLK_DIV16<<START_PPRE1;
				break;
				
				case SYSCLK_DIV64:
				RCC_CFGR|=SYSCLK_DIV64<<START_PPRE1;
				break;
				
				case SYSCLK_DIV128:
				RCC_CFGR|=SYSCLK_DIV128<<START_PPRE1;
				break;                         
				case SYSCLK_DIV256:            
				RCC_CFGR|=SYSCLK_DIV256<<START_PPRE1;
				break;                         
				case SYSCLK_DIV512:            
				RCC_CFGR|=SYSCLK_DIV512<<START_PPRE1;
				break;
				
				default:
				break;
				
				
			}
		
	}
		
	}
	
	
	
	/******************************************************************************************/
	
	
	else if(u8Bus_ID==APB2){
			switch(u8Prescaler_ID){
				case SYSCLK_DIV2:
				RCC_CFGR|=SYSCLK_DIV2<<START_PPRE1;
				break;
				case SYSCLK_DIV4:
				RCC_CFGR|=SYSCLK_DIV4<<START_PPRE1;
				break;
				
				case SYSCLK_DIV8:
				RCC_CFGR|=SYSCLK_DIV8<<START_PPRE1;
				break;
				
				case SYSCLK_DIV16:
				RCC_CFGR|=SYSCLK_DIV16<<START_PPRE1;
				break;
				
				case SYSCLK_DIV64:
				RCC_CFGR|=SYSCLK_DIV64<<START_PPRE1;
				break;
				
				case SYSCLK_DIV128:
				RCC_CFGR|=SYSCLK_DIV128<<START_PPRE1;
				break;                         
				case SYSCLK_DIV256:            
				RCC_CFGR|=SYSCLK_DIV256<<START_PPRE1;
				break;                         
				case SYSCLK_DIV512:            
				RCC_CFGR|=SYSCLK_DIV512<<START_PPRE1;
				break;
				
				default:
				break;
			}}}

void MRCC_voidClkEnable(u8 u8Bus_ID,u8 u8Peripheral_ID,u8 u8Peripheral_CLK_State){
	if(u8Bus_ID==AHB){
		if(u8Peripheral_CLK_State==ENABLE)
			SET_BIT(RCC_AHBENR,u8Peripheral_ID);
		else if(u8Peripheral_CLK_State==DISABLE)
			CLEAR_BIT(RCC_AHBENR,u8Peripheral_ID);
		else{};
		
	}
	
	
	else if(u8Bus_ID==APB1){
		if(u8Peripheral_CLK_State==ENABLE){
			SET_BIT(RCC_APB1ENR,u8Peripheral_ID);
			SET_BIT(RCC_APB1ENR,u8Peripheral_ID);
		}
		else if(u8Peripheral_CLK_State==DISABLE)
			CLEAR_BIT(RCC_APB1ENR,u8Peripheral_ID);
		else{};
	}
		
		else if(u8Bus_ID==APB2){
		if(u8Peripheral_CLK_State==ENABLE)
			SET_BIT(RCC_APB2ENR,u8Peripheral_ID);
		
		else if(u8Peripheral_CLK_State==DISABLE)
			CLEAR_BIT(RCC_APB2ENR,u8Peripheral_ID);
		else{};
		}
	
		else{};
}
