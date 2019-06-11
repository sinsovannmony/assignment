#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter the value for a\n");
	scanf("%d",&a);
	printf("Enter the value for b\n");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	printf("The value for a is %d\n",a);
	printf("The value for b is %d",b);
}
