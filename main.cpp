#include<stdio.h>

main()
{
    int mas[100][100];

    int n = 0;
    int m = 0;
    
    while ((n < 1) || (n > 100))
    {
        printf("Ведите колличество строк массива от 1 до 100 включительно ");
        scanf("%i",&n);
    }
    while ((m < 1) || (m > 100))
    {
        printf("Ведите колличество строк массива от 1 до 100 включительно ");
        scanf("%i",&m);
    }
    
    printf("Вводите значения двумерного массива построчно через Enter \n");
    
    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            scanf("%i",&mas[j][i]);
        }
    }

    printf("\nИсходный массив\n\n");

    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("%3i",mas[j][i]);
        }
        printf("\n");
    }    

    printf("\nMассив после сортировки построчно\n\n");
    bool fl;
    for(int i=0;i<n;i++)
    {
        fl = true;
        while(fl)
        {
            fl = false;
            for(int j=0;j<m-1;j++) 
            {
                if(mas[i][j] > mas[i][j+1])
                {
                    int q=mas[i][j];
                    mas[i][j] = mas[i][j+1];
                    mas[i][j+1] = q;
                    fl = true;
                }
            }
        }
    }

    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("%3i",mas[j][i]);
        }
        printf("\n");
    }
}
