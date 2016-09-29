#include<stdio.h>
int a,s,b,t;
main()
{
	scanf("%d",&a);
    for(int b=1; b<=a; b++)
    {
    	t=b*100;
    	s=s+t;
	}
	printf("%d",t);
}
