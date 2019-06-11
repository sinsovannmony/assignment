#include<stdio.h>
main()
{
	int a;
	printf("Enter the year\n");
	scanf("%d",&a);
	if(a%4==0)
	printf("%d is Leap year",a);
	else
	printf("%d is not Leap year",a);
}
