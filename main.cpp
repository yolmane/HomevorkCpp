#include<stdio.h>
//ссыль на гит  https://github.com/yolmane/HomevorkCpp/tree/Lesson4.4/main.cpp
main()
{
    int mas[100];
    int n;
    printf("el mas ");
    scanf("%i",&n);
    for(int i=0;i<n;i++)
    {
    	scanf("%i",&mas[i]);
    }
    int min,max;
    min=max=mas[0];
    int sum=0;
    for(int i=0;i<n;i++)
    {
	if(mas[i]>max)
	{
	    max=mas[i];
	}
	if(mas[i]<min)
	{
	    min=mas[i];
	}
	sum+=mas[i];
    }
    float sr=(float)sum/(float)n;
    printf("Min=%i Max=%i Sum=%i Sr=%f",min,max,sum,sr);
}
