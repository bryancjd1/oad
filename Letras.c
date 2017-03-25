#include <stdio.h>

int main()
{
    long long int numero;
    int n12,n11,n10,n9,n8,n7,n6,n5,n4,n3,n2,n1;
    scanf("%lli", &numero);
    n1 = (numero / 100000000000) % 10;
    n2 = (numero / 10000000000) % 10;
    n3 = (numero / 1000000000) % 10;
    n4 = (numero / 100000000) % 10;
    n5 = (numero / 10000000) % 10;
    n6 = (numero / 1000000) % 10;
    n7 = (numero / 100000) % 10;
    n8 = (numero / 10000) % 10;
    n9 = (numero / 1000) % 10;
    n10 = (numero / 100) % 10;
    n11 = (numero / 10) % 10;
    n12 = (numero % 10);

    if (numero>=1000000000000)
    {
        printf("numero no valido");
    }
    else
    {
        if(n1==1 && n2==0 && n3==0)
        {
            printf("Cien ");
        }
        else if(n1 == 1)
        {
            printf("CIENTO ");
        }
        else if(n1 == 2)
        {
            printf("DOSCIENTOS ");
        }
        else if(n1 == 3)
        {
            printf("TRESCIENTOS ");
        }
        else if(n1 == 4)
        {
            printf("CUATROCIENTOS ");
        }
        else if(n1 == 5)
        {
            printf("QUINIENTOS ");
        }
        else if(n1 == 6)
        {
            printf("SEISCIENTOS ");
        }
        else if(n1 == 7)
        {
            printf("SETECIENTOS ");
        }
        else if(n1 == 8)
        {
            printf("OCHOCIENTOS ");
        }
        else if(n1 == 9)
        {
            printf("NOVECIENTOS ");
        }

        if(n2 == 1 && n3 == 0)
        {
            printf("Diez ");
        }
        else if(n2 == 1 && n3 == 1)
        {
            printf("ONCE ");
        }
        else if(n2 == 1 && n3 == 2)
        {
            printf("DOCE ");
        }
        else if(n2 == 1 && n3 == 3)
        {
            printf("TRECE ");
        }
        else if(n2 == 1 && n3 == 4)
        {
            printf("CATORCE ");
        }
        else if(n2 == 1 && n3 == 5)
        {
            printf("QUINCE ");
        }
        else if(n2 == 1)
        {
            printf("DIECI ");
        }

        if(n2 == 2 && n3 == 0)
        {
            printf("VEINTE ");
        }
        else if(n2 == 2)
        {
            printf("VEINTI ");
        }
        else if(n2 == 3 && n3 == 0)
        {
            printf("TREINTA ");
        }
        else if(n2 == 3)
        {
            printf("TREINTA Y ");
        }
        else if(n2 == 4 && n3 == 0)
        {
            printf("CUARENTA ");
        }
        else if(n2 == 4)
        {
            printf("CUARENTA Y ");
        }
        else if(n2 == 5 && n3 == 0)
        {
            printf("CINCUENTA ");
        }
        else if(n2 == 5)
        {
            printf("CINCUENTA Y ");
        }
        else if(n2 == 6 && n3 == 0)
        {
            printf("SESENTA ");
        }
        else if(n2 == 6)
        {
            printf("SESENTA Y ");
        }
        else if(n2 == 7 && n3 == 0)
        {
            printf("SETENTA ");
        }
        else if(n2 == 7)
        {
            printf("SETENTA Y ");
        }
        else if(n2 == 8 && n3 == 0)
        {
            printf("OCHENTA ");
        }
        else if(n2 == 8)
        {
            printf("OCHENTA Y ");
        }
        else if(n2 == 9 && n3 == 0)
        {
            printf("NOVENTA");
        }
        else if(n2 == 9)
        {
            printf("NOVENTA Y ");
        }

        else if(n3 == 1 && n2 == 0 && n1 == 0)
        {
            printf("MIL ");
        }
        if(n3 == 1 && n2 > 1)
        {
            printf("UN ");
        }
        else if(n3 == 1 && n2 == 0 && n1 > 0)
        {
            printf("UN ");
        }
        else if(n3 == 2 && n2 > 1)
        {
            printf("DOS ");
        }
        else if(n3 == 2 && n2 == 0)
        {
            printf("DOS ");
        }
        else if(n3 == 3 && n2 > 1)
        {
            printf("TRES ");
        }
        else if(n3 == 3 && n2 == 0)
        {
            printf("TRES ");
        }
        else if(n3 == 4 && n2 > 1)
        {
            printf("CUATRO ");
        }
        else if(n3 == 4 && n2 == 0)
        {
            printf("CUATRO ");
        }
        else if(n3 == 5 && n2 > 1)
        {
            printf("CINCO ");
        }
        else if(n3 == 5 && n2 == 0)
        {
            printf("CINCO ");
        }
        else if(n3 == 6)
        {
            printf("SEIS ");
        }
        else if(n3 == 7)
        {
            printf("SIETE ");
        }
        else if(n3 == 8)
        {
            printf("OCHO ");
        }
        else if(n3 == 9)
        {
            printf("NUEVE ");
        }
        if (n1>0 || n2>0 || n3>1)
        {
            printf("MIL ");
        }




        if(n4==1 && n5==0 && n6==0)
        {
            printf("Cien ");
        }
        else if(n4 == 1)
        {
            printf("CIENTO ");
        }
        else if(n4 == 2)
        {
            printf("DOSCIENTOS ");
        }
        else if(n4 == 3)
        {
            printf("TRESCIENTOS ");
        }
        else if(n4 == 4)
        {
            printf("CUATROCIENTOS ");
        }
        else if(n4 == 5)
        {
            printf("QUINIENTOS ");
        }
        else if(n4 == 6)
        {
            printf("SEISCIENTOS ");
        }
        else if(n4 == 7)
        {
            printf("SETECIENTOS ");
        }
        else if(n4 == 8)
        {
            printf("OCHOCIENTOS ");
        }
        else if(n4 == 9)
        {
            printf("NOVECIENTOS ");
        }

        if(n5 == 1 && n6 == 0)
        {
            printf("Diez ");
        }
        else if(n5 == 1 && n6 == 1)
        {
            printf("ONCE ");
        }
        else if(n5 == 1 && n6 == 2)
        {
            printf("DOCE ");
        }
        else if(n5 == 1 && n6 == 3)
        {
            printf("TRECE ");
        }
        else if(n5 == 1 && n6 == 4)
        {
            printf("CATORCE ");
        }
        else if(n5 == 1 && n6 == 5)
        {
            printf("QUINCE ");
        }
        else if(n5 == 1)
        {
            printf("DIECI ");
        }

        if(n5 == 5 && n6 == 0)
        {
            printf("VEINTE ");
        }
        else if(n5 == 2)
        {
            printf("VEINTI ");
        }
        else if(n5 == 3 && n6 == 0)
        {
            printf("TREINTA ");
        }
        else if(n5 == 3)
        {
            printf("TREINTA Y ");
        }
        else if(n5 == 4 && n6 == 0)
        {
            printf("CUARENTA ");
        }
        else if(n5 == 4)
        {
            printf("CUARENTA Y ");
        }
        else if(n5 == 5 && n6 == 0)
        {
            printf("CINCUENTA ");
        }
        else if(n5 == 5)
        {
            printf("CINCUENTA Y ");
        }
        else if(n5 == 6 && n6 == 0)
        {
            printf("SESENTA ");
        }
        else if(n5 == 6)
        {
            printf("SESENTA Y ");
        }
        else if(n5 == 7 && n6 == 0)
        {
            printf("SETENTA ");
        }
        else if(n5 == 7)
        {
            printf("SETENTA Y ");
        }
        else if(n5 == 8 && n6 == 0)
        {
            printf("OCHENTA ");
        }
        else if(n5 == 8)
        {
            printf("OCHENTA Y ");
        }
        else if(n5 == 9 && n6 == 0)
        {
            printf("NOVENTA");
        }
        else if(n5 == 9)
        {
            printf("NOVENTA Y ");
        }

        else if(n6 == 1 && n5 == 0 && n4 == 0 && n3 == 0 && n2 == 0 && n1 == 0)
        {
            printf("UN MILLON ");
        }
        if(n6 == 1 && n5 > 1)
        {
            printf("UN ");
        }
        else if(n6 == 1 && n5 == 0 && n4 > 0)
        {
            printf("UN ");
        }
        else if(n6 == 2 && n5 > 1)
        {
            printf("DOS ");
        }
        else if(n6 == 2 && n5 == 0)
        {
            printf("DOS ");
        }
        else if(n6 == 3 && n5 > 1)
        {
            printf("TRES ");
        }
        else if(n6 == 3 && n5 == 0)
        {
            printf("TRES ");
        }
        else if(n6 == 4 && n5 > 1)
        {
            printf("CUATRO ");
        }
        else if(n6 == 4 && n5 == 0)
        {
            printf("CUATRO ");
        }
        else if(n6 == 5 && n5 > 1)
        {
            printf("CINCO ");
        }
        else if(n6 == 5 && n5 == 0)
        {
            printf("CINCO ");
        }
        else if(n6 == 6)
        {
            printf("SEIS ");
        }
        else if(n6 == 7)
        {
            printf("SIETE ");
        }
        else if(n6 == 8)
        {
            printf("OCHO ");
        }
        else if(n6 == 9)
        {
            printf("NUEVE ");
        }
        if (n1>0 || n2>0 || n3>0 || n4>0 || n5>0 || n6>1)
        {
            printf("MILLONES ");
        }







        if(n7==1 && n8==0 && n9==0)
        {
            printf("Cien ");
        }
        else if(n7 == 1)
        {
            printf("CIENTO ");
        }
        else if(n7 == 2)
        {
            printf("DOSCIENTOS ");
        }
        else if(n7 == 3)
        {
            printf("TRESCIENTOS ");
        }
        else if(n7 == 4)
        {
            printf("CUATROCIENTOS ");
        }
        else if(n7 == 5)
        {
            printf("QUINIENTOS ");
        }
        else if(n7 == 6)
        {
            printf("SEISCIENTOS ");
        }
        else if(n7 == 7)
        {
            printf("SETECIENTOS ");
        }
        else if(n7 == 8)
        {
            printf("OCHOCIENTOS ");
        }
        else if(n7 == 9)
        {
            printf("NOVECIENTOS ");
        }

        if(n8 == 1 && n9 == 0)
        {
            printf("Diez ");
        }
        else if(n8 == 1 && n9 == 1)
        {
            printf("ONCE ");
        }
        else if(n8 == 1 && n9 == 2)
        {
            printf("DOCE ");
        }
        else if(n8 == 1 && n9 == 3)
        {
            printf("TRECE ");
        }
        else if(n8 == 1 && n9 == 4)
        {
            printf("CATORCE ");
        }
        else if(n8 == 1 && n9 == 5)
        {
            printf("QUINCE ");
        }
        else if(n8 == 1)
        {
            printf("DIECI ");
        }

        if(n8 == 5 && n9 == 0)
        {
            printf("VEINTE ");
        }
        else if(n8 == 2)
        {
            printf("VEINTI ");
        }
        else if(n8 == 3 && n9 == 0)
        {
            printf("TREINTA ");
        }
        else if(n8 == 3)
        {
            printf("TREINTA Y ");
        }
        else if(n8 == 4 && n9 == 0)
        {
            printf("CUARENTA ");
        }
        else if(n8 == 4)
        {
            printf("CUARENTA Y ");
        }
        else if(n8 == 5 && n9 == 0)
        {
            printf("CINCUENTA ");
        }
        else if(n8 == 5)
        {
            printf("CINCUENTA Y ");
        }
        else if(n8 == 6 && n9 == 0)
        {
            printf("SESENTA ");
        }
        else if(n8 == 6)
        {
            printf("SESENTA Y ");
        }
        else if(n8 == 7 && n9 == 0)
        {
            printf("SETENTA ");
        }
        else if(n8 == 7)
        {
            printf("SETENTA Y ");
        }
        else if(n8 == 8 && n9 == 0)
        {
            printf("OCHENTA ");
        }
        else if(n8 == 8)
        {
            printf("OCHENTA Y ");
        }
        else if(n8 == 9 && n9 == 0)
        {
            printf("NOVENTA");
        }
        else if(n8 == 9)
        {
            printf("NOVENTA Y ");
        }

        else if(n9 == 1 && n8 == 0 && n7 == 0 && n6 == 0 && n5 == 0 && n4 == 0 && n3 == 0 && n2 == 0 && n1 == 0)
        {
            printf("MIL ");
        }
        if(n9 == 1 && n8 > 1)
        {
            printf("UN ");
        }
        else if(n9 == 1 && n8 == 0 && n7 > 0)
        {
            printf("MIL ");
        }
        else if(n9 == 2 && n8 > 1)
        {
            printf("DOS ");
        }
        else if(n9 == 2 && n8 == 0)
        {
            printf("DOS ");
        }
        else if(n9 == 3 && n8 > 1)
        {
            printf("TRES ");
        }
        else if(n9 == 3 && n8 == 0)
        {
            printf("TRES ");
        }
        else if(n9 == 4 && n8 > 1)
        {
            printf("CUATRO ");
        }
        else if(n9 == 4 && n8 == 0)
        {
            printf("CUATRO ");
        }
        else if(n9 == 5 && n8 > 1)
        {
            printf("CINCO ");
        }
        else if(n9 == 5 && n8 == 0)
        {
            printf("CINCO ");
        }
        else if(n9 == 6)
        {
            printf("SEIS ");
        }
        else if(n9 == 7)
        {
            printf("SIETE ");
        }
        else if(n9 == 8)
        {
            printf("OCHO ");
        }
        else if(n9 == 9)
        {
            printf("NUEVE ");
        }
        if (n1>0 || n2>0 || n3>0 || n4>0 || n5>0 || n6>0 || n7>0 || n8 > 0 || n9 > 1)
        {
            printf("MIL ");
        }







        if(n10==1 && n11==0 && n12==0)
        {
            printf("Cien ");
        }
        else if(n10 == 1)
        {
            printf("CIENTO ");
        }
        else if(n10 == 2)
        {
            printf("DOSCIENTOS ");
        }
        else if(n10 == 3)
        {
            printf("TRESCIENTOS ");
        }
        else if(n10 == 4)
        {
            printf("CUATROCIENTOS ");
        }
        else if(n10 == 5)
        {
            printf("QUINIENTOS ");
        }
        else if(n10 == 6)
        {
            printf("SEISCIENTOS ");
        }
        else if(n10 == 7)
        {
            printf("SETECIENTOS ");
        }
        else if(n10 == 8)
        {
            printf("OCHOCIENTOS ");
        }
        else if(n10 == 9)
        {
            printf("NOVECIENTOS ");
        }

        if(n11 == 1 && n12 == 0)
        {
            printf("Diez ");
        }
        else if(n11 == 1 && n12 == 1)
        {
            printf("ONCE ");
        }
        else if(n11 == 1 && n12 == 2)
        {
            printf("DOCE ");
        }
        else if(n11 == 1 && n12 == 3)
        {
            printf("TRECE ");
        }
        else if(n11 == 1 && n12 == 4)
        {
            printf("CATORCE ");
        }
        else if(n11 == 1 && n12 == 5)
        {
            printf("QUINCE ");
        }
        else if(n11 == 1)
        {
            printf("DIECI ");
        }

        if(n11 == 5 && n12 == 0)
        {
            printf("VEINTE ");
        }
        else if(n11 == 2)
        {
            printf("VEINTI ");
        }
        else if(n11 == 3 && n12 == 0)
        {
            printf("TREINTA ");
        }
        else if(n11 == 3)
        {
            printf("TREINTA Y ");
        }
        else if(n11 == 4 && n12 == 0)
        {
            printf("CUARENTA ");
        }
        else if(n11 == 4)
        {
            printf("CUARENTA Y ");
        }
        else if(n11 == 5 && n12 == 0)
        {
            printf("CINCUENTA ");
        }
        else if(n11 == 5)
        {
            printf("CINCUENTA Y ");
        }
        else if(n11 == 6 && n12 == 0)
        {
            printf("SESENTA ");
        }
        else if(n11 == 6)
        {
            printf("SESENTA Y ");
        }
        else if(n11 == 7 && n12 == 0)
        {
            printf("SETENTA ");
        }
        else if(n11 == 7)
        {
            printf("SETENTA Y ");
        }
        else if(n11 == 8 && n12 == 0)
        {
            printf("OCHENTA ");
        }
        else if(n11 == 8)
        {
            printf("OCHENTA Y ");
        }
        else if(n11 == 9 && n12 == 0)
        {
            printf("NOVENTA");
        }
        else if(n11 == 9)
        {
            printf("NOVENTA Y ");
        }


        if(n12 == 1 && n11 > 1)
        {
            printf("UNO ");
        }
        else if(n12 == 1 && n11 == 0)
        {
            printf("UNO ");
        }
        else if(n12 == 2 && n11 > 1)
        {
            printf("DOS ");
        }
        else if(n12 == 2 && n11 == 0)
        {
            printf("DOS ");
        }
        else if(n12 == 3 && n11 > 1)
        {
            printf("TRES ");
        }
        else if(n12 == 3 && n11 == 0)
        {
            printf("TRES ");
        }
        else if(n12 == 4 && n11 > 1)
        {
            printf("CUATRO ");
        }
        else if(n12 == 4 && n11 == 0)
        {
            printf("CUATRO ");
        }
        else if(n12 == 5 && n11 > 1)
        {
            printf("CINCO ");
        }
        else if(n12 == 5 && n11 == 0)
        {
            printf("CINCO ");
        }
        else if(n12 == 6)
        {
            printf("SEIS ");
        }
        else if(n12 == 7)
        {
            printf("SIETE ");
        }
        else if(n12 == 8)
        {
            printf("OCHO ");
        }
        else if(n12 == 9)
        {
            printf("NUEVE ");
        }


    }
}
