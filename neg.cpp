#include<conio.h>
#include<stdio.h>
int i=1,n,s=0,k=1;
main()
{
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		s=s+i;
		k=k*i;
	}
	printf("%d  %d", s, k);
} 
