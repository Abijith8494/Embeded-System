#include<reg51.h>
sbit mybit=P1^5;
void main(void)
{
	mybit==0;
	while(1)
	{
		if(mybit==1)
			P0=0x55;
		else
			P2=0xAA;
	}
}