#include <iostream>
#include <cstdlib>
#include <ctime>

#include <stdio.h>
#include <stdlib.h>


#define TAM 10

using namespace std;
void cuadrado(int l, int a);
void triangulo(int b, int h);
void rectangulo(int b, int h);
void circulo(int r, int a);


void quick(int *m,int i,int d);

int main()
{
    int a;
    int opcion;
    int b;
    void(*f[4])(int ,int) = {cuadrado,triangulo,rectangulo,circulo};

    cout << endl;

    cout << "0.cuadrado\n"
         << "1.triangulo\n"
         << "2.rectangulo\n"
         << "3.circulo\n\n"
         << "ingrese una opcion:\n";
    cin >> opcion;
    cout << "ingrese las dimensiones";
    cin >> a;
    cin >> b;

    (*f[opcion])(a,b);



    return 0;
}
void cuadrado(int l, int a)
{
    cout<<l*l;
}
void triangulo(int b, int h)
{
    cout<<(b*h)/2;
}
void rectangulo(int b, int h)
{
    cout<<b*h;
}
void circulo(int r, int a)
{
    cout<<r*r*3.14;
}


