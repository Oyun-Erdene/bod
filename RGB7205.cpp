#include<stdio.h>
int n,a,v=1;
main()
{
	scanf("%d",&n);
	for(int a=1; a<=n; a++)
	{
		v=v*a;
	}
	printf("%d",v);
}
