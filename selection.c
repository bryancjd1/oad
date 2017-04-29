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
    int *b, *q;
    int length=5;
    for(i=0;i<5;i++)
    {
        scanf("%i", &numeros);
        *(p+i)=numeros;
    }
    p=array+1;
    b=array;
    q=array;
    for(i=0;i<5;i++)
    {

        for(j=i+1;j<5;j++)
        {
            if(*b>*(p++))
            {
                b=p-1;
                k=1;
            }
        }
        if(k==1)
        {
            swap(q,b);
        }
        q++;
        k=0;
        b=q;
        p=q+1;
    }

    p=array;
    for(i=0;i<5;i++)
        printf("%d\n", *(p+i));
    return 0;
}
