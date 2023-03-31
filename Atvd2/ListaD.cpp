#include "ListaD.h"
#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;

ListaD::ListaD()
{
    head = NULL;
    qntdEle = 0;
}

ListaD::~ListaD(){}

bool ListaD::estaVazia()
{
    return (qntdEle == 0);
}

int ListaD::tamanhoLista()
{
    return qntdEle;
}

int ListaD::obterEle(int pos)
{
    if(estaVazia())
    {
        return -1;
    }
    if ((pos < 1) || (pos > tamanhoLista()))
    {
        return -1;
    }

    No *x = head;

    for (int i = 0; i < pos; i++)
    {
        x = x->getProx();
    }
    
    return x->getDado();
}

bool ListaD::inserirInicio(int dado)
{
    No *novo = new No();
    novo ->setDado(dado);
    novo ->setProx(head);
    qntdEle++;
    return true;
}

bool ListaD::inserir(int dado, int pos)
{
    if((estaVazia()) && (pos != 1))
    {
        return false;
    }
    if((pos <=0) || pos > qntdEle+1)
    {
        return false;
    }
    if(pos == 1)
    {
        inserirInicio(dado);
    }
    else
    {
        No *novo = new No();
        novo->setDado(dado);
        No *x = head;
        for (int i = 1; i < pos-1; i++)
        {
            x = x->getProx();
        }
        novo->setProx(x->getProx());
        x->setProx(novo);
        qntdEle++;
        return true;
    }
}

int ListaD::removerInicio()
{
    No *p = head;
    int dadoRem = p->getDado();
    head = p->getProx();
    qntdEle--;
    delete p;

    return dadoRem;
}

int ListaD::remover(int pos)
{
        No *antes = head;
        for(int i = 1; i < pos-1; i++) {
                antes = antes->getProx();
        }
        No *atual = antes->getProx();
        int dadoRem = atual->getDado();
        antes->setProx(atual->getProx());
        qntdEle--;
        delete atual;
        return dadoRem;

}

void ListaD::imprimir()
{
    for (int i = 1; i <= qntdEle; i++){
        int x = obterEle(i);
        cout << (i) << " = " << x << endl;
    }

}