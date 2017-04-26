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
    int array[100],i,j,k;
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
    q=array;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(*(p++)>*(p+1))
            {
                swap((p-1),p);
            }
        }
        p=q;
    }
    p=array;
    for(i=0;i<5;i++)
        printf("%d\n", *(p+i));
    return 0;
}
