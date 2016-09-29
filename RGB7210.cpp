#include<stdio.h>
int a,s=0;
main()
{
	scanf("%d",&a);
	for(int b=1; b<=10; b++)
	{
		printf("%d*%d=%d\n",a,b,s=a*b);
	}
}
