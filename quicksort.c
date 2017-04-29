#include <stdio.h>
#include <stdlib.h>
void quicksort(int *arr, int izq, int der);
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
    quicksort(array, 0, 4);
    for(i=0;i<5;i++)
        printf("%d\n", *(p+i));
    return 0;
}

void quicksort(int *arr, int izq, int der)
{
    int *pivote, i, j;
    int *inicio=arr;
    int *s=arr+der;
    pivote=arr+izq;
    if(izq<der)
    {
        i=izq;
        j=der;
        while(i<j)
        {
            while(*(arr++)<=*pivote&& i<=der)
                i++;
            while(*(s--)>*pivote&& j>=izq)
                j--;
            if(i<j)
            {
                swap((arr-1),(s+1));
            }
            arr--;
            s++;

        }
        swap(s,pivote);
        arr=inicio;

        quicksort(arr, izq, j-1);
        quicksort(arr, j+1, der);
    }
}
