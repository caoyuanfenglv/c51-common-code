#include <intrins.h>
#include "common.h"
//各种延时会由于所用固件的不同而有所不同

/********************************
*            ������ʱ           *
********************************/

void delay1s(void)   //��ʱ1��	���� 0us
{
    unsigned char a,b,c;
    for(c=46;c>0;c--)
        for(b=152;b>0;b--)
            for(a=70;a>0;a--);
    _nop_();  //if Keil,require use intrins.h
}

void delay1ms(void)   //��ʱ1����	���� 0us
{
    unsigned char a,b;
    for(b=199;b>0;b--)
        for(a=1;a>0;a--);
}
							
/********************************
*            ������ʱ           *
********************************/
void delay(unsigned char time)	//��ʱtime��
{
	do
		delay1s();
	while(--time);
}

void delay_ms(unsigned char time)	//��ʱtime����
{
	do
		delay1ms();
	while(--time);	 
}					  
