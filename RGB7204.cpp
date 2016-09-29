#include<stdio.h>
int a,n,s=0;
main()
{
	scanf("%d",&n);
	for(int a=0; a<=n; a++)
	{
	    s=s+a;
	}
	printf("%d",s);
}
