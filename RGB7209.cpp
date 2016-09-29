#include<stdio.h>
int c,a,b,s=1;
main()
{
	scanf("%d %d",&a,&b);
	for(int c=1; c<=b; c++)
	{
		s=s*a;
	}
	printf("%d",s);
}
