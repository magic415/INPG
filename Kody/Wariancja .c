#include <stdio.h>
#define R 51
int main()
{
    float tab[R], j=0,k=0;
    int i;
    printf("podaj pi�� liczb, kt�rych �redni� i wariacje chcesz policzy�\n");

    for(i = 0;i<R;i++)
        {
            scanf("%f",&tab[i]);
            j+=tab[i];
        }
    j = j/R;
    printf("�rednia arytmetyczna wynosi: %f\n",j);

    for(i = 0;i<R;i++)
        k+=pow((tab[i]-j),2);
    k=k/R;
    printf("Wariacja wynosi %f",k);


    return 0;
}
