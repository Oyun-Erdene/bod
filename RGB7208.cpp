#include<stdio.h>
int n,b,v=1;
main()
{
	scanf("%d",&n);
	for(int a=1; a<=n; a++)
	{
	   v=v*2;
	}
	printf("%d",v);
}
