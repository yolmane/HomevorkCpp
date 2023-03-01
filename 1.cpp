#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<windows.h>
//  https://github.com/yolmane/HomevorkCpp/tree/Lesson7.2/1.cpp

void array_completion(int mas[], int a)
{
    for(int i=0; i<a; i++)
    {        
        mas[i] = rand();
    }
    printf("\nЗаполненый массив \n");
    for(int i=0; i<a; i++)
    {
        printf("%3i  ",mas[i]);
    }
}
int main()
{
    srand(time(NULL));
    int mas1[100];
    int mas2[100];
    int a = 0;
    int b = 0;
    while ((a < 1) || (a > 100))
    {
        printf("Ведите колличество элементов первого массива от 1 до 100 включительно ");
        scanf("%i",&a);
    }
    while ((b < 1) || (b > 100))
    {
        printf("Ведите колличество элементов второго массива от 1 до 100 включительно ");
        scanf("%i",&b);
    }
    array_completion(mas1, a);
    array_completion(mas2, b);

    return 1;
}
