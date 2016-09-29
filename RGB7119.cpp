#include<stdio.h>
int a;
main()
{
	scanf("%d",&a);
	if(a==12 || a==11 || a==1) { printf("Winter"); }
	if(a==2 || a==4 || a==3)   { printf("Spring"); }
	if(a==5 || a==6 || a==7)   { printf("Summer"); }
	if(a==8 || a==10 || a==9)  { printf("Autumn"); }
}

