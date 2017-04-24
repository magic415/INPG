#include <stdio.h>
#define ROW1 2
#define COL1 3
#define ROW2 3
#define COL2 2

int main ()
{
    int Macierz1[ROW1][COL1] = {{3, 2, 5},{7, 2, 1}},

    Macierz2[ROW2][COL2] = {{5, 1},{4, 7},{2, 8}},

    Macierz3[ROW1][COL2] = {}, i, j, z;

    for(i = 0; i<ROW1; ++i)
        for(j = 0; j<COL2; ++j)
            for(z = 0; z < COL1; ++z)
                Macierz3 [i][j] = Macierz3 [i][j] + Macierz1[i][z]*Macierz2[z][j];


    for(i=0;i<ROW1;++i)
    {
        for(j=0;j<COL2;++j)
            printf("%d  ", Macierz3[i][j]);
     putchar('\n');
    }


    return 0;
}
