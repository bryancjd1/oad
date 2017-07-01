#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class bingo
{
private:
    char letra;
    int numero;
    int x;
public:
    void operator()()
    {
        int num;
        srand(time(0));
        num=rand()%5;
        if(num==0)
        {
            letra='B';
            numero=1+rand()%15;
        }
        if(num==1)
        {
            letra='I';
            numero=16+rand()%15;
        }
        if(num==2)
        {
            letra='N';
            numero=31+rand()%15;
        }
        if(num==3)
        {
            letra='G';
            numero=46+rand()%15;
        }
        if(num==4)
        {
            letra='O';
            numero=61+rand()%15;
        }
        cout<<letra<<numero<<endl;
    }
};
int main()
{

    bingo bola1;
    bola1();
    return 0;
}
