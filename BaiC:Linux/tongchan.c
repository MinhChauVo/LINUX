#include <stdio.h>
#include <math.h>
void tongchan()
{
	int n,i;
      	long int tong=0;
	printf("\n\nban can tinh tong chan tu 1 den ");
      	scanf("%d", &n);
      	for (i = 1; i <= n ; i++)
		if( i % 2 == 0)
			tong = tong + i;
	printf("tong chan tu 1 den %d la: %ld", n, tong);
	printf("\n");
}
