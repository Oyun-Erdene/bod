#include<stdio.h> 
int n,i;
main() 
{ 
    scanf("%d", &n); 
    i=1; 
    while(n%i==0) 
    { 
       n=n/i; 
       i++; 
    } 
    if(n==1) printf("%d\n",i-1); 
    else printf("No"); 
} 
