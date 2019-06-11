#include<stdio.h>
main()
{
	int a;
	printf("Enter the value for a\n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is Even",a);
	}
	else
	{
		printf("%d is Odd",a);
	}
}
