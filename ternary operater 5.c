#include<stdio.h>

main()
{
	int a,b,c;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("enter value of c=");
	scanf("%d",&c);
	
	(a>b)? (a>c)?printf("a is max"): printf("c is max")
	            :(b>c)?printf("b is max"): printf("c is max");
}
