#include<reg51.h>
#define LCDData P1
sbit En=P2^0;
void main(void)
{
	unsigned char message[]="THE EARTH IS BUT ONE COUNTRY";
	unsigned char z;
	for(z=0;z<28;z++)
	{
		LCDData=message[z];
		En=1;
	  En=0;
	}
}
	
