#include <conio.h>
#include <stdio.h>

int main()
{
    int year;

    printf( "\n   Introduzca un año: ", 164 );
    scanf( "%d", &year );

    if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
        printf( "ES BISIESTO" );
    else
        printf( "NO ES BISIESTO" );

    return 0;
}
