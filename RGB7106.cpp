#include<stdio.h>
int a,b,c,d,v;
main()
{
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a<5) { v=a; }
	if(b<5) { v=v*b; }
	if(c<5) { v=v*c; }
	if(d<5) { v=v*d; }
	printf("%d",v);
}
