#include<stdio.h>
// ссыль на гит: https://github.com/yolmane/HomevorkCpp/tree/Lesson2
main()
{
	int a,b;
	printf("a=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
	if(a>b)
	{
		printf("Bol'she");
	}
	else
	{
		if(a==b)
		{
			printf("Ravni");	
		}
		else
		{
			printf("Men'she");
		}
		
	}
}
