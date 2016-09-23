#include<conio.h>
#include<stdio.h>
int s=0, k=1, a=2, i=1, n;
main()
{
	scanf("%d",&n);	
	for(i=1; i<=n; i++)
		{
		if(i%a==1)
				{
					s=s+i;
			        k=k*i;
				}						
		}	
         printf("%d %d", s,k);//test
}
