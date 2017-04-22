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
    int *b;
    int length=5;
    for(i=0;i<5;i++)
    {
        scanf("%i", &numeros);
        *(p+i)=numeros;
    }
    p=array;
    b=array;
    for(i=0;i<5;i++)
    {

        for(j=i+1;j<5;j++)
        {
            if(*b>*(p+j))
            {
                b=p+j;
                k=1;
            }
        }
        if(k==1)
        {
            swap((p+i),b);
        }
        k=0;
    }

    p=array;
    for(i=0;i<5;i++)
        printf("%d\n", *(p+i));
    return 0;
}
