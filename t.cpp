#include<stdio.h>
double a,b,c,x,y;
main()
{
	scanf("%ld",&x);
	while(x!=0)
	{
	  a=x/100;
	  b=x/10%10;
	  c=x%10;
	  y=a*b*c
	}
	printf("%ld",y);
}

