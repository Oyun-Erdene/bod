//Engiin butarhaig hurtver/huvaari huraa
#include<stdio.h>
int a,b,h,k,n,m;
main()
{
   scanf("%d %d",&a,&b); 
   n=a; m=b; 
   while (a!=b) 
   { 
      if(a>b) a=a-b; 
      else b=b-a; 
   } 
     h=n/a; 
     k=m/a; 
   printf("%d/%d\n",h,k); 
}

