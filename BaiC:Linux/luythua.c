#include <stdio.h>
#include <math.h>
void luythua(int a , int b)
{
	long int luythua = a ;
	for(int i =1 ; i < b;i++)
		luythua = luythua * a;
	printf("luy thua %d mu %d = %ld",a,b,luythua);
	printf("\n");
}
