#include<stdio.h>  
int a,d,min=9; 
int main() 
{ 
  scanf("%d",&a); 
  while (a!=0) 
 { 
     d=a%10; 
     a=a/10; 
   if(d<min) min=d; 
 } 
printf("%d",min); 
} 
