#include<stdio.h>

main()
{
	int a,b,c,d,e;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("enter value of c=");
	scanf("%d",&c);
	printf("enter value of d=");
	scanf("%d",&d);
	printf("enter value of e=");
	scanf("%d",&e);
	
	if(a<b)  
	{
		if(a<c)
		{
			if(a<d)
			{
			   if (a<e)
			   {
			   	  printf("a is minimun");
			   }
			   else
			   {
			   	  printf("e is minimum");
			   }
			}
			else
			{
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e id minimum");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
		    	{
				   printf("c is minimum");
			    }
			    else
		    	{
				   printf("e is minimum");
			    }
			}
			else
			{
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			
		}
	 } 

  else
  {
	  if(b<c)
	 {
		 if(b<d)
		{
			if(b<e)
			{
				printf("b is minimum");
			}
			else
			{
				printf("e is minimum");
			}
		}
		else
		{
			if(d<e)
			{
				printf("d is minimum");
			}
			else
			{
				printf("e is minimum");
			}
		}
	}
	else
	{
		if(c<d)
		{
			if(c<e)
			{
				printf("c is minimum");
			}
			else
			{
				printf("e is minimum");
			}
		}
		else
		{
			if(d<e)
			{
				printf("d is minimum");
			}
			else
			{
				printf("e is minimum");
			}
		}
	}
  }
}   
