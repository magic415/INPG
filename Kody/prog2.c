#include <stdio.h>
#include <math.h>
<<<<<<< HEAD
int main () //konflikt a;kjq;akefj;askj fas
=======
int main ()             //konflikt
>>>>>>> bef6a328955b4589b92a6162c86b340cd71d1d92
{    char znak;
        float pierwsza_liczba, druga_liczba;
    scanf("%c%f%f", &znak, &pierwsza_liczba, &druga_liczba);
    switch(znak)
    {
    case('+'):
    printf("wynik dodawania liczb %f %f wynosi %f", pierwsza_liczba, druga_liczba, pierwsza_liczba+druga_liczba);
    break;
    case('-'):
    printf("wynik odejmowania liczby %f od liczby  %f wynosi %f", druga_liczba, pierwsza_liczba, pierwsza_liczba-druga_liczba);
    break;
    case('*'):
    printf("wynik mno�enia liczby %f przez liczb�  %f wynosi %f", pierwsza_liczba, druga_liczba, pierwsza_liczba*druga_liczba);
    break;
    case('/'):
    if(druga_liczba==0)
    {printf("nie dziel przez 0 ");
    return 1;}
    printf("wynik dzielenia liczby %f przez liczb�  %f wynosi %f", pierwsza_liczba, druga_liczba, pierwsza_liczba/druga_liczba);
    break;
    }
    return 0;

}
