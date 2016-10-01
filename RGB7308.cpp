#include<stdio.h>
int a,b,s=0;
main()
{
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
	    a=a/10;	
		s=s*10+b;
	}
	printf("%d",s);
}
