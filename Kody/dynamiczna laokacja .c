#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
int* tablica(int l)///konflikt
{
=======
int* tablica(int l)
{                       //konflikt
>>>>>>> bef6a328955b4589b92a6162c86b340cd71d1d92
    int *tab = malloc(l*sizeof(*tab)),i;
        if(tab!=NULL)
        {
            for(i=0;i<l;i++)
                tab[i] = (3*i+1);
            return tab;
        }
        return NULL;
}

int main(){
    int *wsk,i,x;
    scanf("%d",&x);
    wsk = tablica(x);
    if(wsk!=NULL)
    for(i = 0;i<x;i++)
        printf("%d ",wsk[i]);

 free (wsk);
return 0;
}
