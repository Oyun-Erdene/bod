#include<stdio.h>
int a,b,c,d,s=0;
main()
{
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>=80) { s=a;   }
	if(b>=80) {	s=s+b; }
	if(c>=80) { s=s+c; }
    if(d>=80) { s=s+d; }
	printf("%d",s);
		
	
}
