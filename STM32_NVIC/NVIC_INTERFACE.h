/*
 * NVIC_INTERFACE.h
 *
 * Created: 21/4/2024 10:01:24 PM
 *  Author: Shawky Ramadan
 */

#ifndef NVIC_INTERFACE_H_
#define  NVIC_INTERFACE_H_
void NVIC_VidPerhiralEnable(u8 Pripheral_Number);
void NVIC_VidPerhiralDisable(u8 Pripheral_Number);
void NVIC_VidSetPending(u8 Pripheral_Number);
void NVIC_VidClearPending(u8 Pripheral_Number);
u8 NVIC_uint8ReadActiveBit(u8 Pripheral_Number);
void Select_proirity(u8 Prepheral_Index,u32 group_supGroup_Option,u8 volatile Group_Proiriy,u8 volatile subGroup_proirity);


#endif
