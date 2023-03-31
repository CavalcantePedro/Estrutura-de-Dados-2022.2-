#include <iostream>
#include "LSeq.h"

using std::cout;
using std::endl;

int main()
{
    LSeq lista;
    lista = LSeq();

    if (lista.empty())
    {
        cout<<"Lista iniciamente vazia"<<endl;
    }

    lista.insert(1, 10);
    if (!lista.empty())
    {
        cout<<"Estado atual da lista após inserir um valor"<<endl;
        lista.showList();
        cout<<"-----------------"<<endl;
    }
    lista.insert(2, 20);
    lista.insert(3, 40);
    lista.insert(4, 50);
    lista.insert(5, 60);
    lista.insert(3, 30);
    lista.showList();
    cout<< "O tamanho atual da lista é :"<<lista.getSize()<<endl;
    cout<< "O valor 40 está na posição :"<<lista.getPosition(40)<<endl;
    cout<< "Na posição 3 esta o valor: "<<lista.getData(3)<<endl;
    lista.remove(3);
    lista.showList();
    cout<<"-----------------"<<endl;
    lista.modifyData(1,100);
    lista.showList();
    return 0;
}