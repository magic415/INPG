#include <stdio.h>

int main()
{
    int i,j,a;
    printf("   |");
    for(i = 1;i<=10;i++)
        printf("%4d",i);
        putchar('\n');

    for(i = 1;i<=46;i++)
        putchar('-');
        putchar('\n');

    for(i = 1;i<=10;i++)
    {
        printf("%2d |",i);

        for(j = 1;j<=10;j++)
            printf("%4d",i*j);

        putchar('\n');
    }
    return 0;
}