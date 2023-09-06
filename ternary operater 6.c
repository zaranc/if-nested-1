#include<stdio.h>

main()
{
	int a,b,c,d;
	printf("enter the first value a=");
	scanf("%d",&a);
	printf("enter the second value b=");
	scanf("%d",&b);
	printf("enter the third value c=");
	scanf("%d",&c);
	printf("enter the foruth value d=");
	scanf("%d",&d);
	
	(a>b)? (a>c)? (a>d)?printf("a is max %d",a):printf("d is max %d",d):printf("c is max %d",c)
	     :(b>c)? (b>d)? printf("b is max %d",b):printf("d is max %d",d)
		 :(c>d)? printf("c is max %d",c):printf("d is max %d",d);
	     	
}
