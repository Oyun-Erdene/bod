#include<stdio.h>
int a,b,c,s=0;
main()
{
	scanf("%d",&c);
	a=c;
    while(a!=0)
    {
    	b=a%10;
    	a=a/10;
    	s=s*10+b;
	}
	if(c==s)
	{
		printf("YES");
	}
	else
		printf("NO");
	

}
