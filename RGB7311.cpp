/*#include<stdio.h>
int a,s=1,x;
main()
{
	scanf("%d",&a);
    while(a>s)
    {
    	s=s*3;
    	if(a%s==0)
    	x=a/s;
	}
printf("%d",x); 
}*/
#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
int n,a; 
scanf("%d",&n); 
a=n; 
while (a%3==0) 
{ 
a=a/3; 
} 
printf("%d\n",a); 
} 
