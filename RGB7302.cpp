#include<stdio.h>
int a,b,c,s;
main()
{
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
	    s=s+b;
	}	
	printf("%d",s);
}
