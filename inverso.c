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
    int x,y;
    x=15;
    y=26;
    if(maximo(y,x)==1)
    {
        int a,b,c;
        a=0;
        b=1;
        while()
        {
            c=y/x;
            a=b;
            b=modulo(a-b(c),y);

        }
    }
    else
    {

    }
}
