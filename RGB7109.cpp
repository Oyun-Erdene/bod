#include<stdio.h>
int a,b,c,s;
main()
{
	scanf("%d %d %d",&a,&b,&c);
	if(a==5) { s=s++; }
	if(b==5) { s=s++; }
	if(c==5) { s=s++; }
	printf("%d",s);
}
