#include<stdio.h>
//ссыль на гит  https://github.com/yolmane/HomevorkCpp/tree/Lesson4
main()
{
	int day;
	printf("Day? ");
	scanf("%i",&day);
	switch(day)
	{
		case 1:
			{
				printf("Su");
			}
			break;
		case 2:
			{
				printf("Mo");
			}
			break;
		case 3:
			{
				printf("Tu");
			}
			break;
		case 4:
			{
				printf("We");
			}
			break;
		case 5:
			{
				printf("Th");
			}
			break;
		case 6:
			{
				printf("Fr");
			}
			break;
		case 7:
			{
				printf("Sa");
			}
			break;
		default:
			{
				printf("Error");
			}
	}
}
