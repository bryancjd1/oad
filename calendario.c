#include <stdio.h>
#include <stdlib.h>
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
int main ()
{
	int mes, year, mmes, primer_dia;
	int i;
	int r = 0;
	int dias_mes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	error:printf("Introduzca un mes y anno: ");
	scanf("%d %d", &mes, &year);


	if(mes>12 || mes <1)
	{
		printf("\nEl mes introducido no es valido, introduzca otra fecha\n");
		goto error;
	}
	int dia=1;
	int a=0;
    mmes=modulo(mes, year);
    primer_dia=getday(1, mmes, year);
    int contador=0;
    if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
    {
        dias_mes[2]=29;
    }
    while(contador<7)
    {
        printf("%s ",Nombre(primer_dia));
        while(dia<=dias_mes[mes])
        {
            printf("%i ", dia);
            dia+=7;
        }
        a++;
        dia=1;
        dia+=a;
        printf("\n");
        contador++;
        primer_dia=(primer_dia+1)%7;

    }

}
