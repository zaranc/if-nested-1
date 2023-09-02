#include<stdio.h>

main()
{
	int a,b,c;
    	printf("enter of value a=");
	    scanf("%d",&a);
	    printf("enter of value b=");
	    scanf("%d",&b);
	   	printf("enter of value c=");
	    scanf("%d",&c);
	    
	    if(a<b)
	    {
	        if(a<c)
	       {
	      	  printf("a is minimum");
		   }
		   else
		   {
		  	  printf("b is minimum");
		   }
     	}
		else
		{
			if(b<c)
			{
				printf("b is minimum");
			}
			else
			{
				printf("c is minimum");
			}
		}
		  
}
