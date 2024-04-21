/*
 * NVIC_INTERFACE.h
 *
 * Created: 21/4/2024 10:01:24 PM
 *  Author: Shawky Ramadan
 */

#include"MACROS.h"
#include"TYPES.h"
#include"NVIC_INTERFACE.h"
#include"NVIC_privite.h"


/*enable NVIC FOR Preipherals*/

void Select_proirity(u8 Prepheral_Index,u32 group_subGroup_Option,volatile u8  Group_Proiriy,volatile u8  subGroup_proirity)
{

/*Drive core prepherail SCB */
SCB_AIRCR=group_subGroup_Option; /*open SCB_AIRCR register to write password and select number
of group and sub group*/

switch(group_subGroup_Option)
{

case Group_16Sub_Group_0:
	Group_Proiriy<<=4;
	NVIC_IPR[Prepheral_Index]=(Group_Proiriy);
	break;
case Group_8Sub_Group_2:

	Group_Proiriy<<=(volatile u8)5;
	subGroup_proirity<<=(volatile u8)4;

	NVIC_IPR[Prepheral_Index]=(Group_Proiriy)|(subGroup_proirity);

	break;
case Group_4Sub_Group_4:
	Group_Proiriy=Group_Proiriy<<6;
	subGroup_proirity=subGroup_proirity<<4;

	NVIC_IPR[Prepheral_Index]=(Group_Proiriy|subGroup_proirity);
	break;
case Group_2Sub_Group_8:
	Group_Proiriy<<=7;
	subGroup_proirity<<=4;

	NVIC_IPR[Prepheral_Index]=(Group_Proiriy|subGroup_proirity);
	break;
case Group_0Sub_Group_16:

		subGroup_proirity<<=4;

	NVIC_IPR[Prepheral_Index]=(Group_Proiriy);
	break;
default:
	break;

}


}


void NVIC_VidPerhiralEnable(u8 Pripheral_Number)
{
	
	if(Pripheral_Number<=31){
		SETBIT(NVIC_ISER0,Pripheral_Number);

		
	}
	else if(Pripheral_Number<=64)
	{
		SETBIT(NVIC_ISER1,(Pripheral_Number-31));
		
	}
	
		
	
	
}




/*disable NVIC FOR Preipherals*/
void NVIC_VidPerhiralDisable(u8 Pripheral_Number)
{
	
	if(Pripheral_Number<=31){
		SET_BIT(NVIC_ICER0,Pripheral_Number);
		
	}
	else if(Pripheral_Number<=64)
	{
		SET_BIT(NVIC_ICER1,(Pripheral_Number-31));
		
	}
	
			
}


/*set pendig flag to  test NVIC FOR Preipherals*/
void NVIC_VidSetPending(u8 Pripheral_Number)
{
	u8 return_error;
	if(Pripheral_Number<=31){
		SET_BIT(NVIC_ISPR0,Pripheral_Number);
		
	}
	else if(Pripheral_Number<=64)
	{
		SET_BIT(NVIC_ISPR1,(Pripheral_Number-31));
	
	}
		
}



/*clear pendig flag to  test NVIC FOR Preipherals*/
void NVIC_VidClearPending(u8 Pripheral_Number)
{
	
	if(Pripheral_Number<=31){

		SET_BIT(NVIC_ICPR0,Pripheral_Number);
		NVIC_ICPR0=1<<Pripheral_Number; 
		
	}
	else if(Pripheral_Number<=64)
	{
		SET_BIT(NVIC_ICPR1,(Pripheral_Number-31));
		
	}
	
			
}



u8 NVIC_uint8ReadActiveBit(u8 Pripheral_Number)
{
	u8 u8State;
	if(Pripheral_Number<=31){
		u8State=GET_BIT(NVIC_IABR0,Pripheral_Number);
		return u8State;/*return Active Flage state  */
	}
	else if(Pripheral_Number<=64)
	{
		Pripheral_Number-=31;
		u8State=GET_BIT(NVIC_IABR1,Pripheral_Number);
		return u8State;/*return Active Flage state  */
	}
	else{
		return 0;

	}
			

}
