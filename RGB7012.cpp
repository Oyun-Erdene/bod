#include<stdio.h>
int x,t,m,s;
main()
{
	scanf("%d",&x);
	t=x/3600;
	m=(x-t*3600)/60;
	s=x%60;
	printf("%d %d %d",t,m,s);
}
