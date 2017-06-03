#include <stdio.h>
#include <stdlib.h>

int comparar(char *cadenaA, char *cadenaB);
int main()
{
    char *a = "ana";
    char *b = "ana";
    comparar(b,a);

}
int comparar(char *cadenaA, char *cadenaB)
{
    while(*cadenaA!='\0' || *cadenaB!='\0')
    {
        if(*cadenaA>*cadenaB)
            return -1;
        if(*cadenaA<*cadenaB)
            return 1;
        cadenaA++;
        cadenaB++;
    }
    return 0;
}
