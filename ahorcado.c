#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int largo, i=0,d=0,lon=0;
    int intentos =5;
    char letra;
    char cadena[20] = "";
    char cadena2[20];
    char *p;
    char *b;
    scanf("%s",cadena2);
    largo = strlen(cadena2);
    lon=largo;
    p=cadena2;
    b=cadena;
    while(i<largo)
    {
        cadena[i]=95;
        i++;
    }
    while(intentos!=0 && lon!=0)
    {
        printf("ingrese letra\n");
        scanf("%s",&letra);
        while(*p)
        {
            if(letra==*p++)
            {
                *b=*(p-1);
                d=1;
                lon--;
            }
            b++;
        }
        if(d==0)
        {
            intentos--;
            printf("te quedan %d intentos\n",intentos);
        }
        printf("%s\n",cadena);
        b=cadena;
        p=cadena2;
        d=0;
    }

}
