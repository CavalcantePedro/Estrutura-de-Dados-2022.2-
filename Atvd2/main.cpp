#include <iostream>
#include "ListaD.h"

using std::cout;
using std::endl;

int main()
{
    ListaD lista;
    bool retorno;
    int dado;

    lista = ListaD();

    if (lista.estaVazia())
    {
        cout << "Inicialmente Vazia"<<endl;
    }
    else
    {
        cout << "Inicialmente NÃO Vazia"<<endl;
    }

    cout << "Inserindo um dado na lisa na posição inicial (1)" << endl;
    lista.inserir(4 , 1);
    //lista.imprimir();

    cout << "Inserindo dados na lista" << endl;
    lista.inserir(3,2);
    lista.inserir(2,3);
    lista.inserir(1,4);
    lista.inserir(0,5);
    cout << "Impimindo lista: \n" << endl;
    lista.imprimir();
    
    cout << "Tamanho atual da lista= " << lista.tamanhoLista() << endl;

    cout << "Removendo dado da posição 5 e imprimindo"<<endl;
    lista.remover(5);
    lista.imprimir();

}