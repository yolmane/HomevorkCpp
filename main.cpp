#include<stdio.h>
#include<stdlib.h>
//ссыль на гит  https://github.com/yolmane/HomevorkCpp/tree/Lesson5.5/main.cpp
main()
{
    int mas[100][100];

    int n = 0;
    int m = 0;
    
    while ((n < 1) || (n > 100))
    {
        printf("kol-vo strok 1-100 ");
        scanf("%i",&n);
    }
    while ((m < 1) || (m > 100))
    {
        printf("kol-vo stolbcov 1-100 ");
        scanf("%i",&m);
    }
    
    printf("vvodite el. massiva cherez ENTER \n");
    
    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            scanf("%i",&mas[j][i]);
        }
    }
   
    printf("\nVvedenniy massiv \n\n");

    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("%3i",mas[j][i]);
        }
        printf("\n");
    }

    printf("\n");

    int k = m;
    if(n > k)
    {
        k = n;
    }
    int mas2[100][100];

    for (int j=0; j<k; j++)
    {
        for(int i=0; i<k; i++)
        {
            mas2[j][i]=mas[i][j];
        }
    }
    
    printf("Massiv posle inversii po glavnoy diagonale\n\n");

    for (int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            printf("%3i",mas2[j][i]);
        }
        printf("\n");
    }
    
}
