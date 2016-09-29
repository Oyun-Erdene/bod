#include<stdio.h>
int a,b,c,s;
main()
{
	scanf("%d %d",&a,&b);
	while(a!=0)
	{
		c=a%10;
		a=a/10;
		if(c==b)
		{
			s=s+1;
		}
	}
	printf("%d",s);
}
