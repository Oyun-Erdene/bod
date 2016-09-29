#include<stdio.h>
int a,b,c,s;
main()
{
	if(a%2==0 || b%2==0 || c%2==0)
	{
      scanf("%d %d %d",&a,&b,&c);
	   if(a%2==0) { s=a;   }
       if(b%2==0) { s=s+b; }
       if(c%2==0) { s=s+c; }
       printf("%d",s);
	}
	else	   
     printf("ydaj neg tegsh too oruul");	
}
