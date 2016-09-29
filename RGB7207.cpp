#include<stdio.h>
int a,b,t,s;
main()
{
	scanf("%d %d",&a,&b);
	for(int t=1; t<=b; t++)
	{
		s=s+a;
	}
	printf("%d",s);
}
