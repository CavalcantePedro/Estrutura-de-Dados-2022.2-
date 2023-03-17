#include <iostream>
#include "LSeq.h"

using namespace std;

int main()
{
    LSeq lista;


    lista  = LSeq(); // Crio minha lista

    //Verificar se a lista está vazia 
    if(lista.estaVazia())
    {
        cout << "Lista esta vazia!" <<endl;
    }
    else
    {
        cout << "Lista contem elementos" << endl;
    }

    //Inserir elementos na lista.
    cout << "Inserindo elementos na lista nas 2 primeiras posições" << endl;
    lista.inserirElemento(1, 20); //Posso colocar a posição sem me preocupar com o index pois no metodo já faço a coreção necessária 
    lista.inserirElemento(2, 10);


    cout << "Após as duas incrementações" << endl;
    cout << "O tamanho da lista é: " << lista.getTamanho() << endl;
    cout << "e a lista esta assim:" << endl;
    lista.imprimirLista();

    cout << "Inserindo um elemento na posição 2 da lista: " << endl;
    lista.inserirElemento(2, 15);
    cout << "Inserindo um elemento na posição 1 da lista: " << endl;
    lista.inserirElemento(1, 25);
    cout << "E a lista esta assim:" << endl;
    lista.imprimirLista();

    cout << "Pegando elemento da posiçao 3" << endl;
    cout << "Elemento da posição 3 é: " << lista.getElemento(3)<<endl;

    cout << "Modificar elemento da posição 1" << endl;
    lista.modificarElemento(1, 100);
    lista.imprimirLista();

    cout << "Retirar elemento da posiçao 1"<< endl;
    lista.retirarElemento(1);
    lista.imprimirLista();
    
    return 0;
}