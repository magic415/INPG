#include <stdio.h>

int funkcja_kwadratowa(float a,float b,float c,float *wskaznik1,float *wskaznik2)
{
    float delta;
    if(a!=0)
    {
       delta = b*b-(4*a*c);
       if(delta>0)
       {
            c = 2;
            *wskaznik1 = (-b-sqrt(delta))/(2*a);
            *wskaznik2 = (-b+sqrt(delta))/(2*a);
       }
       if(delta==0)
       {
           c = 1;
           *wskaznik1 = -b/(2*a);
           *wskaznik2 = *wskaznik1;
       }
       if(delta<0)
        c = 0;

        return c;


    }
    return 0;
}

int main()
{
    float a,b,c,x1,x2;
    float *wskaznik1, *wskaznik2;
    wskaznik1 = &x1;
    wskaznik2 = &x2;
    scanf("%f %f %f",&a,&b,&c);


    if (funkcja_kwadratowa(a,b,c,wskaznik1,wskaznik2)!=0)
        {

        printf("ilosc rozwi¹zañ funkcji kwadratowej to %d \n",funkcja_kwadratowa(a,b,c,wskaznik1,wskaznik2));
        printf("pierwiastki funkcji kwadratowej to %f %f",x1,x2);

        }

    if (funkcja_kwadratowa(a,b,c,wskaznik1,wskaznik2)==0)

        {
            printf("funkcja kwadratowa nie ma pierwiastków");
        }

    return 0;
}
