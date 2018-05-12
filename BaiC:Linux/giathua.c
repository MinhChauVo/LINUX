#include <stdio.h>
#include <math.h>
void giaithua()
{
	int n,i;
      	long long gt=1;
     
      	printf("\nban can tinh giai thua bao nhieu:  ");
      	scanf("%d",&n);
      	for (i=2;i<=n;i++)
           gt=gt*i;
      	printf("%d giai thua bang: %lld",n,gt);
}
