#include <stdio.h>
#include <math.h>
int main()
{
    float cantidad;
    int a,b,c,d,e,f,g,h,i,j,k;
    scanf("%f", &cantidad);
    a=cantidad/200;
    cantidad=fmod(cantidad,200);
    b=cantidad/100;
    cantidad=fmod(cantidad,100);
    c=cantidad/50;
    cantidad=fmod(cantidad,50);
    d=cantidad/20;
    cantidad=fmod(cantidad,20);
    e=cantidad/10;
    cantidad=fmod(cantidad,10);
    f=cantidad/5;
    cantidad=fmod(cantidad,5);
    g=cantidad/2;
    cantidad=fmod(cantidad,2);
    h=cantidad/1;
    cantidad=fmod(cantidad,1);
    i=cantidad/0.50;
    cantidad=fmod(cantidad,0.50);
    j=cantidad/0.20;
    cantidad=fmod(cantidad,0.20);
    k=cantidad/0.10;
    cantidad=fmod(cantidad,0.10);

    printf("De 200 %i \n",a);
    printf("De 100 %i \n",b);
    printf("De 50 %i \n",c);
    printf("De 20 %i \n",d);
    printf("De 10 %i \n",e);
    printf("De 5 %i \n",f);
    printf("De 2 %i \n",g);
    printf("De 1 %i \n",h);
    printf("De 0.50 %i \n",i);
    printf("De 0.20 %i \n",j);
    printf("De 0.10 %i \n",k);
}
