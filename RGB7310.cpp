#include<stdio.h>
#include<math.h>
int a;
main()
{
	scanf("%d",&a);
    while(a%2==0)
    {
    	a=a/2;
	}
	if(a==1) 
	{ printf("YES"); } 
	else
	printf("NO");
}
