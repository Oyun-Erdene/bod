#include<stdio.h>
int a,s=0,b;
main()
{
	scanf("%d",&a);
	
	for(int b=1; b<=a; b++)
		{
			if(b%2==1)
        	{		
		    	s=s+b;
        	}
		}
		printf("%d",s);
}
