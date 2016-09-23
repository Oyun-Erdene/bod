#include<conio.h>
#include<stdio.h>
int a[1000001] , i=4,n;
main()
{
	scanf("%d",&n);
    a[1]=0; a[2]=1, a[3]=2;
	for(i=4; i<=n; i++)
	{
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	printf("%d",a[n]);
	
}
