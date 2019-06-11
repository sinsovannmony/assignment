#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value for a\n");
	scanf("%d",&a);
	printf("Enter the value for b\n");
	scanf("%d",&b);
	printf("Enter the value for c\n");
	scanf("%d",&c);
	
	
/*if(a!=b&&b!=c&&a!=c)
	{if(a>b&&a>c)
		{printf("a is the greater");}
		else
		  {if(b>a&&b>c)
		  	{printf("b is the greater");}
			else
			  {if(c>a&&c>b)
			  	  {printf("c is the greater");}
			  }
		  }
	}
else
	{
		if(a==b&&b==c)
		{printf("a = b = c");}
		else if(a==b&&a>c)
		printf("the greater is %d",a);
		else if(a==b&&a<c)
		printf("the greater is %d",c);
		else if(a==c&&a>b)
		printf("the greater is %d",a);
		else if(a==c&&a<b)
		printf("the greater is %d",b);
		else if(b==c&&b>a)
		printf("the greater is %d",b);
		else if(b==c&&b<a)
		printf("the greater is %d",a);
    }*/
    
    if(a>b&&a>c)
    {
    	printf("a is big");
	}
	else if(b>a&&b>c)
    {
    	printf("b is big");
	}
	else if(c>a&&c>b)
    {
    	printf("c is big");
	}
}
	    

