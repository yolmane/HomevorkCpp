#include <stdio.h>
#include <string.h>
//  https://github.com/yolmane/HomevorkCpp/tree/Lesson6.3/3.cpp
main()
{
	char str[100];
	gets(str);
	int i;
	printf("sumb=");
	scanf("%i",&i);
	for(int j=i-1;j<strlen(str);j++)
	{
		str[j]=str[j+1];
	}
	puts(str);
}
