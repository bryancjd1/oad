#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        next=NULL;
    }

};

class List
{
    private:
        Node *primero;
        Node *ultimo;
    public:
        List()
        {
            primero=ultimo=NULL;
        }
        void inserta(int valor)
        {
            Node *temp=new Node(valor);
            if(primero==NULL)
            {
                primero=ultimo=temp;
            }
            else
            {
                temp->next=primero;
                primero=temp;
            }
        }
        void eliminar(int valor)
        {
            Node *aux=primero;
            Node *aux2=primero->next;
            if(primero=NULL)
                cout<<"Lista vacia"<<endl;
            else
                while(aux2!=NULL)
                {
                    if(aux2->val=valor)
                    {
                        Node *temp=aux2;
                        aux->next=aux2->next;
                        delete temp;
                        valor=0;
                    }
                    aux2=aux2->next;
                    aux=aux->next;
                }
                if(valor!=0)
                {
                    cout<<"numero no encontrado"<<endl;
                }
        }
        void imprimir()
        {
            cout<<"lista\n";
            Node *aux=primero;
            if(primero==NULL)
                cout<<"Lista vacia"<<endl;
            else
            {
                while(aux!=NULL)
                {
                    cout<<aux->val<<endl;
                    aux=aux->next;
                }
            }
        }
        void ordenado(List a,List b)
        {
            if((a.primero->val)<(b.primero->val))
            {
                primero=a.primero;
                while((a.primero->next!=NULL)&&(b.primero->next!=NULL))
                {

                    if((a.primero->next->val)>(b.primero->val))
                    {
                        if(ultimo==NULL)
                        {
                            a.primero=a.primero->next;
                            primero->next=b.primero;
                            ultimo=b.primero;
                            b.primero=b.primero->next;
                        }
                        else
                        {
                            a.primero=a.primero->next;
                            ultimo->next=b.primero;
                            ultimo=b.primero;
                            b.primero=b.primero->next;
                        }
                    }
                    if((a.primero->val)<(b.primero->val))
                    {
                        if(ultimo==NULL)
                        {
                            primero->next=a.primero->next;
                            ultimo=a.primero->next;
                            a.primero=a.primero->next;
                        }
                        else
                        {
                            ultimo->next=a.primero;
                            ultimo=a.primero;
                        }
                    }
                }
                if(a.primero->next==NULL)
                {

                    while(b.primero->next!=NULL)
                    {
                        ultimo->next=b.primero;
                        ultimo=b.primero;
                        b.primero=b.primero->next;
                    }
                    ultimo->next=b.primero;
                    ultimo=b.primero;
                }
                else
                {
                    a.primero=a.primero->next;
                    ultimo->next=b.primero;
                    ultimo=b.primero;
                    while(a.primero->next!=NULL)
                    {
                        ultimo->next=a.primero;
                        ultimo=a.primero;
                        a.primero=a.primero->next;
                    }
                    ultimo->next=a.primero;
                    ultimo=a.primero;
                }
            }
            else
            {
                primero=b.primero;
                while((a.primero->next!=NULL)&&(b.primero->next!=NULL))
                {
                    if((b.primero->next->val)>(a.primero->val))
                    {
                        if(ultimo==NULL)
                        {
                            b.primero=b.primero->next;
                            primero->next=a.primero;
                            ultimo=a.primero;
                            a.primero=a.primero->next;
                        }
                        else
                        {
                            b.primero=b.primero->next;
                            ultimo->next=a.primero;
                            ultimo=a.primero;
                            a.primero=a.primero->next;
                        }
                    }
                    if((b.primero->val)<(a.primero->val))
                    {
                        if(ultimo==NULL)
                        {
                            primero->next=b.primero->next;
                            ultimo=b.primero->next;
                            b.primero=b.primero->next;
                        }
                        else
                        {
                            ultimo->next=b.primero;
                            ultimo=b.primero;
                        }
                    }
                }
                if(b.primero->next==NULL)
                {

                    while(a.primero->next!=NULL)
                    {
                        ultimo->next=a.primero;
                        ultimo=a.primero;
                        a.primero=a.primero->next;
                    }
                    ultimo->next=a.primero;
                    ultimo=a.primero;
                }
                else
                {
                    b.primero=b.primero->next;
                    ultimo->next=a.primero;
                    ultimo=a.primero;
                    while(b.primero->next!=NULL)
                    {
                        ultimo->next=b.primero;
                        ultimo=b.primero;
                        b.primero=b.primero->next;
                    }
                    ultimo->next=b.primero;
                    ultimo=b.primero;
                }
            }

        }
        void probar()
        {
            ultimo=primero->next;
            primero=primero->next;
            cout<<primero->next->val<<endl;
            cout<<ultimo->val<<endl;
        }
};

int main()
{
    List lista;
    lista.inserta(8);
    lista.inserta(6);
    lista.inserta(4);
    lista.inserta(2);
    List lista2;
    lista2.inserta(3);
    lista2.inserta(1);
    lista.imprimir();
    lista2.imprimir();
    List lista3;
    lista3.ordenado(lista,lista2);
    cout<<"\n\n";
    lista3.imprimir();


}
