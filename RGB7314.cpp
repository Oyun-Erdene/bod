#include<stdio.h>
int a,b,z;
main()
{
	scanf("%d %d",&a,&b);
	z=a*b;
	while(a!=b)
	{
	   if(a>b) a=a-b;
	   else b=b-a;
	}
	printf("%d",z/a);	
}
