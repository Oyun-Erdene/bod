#include<stdio.h>
int d,davhar,dtoo,haalga;
main()
{
	scanf("%d %d\n %d",&davhar,&dtoo,&ail);
	d=ail/dtoo; //2
    if (ail%dtoo>0) //2
	d++; //3
    ail=ail%dtoo; //2
    if (ail==0) 
	ail=dtoo; 
    printf("%d %d",d,ail);
}
