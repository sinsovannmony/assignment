#include<stdio.h>
main()
{
	char a;
	printf("Enter the character\n");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
		printf("%c is Vowel",a);
	}
	else
	{
		printf("%c is consinan",a);
	}
}
