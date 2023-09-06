#include<stdio.h>

main()
{
	int a,b,c,d,e;
	printf("enter the first value a=");
	scanf("%d",&a);
	printf("enter the second value b=");
	scanf("%d",&b);
	printf("enter the third value c=");
	scanf("%d",&c);
	printf("enter the foruth value d=");
	scanf("%d",&d);
	printf("enter the fifth value  e=");
	scanf("%d",&e);
	
	(a>b)? (a>c)? (a>d)? (a>e)?printf("a is max %d",a):printf("e is max %d",e):printf("d is max %d",d)
	     :printf("c is max %d",c)
	     :(b>c)? (b>d)? (b>e)?printf("b is max %d",b):printf("e is max %d",e):printf("d is max %d",d)
		 :(c>d)? (c>e)? printf("c is max %d",c):printf("e is max %d",e)
		 :(d>e)? printf("d is max %d",d):printf("e is max %d",e);
}
