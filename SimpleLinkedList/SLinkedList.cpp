/*
 *	Metodos da minha lista simplesmente encadeada  de inteiros. 
 *	Methods of my simple linked list of ints.
 */
#include "SLinkedList.h"
#include <iostream>
#include <stdlib.h>

using std::cerr;
using std::cout;
using std::endl;

SListLinked::SListLinked()
{
    head = NULL;
    amountOfNodes = 0;
}

bool SListLinked::empty()
{
    if(amountOfNodes == 0)
    {
        return true;
    }
    else return false;
}

int SListLinked::getSize()
{
    return amountOfNodes;
}

int SListLinked::getData(int numberOfNode)
{
    Node *aux = head;
    int count = 1;
    if(empty())
    {
        cerr<<"Empty List"<<endl;
    }
    else if((numberOfNode < 1) || (numberOfNode > amountOfNodes))
    {
        cerr<<"Invalid position"<<endl;
    }
    while (count < numberOfNode)
    {
        aux = aux->getNextNode();
        count++;
    }
    return aux->getDataOfNode();
}

int SListLinked::getPosition(int data)
{
    int count =1;
    Node *aux;
    if(empty()) cerr<<"Empty List"<<endl;
    aux = head;
    while (aux!=NULL)
    {
        if(aux->getDataOfNode() == data)
        {
            return count;
        }
        aux = aux->getNextNode();
        count++;
    }
    
}

void SListLinked::insert(int numberOfnode, int data)
{
    if(empty() && (numberOfnode!=1))
    {
        cerr<<"Empty list and invalid position"<<endl;
    }
    else if(numberOfnode == 1)
    {
        firstNode(data);
    }
    else if(numberOfnode == amountOfNodes+1)
    {
        lastNode(data);
    }
    else
    {
        int count =1;
        Node *newNode = new Node();
        newNode->setDataOfNode(data);

        Node *aux = head;
        while ((count < numberOfnode-1) && (aux != NULL))
        {
            aux = aux->getNextNode();
            count++;
        }
        if(aux == NULL) cerr<<"Erro"<<endl;

        newNode ->setNextNode(aux->getNextNode());
        aux->setNextNode(newNode);
        amountOfNodes++;
        
    }
}

void SListLinked::firstNode(int data)
{

}

void SListLinked::lastNode(int data)
{

}

void SListLinked::remove(int numberOfnode)
{

}

void SListLinked::showList()
{

}

// int ListaD::removerInicio()
// {
//     No *p = head;
//     int dadoRem = p->getDado();
//     head = p->getProx();
//     qntdEle--;
//     delete p;

//     return dadoRem;
// }

// int ListaD::remover(int pos)
// {
//         No *antes = head;
//         for(int i = 1; i < pos-1; i++) {
//                 antes = antes->getProx();
//         }
//         No *atual = antes->getProx();
//         int dadoRem = atual->getDado();
//         antes->setProx(atual->getProx());
//         qntdEle--;
//         delete atual;
//         return dadoRem;

// }

// void ListaD::imprimir()
{
    for (int i = 1; i <= qntdEle; i++){
        int x = obterEle(i);
        cout << (i) << " = " << x << endl;
    }

}