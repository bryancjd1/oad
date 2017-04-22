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
    int length=5;
    for(i=0;i<5;i++)
    {
        scanf("%i", &numeros);
        *(p+i)=numeros;
    }
    p=array;
    for(i=0;i<5;i++)
    {
        j=i;
        while(j>0 && *(p+j)< *(p+j-1))
        {
            swap((p+j),(p+j-1));
            j--;
        }
    }

    p=array;
    for(i=0;i<5;i++)
        printf("%d\n", *(p+i));
    return 0;
}
