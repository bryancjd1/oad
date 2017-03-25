#include <stdio.h>
#include <stdlib.h>

void menu(); // Menu de opciones
int suma(int a, int b, int modulo); // Funcion sumar dos numeros
int resta(int a, int b, int modulo); // Funcion restar dos numeros
int multiplicar(int a, int b, int modulo); // Funcion multiplicar dos numeros
int dividir(int a, int b, int modulo); // Funcion dividir dos numeros

void main() {
  int opc;
  int a, b;
  char c;
  int modulo;

  do {
    menu();
    scanf("%d",&opc);
    switch(opc) {
      case 1:
        printf("\nIntroduce a: ");
        scanf("%i", &a);
        printf("\nIntroduce b: ");
        scanf("%i", &b);
        printf("\nIntroduce modulo: ");
        scanf("%i", &modulo);
        printf("La suma de %i y %i es: %i\n\n", a, b, suma(a, b, modulo));
        break;
      case 2:
        printf("\nIntroduce a: ");
        scanf("%i", &a);
        printf("\nIntroduce b: ");
        scanf("%i", &b);
        printf("\nIntroduce modulo: ");
        scanf("%i", &modulo);
        printf("La resta de %i y %i es: %i\n\n", a, b, resta(a, b, modulo));
        break;
      case 3:
        printf("\nIntroduce a: ");
        scanf("%i", &a);
        printf("\nIntroduce b: ");
        scanf("%i", &b);
        printf("\nIntroduce modulo: ");
        scanf("%i", &modulo);
        printf("La multiplicacion de %i y %i es: %i\n\n", a, b, multiplicar(a, b, modulo));
        break;
      case 4:
        printf("\nIntroduce a: ");
        scanf("%i", &a);
        printf("\nIntroduce b: ");
        scanf("%i", &b);
        printf("\nIntroduce modulo: ");
        scanf("%i", &modulo);
        printf("La division entre %i y %i es: %i\n", a, b, dividir(a, b, modulo));
        break;
      case 0: break;
      default:
        printf("\nIntroduce una opción valida...");
    }
  } while (opc != 0);
}

void menu() {
  printf ("\nIntroduce una opción de las siguientes:\n");
  printf ("1.- Sumar\n");
  printf ("2.- Restar\n");
  printf ("3.- Multiplicar\n");
  printf ("4.- Dividir\n");
  printf ("0.- Salir\n");
  printf ("Opcion: ");
}

int suma(int a, int b , int modulo) {
  return (a+b)%modulo;
}

int resta(int a, int b, int modulo) {
  return (a-b)%modulo;
}

int multiplicar(int a, int b, int modulo) {
  return (a*b)%modulo;
}

int dividir(int a, int b, int modulo) {
  return (a/b)%modulo;
}
