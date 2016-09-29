#include<stdio.h>
int a,b,c,d,s;
main()
{
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a%11!=0) { s=a;   }
	if(b%11!=0) { s=s+b; }
	if(c%11!=0) { s=s+c; }
	if(d%11!=0) { s=s+d; }	
	printf("%d",s);
}
