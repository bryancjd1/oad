#include <stdio.h>
#include <stdlib.h>

int mezclar(int *origenA, int *origenB, int *destino);
int main()
{
    int x, i=0;
    int a[6] = {1,3,5,7,9,-1};
    int b[6] = {2,4,6,8,10,-1};
    int c[11];
    mezclar(a,b,c);
    for(i=0;i<11;i++)
        printf("%d\n",c[i]);

}
int mezclar(int *origenA, int *origenB, int *destino)
{
    while(*origenA!=-1 && *origenB!=-1)
    {
        if(*origenA>*origenB || *origenA == *origenB)
        {
            *destino=*origenB;
            destino++;
            origenB++;
        }
        if(*origenA<*origenB  || *origenA == *origenB)
        {
            *destino=*origenA;
            destino++;
            origenA++;
        }

    }
    if(*origenA==-1)
    {
        while(*origenB!=-1)
        {
            *destino=*origenB;
            destino++;
            origenB++;
        }
    }
    if(*origenB==-1)
    {
        while(*origenA!=-1)
        {
            *destino=*origenA;
            destino++;
            origenA++;
        }
    }
    *destino =-1;
}
