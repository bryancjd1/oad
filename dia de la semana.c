#include <stdio.h>

char *Nombre(int day){
   switch(day){
      case 0 :return("Domingo");
      case 1 :return("Lunes");
      case 2 :return("Martes");
      case 3 :return("Miercoles");
      case 4 :return("Jueves");
      case 5 :return("Viernes");
      case 6 :return("Sabado");

   }
}

int getday(int day, int month, int year)
{

    int dia;
    dia=((year-1)%7+((year-1)/4-3*((year-1)/100+1)/4)%7+month+day%7 )%7;
    return dia;
}
int modulo(int month, int year)
{
    int a;
    if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
    {
        if (month==1)
        {
            a=0;
        }
        else if (month==2)
        {
            a=3;
        }
        else if (month==3)
        {
            a=4;
        }
        else if (month==4)
        {
            a=0;
        }
        else if (month==5)
        {
            a=2;
        }
        else if (month==6)
        {
            a=5;
        }
        else if (month==7)
        {
            a=0;
        }
        else if (month==8)
        {
            a=3;
        }
        else if (month==9)
        {
            a=6;
        }
        else if (month==10)
        {
            a=1;
        }
        else if (month==11)
        {
            a=4;
        }
        else if (month==12)
        {
            a=6;
        }
    }
    else
    {
        if (month==1)
        {
            a=0;
        }
        else if (month==2)
        {
            a=3;
        }
        else if (month==3)
        {
            a=3;
        }
        else if (month==4)
        {
            a=6;
        }
        else if (month==5)
        {
            a=1;
        }
        else if (month==6)
        {
            a=4;
        }
        else if (month==7)
        {
            a=6;
        }
        else if (month==8)
        {
            a=2;
        }
        else if (month==9)
        {
            a=5;
        }
        else if (month==10)
        {
            a=0;
        }
        else if (month==11)
        {
            a=3;
        }
        else if (month==12)
        {
            a=5;
        }
    }
    return a;
}
int main(){
    int dia, mes, year, mmes;
    printf("ingresa la fecha");
    scanf("%d%d%d", &dia, &mes, &year);
    mmes=modulo(mes, year);
    printf("El dia es %s", Nombre(getday(dia, mmes, year)));
}
