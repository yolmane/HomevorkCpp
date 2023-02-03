#include<stdio.h>
//ссыль на гит  https://github.com/yolmane/HomevorkCpp/tree/Lesson5.2/main.cpp
main()
{
	int mas[100][100];
	int n,m;
	printf("n= ");
	scanf("%d",&n);
	printf("m= ");
	scanf("%d",&m);
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			scanf("%i",&mas[j][i]);
		}
	}
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			printf("%3i",mas[j][i]);
		}
		printf("\n\n");
	}
}
