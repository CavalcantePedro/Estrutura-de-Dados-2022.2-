#include <iostream>
#include "LSeq.h"

using std::cout;
using std::endl;

int main()
{
    LSeq lista;    
    lista = LSeq(); //Criação da lista vazia
    
    if (lista.empty()) //Verifica se a lista está vazia
    {
        cout<<"Lista iniciamente vazia"<<endl;
    }

    lista.insert(1, 10); //Inserir um elemento em uma determinada posição
    
    if (!lista.empty())
    {
        cout<<"Estado atual da lista após inserir um valor"<<endl;
        lista.showList(); //Mostra a lista
        cout<<"-----------------"<<endl;
    }

    lista.insert(2, 20);
    lista.insert(3, 40);
    lista.insert(4, 50);
    lista.insert(5, 60);
    lista.insert(3, 30);
    lista.showList();
    
    cout<< "O tamanho atual da lista é :"<<lista.getSize()<<endl;//Obter o tamanho da lista
    cout<< "O valor 40 está na posição :"<<lista.getPosition(40)<<endl;//Obter posição de um elemento
    cout<< "Na posição 3 esta o valor: "<<lista.getData(3)<<endl;//Obter o elemento de uma determinada posição
    lista.remove(3);//Remover um elemento de uma determinada posição
    lista.showList();
    cout<<"-----------------"<<endl;
    lista.modifyData(1,100);//Modificar o valor de um elemento de uma determinada posição
    lista.showList();
    return 0;
}