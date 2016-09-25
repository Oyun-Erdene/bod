#include<stdio.h>
int t,m,s,a;
main()
{
	scanf("%d %d %d",&t,&m,&s);
	a=t*3600+m*60+s;
	printf("%d",a);
}
