#include<stdio.h>
int x,s,m;
main()
{
	scanf("%d",&x);
	m=x/60;
	s=x%60;
	printf("%d %d",m,s);		
}
