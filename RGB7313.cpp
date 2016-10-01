/*#include<stdio.h>
int a,b,i=1;
main()
{
	scanf("%d %d",&a,&b);
	while(a!=b)
	{
		if(a%i==0 && b%i==0)
		{
		   a=a/i;
		   b=b/i;
		   s=s*i;
		   i++;	
		}
	}	
	printf("%d",i);
}*/
//HIEH
#include<stdio.h> 
#include<stdlib.h> 
main() 
{ 
int m,n; 
scanf("%d %d",&m,&n); 
while(m!=n)
{ 
if(m>n){ 
m=m-n; 
} 
else{ 
n=n-m; 
} 
} 
printf("%d",n);  
}
