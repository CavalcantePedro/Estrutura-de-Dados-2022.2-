#include <iostream>
#include "SLinkedList.h"

int main()
{
    SListLinked lista;
    lista = SListLinked(); //Criação da lista vazia

    if (lista.empty())//Verifica se a lista está vazia
    {
        std::cout<<"Lista iniciamente vazia"<<std::endl;
    }
    lista.insert(1, 10);
    if (!lista.empty())
    {
        std::cout<<"Estado atual da lista após inserir um valor"<<std::endl;
        lista.print();
        std::cout<<"-----------------"<<std::endl;
    }
    lista.insert(2, 20);
    lista.insert(3, 40);
    lista.insert(4, 50);
    lista.insert(5, 60);
    lista.insert(3, 30);
    lista.print();
    std::cout<< "O tamanho atual da lista é :"<<lista.getSize()<<std::endl;
    std::cout<< "O valor 40 está na posição :"<<lista.getPosition(40)<<std::endl;
    std::cout<< "Na posição 3 esta o valor: "<<lista.getData(3)<<std::endl;
    lista.remove(3);
    lista.print();
    std::cout<<"-----------------"<<std::endl;
    lista.modifyData(1,100);
    lista.print();
    return 0;
}