#include<stdio.h> 
int main() 
{ 
int a; 
    scanf("%d",&a); 
    if(a>89) printf("A"); 
    if(90>a && a>79) printf("B"); 
    if(80>a && a>69) printf("C"); 
    if(70>a && a>59) printf("D"); 
    if(60>a) printf("F"); 
}
