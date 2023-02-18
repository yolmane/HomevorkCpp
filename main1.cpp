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


    printf("\nMассив после смены местами первого и последнего столбца\n\n");

    for(int i=0; i<m; i++)
    {
        int q=mas[i][0];
        mas[i][0] = mas[i][n-1];
        mas[i][n-1] = q;
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
