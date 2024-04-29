/*
 *Bit_Math.h
 *
 * Created: 29/4/2024 2:59:24 AM
 *  Author: Shawky Ramadan
 */

#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_

#define SET_BIT(Reg, bitnum)       	(Reg |=1<<bitnum)
#define CLEAR_BIT(Reg, bitnum)     	(Reg &=~(1<<bitnum))
#define TOGGLE_BIT(Reg, bitnum)    	(Reg ^=(1<<bitnum))
#define GET_BIT(Reg, bitnum)       	((Reg>>bitnum)& 0x01)

#define SET_BYTE(Reg,value)         ( Reg = value )



#endif
