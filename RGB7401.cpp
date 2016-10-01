/*#include <stdio.h> 
int a,b,c;  
int main () 
{ 
    scanf("%d",&a); 
    for (b=1;b<=a;b++) 
    { 
      for (c=a;1<=c;c--) 
      	printf("%d ",c); 
        printf("\n\n"); 
    } 
}*/
#include<stdio.h> 
int main() 
{ 
int n,m; 
scanf("%d",&n); 
for(int i=0; i<n*n; i++, m--)
{ 
  printf("%d",m);
  if(n==m)
  {
  	m=0;
    printf("%d ",m);
    printf("\n");
  }
} 
} 



