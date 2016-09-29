#include<stdio.h>
#include<math.h>
int a,b,k=1;
main()
{
	scanf("%d %d",&a,&b);
	for(int s=1; s<=b; s++)
	{
		printf("%d^%d=%d\n\n",a,s,k=pow(a,s));
	}
}
