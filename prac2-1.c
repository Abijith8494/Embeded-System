#include<reg51.h>
#define LED P2
void main(void)
{
	P1=00;
	LED=0;
	for(;;)
	{
		P1++;
		LED++;
	}
}