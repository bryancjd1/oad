#include <iostream>
#include <stdlib.h>
#include <ctime>
#define FILAS 4
#define COLUMNAS 4
using namespace std;
int checkrep(int n, int juego[][4]);
void generar(int juego[][4]);
void dibujar(int juego[][4]);
void movimiento(int juego[][4],int a,int *x, int *y);
bool verificacion(int juego[][4],int a, int x, int y);
bool victoria(int juego[][4]);
void swap(int *a, int *b);
int main()
{
    bool game=true;
    int movida;
    int x=3;
    int y=3;
    int juego[FILAS][COLUMNAS];
    int (*p)[4]=juego;
    srand(time(0));
    generar(juego);
    while(game)
    {
        dibujar(juego);
        cout<<"INGRESE SU MOVIMIENTO"<<endl;
        cout<<"0 arriba"<<endl;
        cout<<"1 izquierda"<<endl;
        cout<<"2 abajo"<<endl;
        cout<<"3 derecha"<<endl;
        cin>>movida;
        if(verificacion(juego,movida,x,y)==true)
            movimiento(juego,movida,&x,&y);
        else
            cout<<"Movimiento no valido"<<endl;
        if(victoria(juego))
        {
            cout << "la partida ha terminado\n";
            game = false;
        }
        system("pause");
        system("cls");
    }
    dibujar(juego);
    return 0;

}
int checkrep(int n, int juego[][4])
{
    for(int fil = 0; fil < FILAS; fil++)
    {
        for(int col = 0; col < COLUMNAS; col++)
        {
            if(n==juego[fil][col])
               return 0;
        }
    }
    return 1;
}
void generar(int juego[][4])
{
    int n;
    int x,y;
    int a=0;
    for(int fil = 0; fil < FILAS; fil++)
    {
        for(int col = 0; col < COLUMNAS; col++)
        {
            while(a!=1)
            {
                n=rand()%16;
                a=checkrep(n,juego);
            }
            juego[fil][col]=n;
            a=0;
        }
    }
    for(int fil = 0; fil < FILAS; fil++)
    {
        for(int col = 0; col < COLUMNAS; col++)
        {
            if(juego[fil][col]==0)
            {
                x=fil;
                y=col;
            }
        }
    }
    swap(juego[x][y],juego[3][3]);

}
void dibujar(int juego[][4])
{
    int (*p)[4]=juego;
    for(int fil = 0; fil < FILAS; fil++)
    {
        for(int col = 0; col < COLUMNAS; col++)
        {
            if(juego[fil][col]==0)
                cout<<"    |   ";
            else if(juego[fil][col]>9)
                cout << *(*(p+fil)+col) <<"  |   ";
            else
                cout << *(*(p+fil)+col) <<"   |   ";

        }
        cout << "\n";
    }
}
void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
void movimiento(int juego[][4],int a,int *x, int *y)
{
    if(a==0)
    {
        swap(juego[*x-1][*y],juego[*x][*y]);
        *x=*x-1;
    }
    if(a==1)
    {
        swap(juego[*x][*y-1],juego[*x][*y]);
        *y=*y-1;
    }
    if(a==2)
    {
        swap(juego[*x+1][*y],juego[*x][*y]);
        *x=*x+1;
    }
    if(a==3)
    {
        swap(juego[*x][*y+1],juego[*x][*y]);
        *y=*y+1;
    }
}
bool verificacion(int juego[][4],int a, int x, int y)
{
    if(a==0)
    {
        if((x-1)<0)
            return false;
        else
            return true;
    }
    if(a==1)
    {
        if((y-1)<0)
            return false;
        else
            return true;
    }
    if(a==2)
    {
        if((x+1)>3)
            return false;
        else
            return true;
    }
    if(a==3)
    {
        if((y+1)>3)
            return false;
        else
            return true;
    }
}
bool victoria(int juego[][4])
{
    if(juego[3][0]==9)
        return true;
    else
        return false;
}
