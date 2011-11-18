#include <intrins.h>
#include "common.h"

/********************************
*            ª˘¥°—” ±           *
********************************/

void delay1s(void)   //—” ±1√Î	ŒÛ≤Ó 0us
{
    unsigned char a,b,c;
    for(c=46;c>0;c--)
        for(b=152;b>0;b--)
            for(a=70;a>0;a--);
    _nop_();  //if Keil,require use intrins.h
}

void delay1ms(void)   //—” ±1∫¡√Î	ŒÛ≤Ó 0us
{
    unsigned char a,b;
    for(b=199;b>0;b--)
        for(a=1;a>0;a--);
}
							
/********************************
*            ≥£”√—” ±           *
********************************/
void delay(unsigned char time)	//—” ±time√Î
{
	do
		delay1s();
	while(--time);
}

void delay_ms(unsigned char time)	//—” ±time∫¡√Î
{
	do
		delay1ms();
	while(--time);	 
}					  