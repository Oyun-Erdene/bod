#include<stdio.h>
int x,d,t;
main()
{
	scanf("%d",&x);
	d=x/24;
	t=x%24;
	printf("%d-day %d-time",d,t);
}
