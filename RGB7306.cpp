#include<stdio.h>
int a,b,max=0;
main()
{
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		if(b>max)
		{
			max=b;
		}
	}
	printf("%d",max);
}
