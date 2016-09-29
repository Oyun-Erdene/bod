#include<stdio.h>
int a,b,c,d,s;
main()
{
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a%3==0) { s=s+1;	}
	if(b%3==0) { s=s+1;	}
    if(c%3==0) { s=s+1;	}
    if(d%3==0) { s=s+1;	}
    printf("%d",s);
}
