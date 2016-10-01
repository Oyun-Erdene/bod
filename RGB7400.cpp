//Ogogdson N noonuudiig daraallan zaigui hevle
/*#include<stdio.h> 
int a,b,i,j; 
main() 
{ 
   scanf("%d",&a); 
   for(i=1;i<=a;i++) 
   { 
      for(j=1;j<=a;j++) 
      {
      	printf("%d",j); 
        printf("\n"); 
	  }
   } 
} */
#include <stdio.h> 
main()
{ 
    int n, m = 1; 
    scanf("%d", &n); 
    for(int i=0; i<n*n; i++, m++)
    { 
       printf("%d", m); 
       if(m == n)
	   { 
         m = 0; 
         printf("\n"); 
       } 
    } 
}


