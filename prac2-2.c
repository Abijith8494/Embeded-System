#include<reg51.h>
void MSDelay(unsigned int);
void main(void)
{
	unsigned char mybyte;
	P1=0xFF;
	P2=0x00;
	while(1)
	{
		mybyte=P1;
		MSDelay(500);
		P2=mybyte;
	}
}
void MSDelay (unsigned int itime)
{
	unsigned int i,j;
	for(i=0;i<itime;i++)
	for(j=0;j<1275;j++);
}