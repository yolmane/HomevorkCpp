#include <stdio.h>
#include <string.h>
//  https://github.com/yolmane/HomevorkCpp/tree/Lesson6.4/1.cpp
main()
{
    char str[100];
    int q = 0;
    while ((q == 0) || (q > 99) )
    {    
        printf("Введите строку латиницей\n");
        gets(str);
        q  = strlen(str);
    }
    for (int j=0;j<q;j++)
    {
        str[j]=str[j+1];
    }
    printf("\nСтрока после удаления первого элемента: \n");
    puts(str);
    char strmir[100];
    for(int j=strlen(str);j>0;j--)
    {
        strmir[strlen(str)-j] = str[j-1];       
    }
    strmir[strlen(str)] = str[strlen(str)];
    printf("\nСтрока после : \n");
    puts(strmir);
    // puts(str);
}
