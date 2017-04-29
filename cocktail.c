#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

int main()
{
    int array[100],i,j,k,a,b;
    int numeros;
    int *p=array;
    int *q;
    int length=5;
    for(i=0;i<5;i++)
    {
        scanf("%i", &numeros);
        *(p+i)=numeros;
    }
    p=array;
    q=array+4;
    a=4;
    b=0;
    while(q!=array)
    {
        for(i=0;i<a;i++)
        {
            if(*p>*(p+1))
            {
                swap(p,(p+1));
            }
            p++;
        }
        a--;
        for(i=4;i>b;i--)
        {
            if(*p<*(p-1))
            {
                swap(p,(p-1));
            }
            p--;
        }
        b++;
        q--;

    }
    p=array;
    for(i=0;i<5;i++)
        printf("%d\n", *(p++));
    return 0;
}
