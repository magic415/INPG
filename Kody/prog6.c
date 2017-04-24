#include <stdio.h>
#define ROW 2
#define COL 5

int  main()

{
    int Macierz1[ROW][COL] = {{4,7,1,2,5},{7,6,3,1,0}},

    Macierz2[ROW][COL] = {{2,8,3,4,9},{3,4,6,8,0}},

    Macierz3[ROW][COL],i=0,j=0;

    for(;i<ROW;++i)
        for(j = 0;j<COL;++j)
            Macierz3[i][j] = Macierz1[i][j] + Macierz2[i][j];

    for(i=0;i<ROW;++i)
        {
        for(j = 0;j<COL;++j)
            printf("%d ",Macierz3[i][j]);
            putchar('\n');
        }
