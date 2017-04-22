/*#include <stdio.h>
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
    int a,b;
    a=3;
    b=5;
    printf("%i %i\n",a,b);
    swap(&a,&b);
    printf("%i %i",a,b);

}*/
#include <stdlib.h>
             #include <stdio.h>
             int main()
             {
                        int tabla[10],i,x,*pt,*ptr;
                        pt = &tabla[0];
                        x = *pt;

                        for (i=0; i <10; i++)
                                *(pt+i) = rand() % 100;
                        ptr = tabla;

                        for (i=0; i <10; i++)
                                printf("%d \n",*(ptr+i));
               }
