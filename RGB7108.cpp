#include<stdio.h>
int a,b,c,s;
main()
{
	scanf("%d %d %d",&a,&b,&c);
	   if(a%2==1) { s=a;   }
       if(b%2==1) { s=s*b; }
       if(c%2==1) { s=s*c; }
       printf("%d",s);
}
