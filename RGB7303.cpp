#include<stdio.h>
int a,b,s;
main()
{
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		if(b%2==0)
		{
			s=s+b;
		}
	}
	printf("%d",s);
	
}
