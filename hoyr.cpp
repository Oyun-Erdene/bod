#include<conio.h>
#include<stdio.h>
int n, a[1000001],i=3;
main()
{
	scanf("%d",&n);
    a[1]=0; a[2]=1;
	for(i=3; i<=n; i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	printf("%d",a[n]);
}
