#include <stdio.h>

int modulo(int a, int b)
{
    int c,r;
    if (a<0)
    {
        c=(a/b)-1;
        r=a-c*b;
    }
    else
    {
        c=(a/b);
        r=a-c*b;
    }
    return r;
}
int maximo(int x, int y)
{
    while( y > 0 )
    {
        int f = modulo(x,y);
        x = y;
        y = f;
    }
    return x;
}
int main()
{
    int a,b;
    a=2;
    b=4;
    if(maximo(b,a)==1)
    {
        printf("faw");
    }
    else
    {

    }
}
