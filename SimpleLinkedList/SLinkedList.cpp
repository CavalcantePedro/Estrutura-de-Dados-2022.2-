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

//Metodo construtor. || Constructor method.
SListLinked::SListLinked()
{
    head = NULL;
    amountOfNodes = 0;
}

//Metodo para verificar se a lista esta vazia. || Method to check if my list is empty.
bool SListLinked::empty()
{
    if(amountOfNodes == 0)
    {
        return true;
    }
    else return false;
}

//Metodo para verficar tamanho atual da lista. || Method to check current list size.
int SListLinked::getSize()
{
    return amountOfNodes;
}

//Metodo para pegar o dado de determinado no. || Method to get the data of a given node.
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

//Metodo para pegar a posicao de determinado dado. || Method to get the position of a gien data.
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

//Metodo para inserir um nó na minha lista. || Method to insert a node in my list.
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

//Metodo privado para o primeiro nó da minha lista. || Private method to make the first node in my list.
void SListLinked::firstNode(int data)
{
    Node *newNode = new Node();
    newNode->setDataOfNode(data);
    newNode->setNextNode(head);
    head = newNode;
    amountOfNodes++;
}

//Metodo privado para o ultimo nó da minha lista. || Private method to make the last node in my list.
void SListLinked::lastNode(int data)
{
    Node *newNode = new Node();
    newNode->setDataOfNode(data);
    newNode->setNextNode(NULL);

    Node *aux = head;
    while (aux->getNextNode() != NULL)
    {
        aux = aux->getNextNode();
    }
    aux->setNextNode(newNode);
    amountOfNodes++;
}

//Metodo para remover um nó da minha lista. || Method to remove a node from my list.
void SListLinked::remove(int numberOfNode)
{
    if(empty())
    {
        cerr<<"Empty List"<<endl;
    }
    else if((numberOfNode < 1) || (numberOfNode > amountOfNodes))
    {
        cerr<<"Invalid position"<<endl;
    }
    else if(numberOfNode == 1)
    {
        removeFirstNode();
    }
    else if(numberOfNode == amountOfNodes)
    {
        removeLastNode();
    }
    else
    {
        int count = 1;
        Node *aux = head;
        while (count < numberOfNode-1)
        {
            aux = aux->getNextNode();
            count++;
        }
        Node *aux2 = aux->getNextNode();
        aux->setNextNode(aux2->getNextNode());
        delete aux2;
        amountOfNodes--;
    }
}

//Metodo privado para remover o primeiro nó da minha lista. || Private method to remove the first node in my list.
void SListLinked::removeLastNode()
{
    Node *aux = head;
    while (aux->getNextNode()->getNextNode() != NULL)
    {
        aux = aux->getNextNode();
    }
    delete aux->getNextNode();
    aux->setNextNode(NULL);
    amountOfNodes--;
}

//Metodo privado para remover o ultimo nó da minha lista. || Private method to remove the last node in my list.
void SListLinked::removeFirstNode()
{
    Node *aux = head;
    head = aux->getNextNode();
    delete aux;
    amountOfNodes--;
}

//Metodo para imprimir a minha lista. || Method to print my list.
void SListLinked::print()
{
    Node *aux = head;
    while (aux != NULL)
    {
        cout<<aux->getDataOfNode()<<" ";
        aux = aux->getNextNode();
    }
    cout<<endl;
}