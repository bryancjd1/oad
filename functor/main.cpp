#include <iostream>
#include <cstdlib>
#include <ctime>

#include <stdio.h>
#include <stdlib.h>


#define TAM 10

using namespace std;
bool ascendente(int a, int b)
{
    return a < b;
}

bool descendente(int a, int b)
{
    return a > b;
}
void imprimirArreglo(const int *m, const int t)
{
    for(int i=0;i<t;i++)
        cout << *(m+i) << " ";
    cout << endl << endl;
}
class bubleSort
{
public:
    void intercambio(int * const a, int * const b)
    {
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
    }
    void operator()(int *m, int t, bool(*compara)(int, int))
    {
        bool Nord = true; //variable que define si existen todavia intercambios
        while(Nord)
        {
            Nord = false; //o vuelvo falso
            for(int j=0;j<(t-1);j++)
            {
                int *a = (m+j);
                int *b = (m+j+1);
                if((*compara)(*b,*a))
                {
                    intercambio(a,b);
                    Nord = true;    //como hay intercambio se vuelve verdadero y da una vuelta mas
                }
            }
        }
    }
};
class cockTailSort
{
    public:
    void intercambio(int * const a, int * const b)
    {
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
    }
    void operator()(int *m, int t, bool(*compara)(int, int))
    {
        bool Nord = true;   //varible para detectar si el algoritmo tiene mas intercambios
        while( Nord )
        {
            Nord = false;   //se cambia a falso y si tiene intercambios se cambia a true
            for( int i = 0; i < t - 1; i++ )
            {
                int *a = (m+i);
                int *b = (m+i+1);
                if(!(*compara)(*a,*b))
                {
                    intercambio(a,b);
                    Nord = true;    //como hubo intercambio...
                }
            }

            if( !Nord ) //no tiene sentido seguir con el algoritmo si no se detecto ningun intercambio arriba
                break;

            Nord = false;
            for( int i = t - 1; i > 0; i-- )
            {
                int *a = (m+i);
                int *b = (m+i-1);
                if((*compara)(*a,*b))
                {
                    intercambio(a,b);
                    Nord = true;
                }
            }
            //imprimirArreglo(m,t);
        }
    }
};
class selectionSort
{
    public:
    void intercambio(int * const a, int * const b)
    {
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
    }
    void operator()(int *m, int t, bool(*compara)(int, int))
    {
        int *minimo;
        for(int i=0;i<(t-1);i++)
        {
            minimo=(m+i);
            for(int j=(i+1); j<t;j++)
            {
                if(!(*compara)(*minimo,*(m+j)))
                {
                    minimo = m+j;
                }
            }
            intercambio((m+i),minimo);
        }
    }
};
class insertionSort
{
    public:
    void intercambio(int * const a, int * const b)
    {
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
    }
    void operator()(int *m, int t, bool(*compara)(int, int))
    {
        int j;
        for (int i = 0; i < t; i++)
        {
            j = i;
            int *a = (m+j);
            int *b = (m+j-1);

            while (j > 0 && (*compara)(*a,*b))
            {
                intercambio(a,b);
                j--;
                a = (m+j);
                b = (m+j-1);
            }
        }
    }
};
int main()
{
    int *m;
    int ad;
    int opcion;
    m = new int [TAM];  //creo un areglo
    srand(time(0)); //siembro la semilla en funcion del tiempo actual

    for(int i=0;i<TAM;i++)
    {
        *(m+i) = rand()%100; //numeros aleatorios del 0 al 99
    }
    cout << "arreglo\n";
    imprimirArreglo(m,TAM);
    cout << "0.bublesort\n"
         << "1.cocktailsort\n"
         << "2.selecsort\n"
         << "3.insertsort\n\n"
         << "ingrese una opcion:\n";
    cin >> opcion;
    cout << "ingrese 0 para ascendente o cualquier otro valor para descendente: ";
    cin >> ad;
    if(opcion==0)
    {
        bubleSort array1;
        bubleSort* ptr=&array1;
        if(ad==0)
            ptr->operator()(m,TAM,ascendente);
        else
            ptr->operator()(m,TAM,descendente);
        imprimirArreglo(m,TAM);
    }
    if(opcion==1)
    {
        cockTailSort array1;
        cockTailSort* ptr=&array1;
        if(ad==0)
            ptr->operator()(m,TAM,ascendente);
        else
            ptr->operator()(m,TAM,descendente);
        imprimirArreglo(m,TAM);
    }
    if(opcion==2)
    {
        selectionSort array1;
        selectionSort* ptr=&array1;
        if(ad==0)
            ptr->operator()(m,TAM,ascendente);
        else
            ptr->operator()(m,TAM,descendente);
        imprimirArreglo(m,TAM);
    }
    if(opcion==3)
    {
        insertionSort array1;
        insertionSort* ptr=&array1;
        if(ad==0)
            ptr->operator()(m,TAM,ascendente);
        else
            ptr->operator()(m,TAM,descendente);
        imprimirArreglo(m,TAM);
    }

    return 0;
}
