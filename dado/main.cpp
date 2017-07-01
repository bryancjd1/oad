#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dado
{
private:
    int caras;
public:
    Dado(int x):caras(x){}

    void operator()()
    {
        srand(time(0));
        caras = 1+rand()% caras;
        cout<<caras<<endl;
    }
};
int main()
{
    int numero;
    cout<<"Elija el numero de caras del dado"<<endl;
    cin>>numero;
    Dado dado(numero);
    dado();

    return 0;
}
