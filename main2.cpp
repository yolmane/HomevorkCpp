#include<stdio.h>
//ссыль на гит  https://github.com/yolmane/HomevorkCpp/tree/lesson4.2/main2.cpp
main()
{
	int n;
    int mas[100000];
    printf("kol-vo el ");
    scanf("%i",&n);
    
    for(int i=0;i<n;i++)
    {
    	scanf("%i",&mas[i]);
	}
    
    for(int i=0;i<n;i++)
    {
    	 printf("%1i ",mas[i]);
	}
}
