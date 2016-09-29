#include<stdio.h>
int a,b,s;
main()
{
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		if(b%2==1)
		{
			s=s+1;
		}
	}
	printf("%d",s);
	
}
