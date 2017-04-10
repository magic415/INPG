#include <stdio.h>
#include <stdlib.h>
int* tablica(int l)///konflikt
{
    int *tab = malloc(l*sizeof(*tab)),i;
        if(tab!=NULL)
        {
            for(i=0;i<l;i++)
                tab[i] = (2*i+1);
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
