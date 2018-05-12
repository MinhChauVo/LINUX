#include <stdio.h>
#include <math.h>
void tongle()
{
	int n,i;
      	long int tong=1;
	printf("\nban can tinh tong le tu 1 den  ");
      	scanf("%d",&n);
      	for (i=2;i<=n;i++)
		if(i%2 != 0)
			tong =tong +i;
	printf("tong le tu 1 den %d la: %ld",n,tong);
	printf("\n");
}
