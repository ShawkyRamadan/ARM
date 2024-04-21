/*
 * MACROS.h
 *
 * Created: 21/4/2024 10:01:24 PM
 *  Author: Shawky Ramadan
 */


#ifndef MACROS_H_
#define MACROS_H_


#define SET_BIT(REG , BITNUM) REG |= 1<<BITNUM
#define CLEAR_BIT(REG , BITNUM) REG &= ~(1<<BITNUM)
#define TOG_BIT(REG , BITNUM) REG ^= 1<<BITNUM
#define GET_BIT(REG , BITNUM) ( (REG >> BITNUM) & 1 )



#endif /* MACROS_H_ */
