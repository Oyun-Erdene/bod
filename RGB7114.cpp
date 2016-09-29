#include<stdio.h>
int a,b,c;
main()
{
	scanf("%d %d %d",&a,&b,&c);
	if(a%2==0) { printf("YES\n");}
	if(a%2>0)  { printf("NO\n"); }
    if(b%2==0) { printf("YES\n");}
    if(b%2>0)  { printf("NO\n"); }
    if(c%2==0) { printf("YES\n");}
    else
     printf("NO\n");
}
