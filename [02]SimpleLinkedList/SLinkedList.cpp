/*
 *	Metodos da minha lista simplesmente encadeada  de inteiros. 
 *	Methods of my simple linked list of ints.
 *  Author: Pedro Ricardo Cavalcante Silva
 */
#include "SLinkedList.h"
#include <iostream>
#include <stdlib.h>
#include "Node.h"

using std::cout;
using std::endl;

//Metodo construtor. || Constructor method.
SListLinked::SListLinked()
{
    this->head = NULL;
    this->amountOfNodes = 0;
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
    if(numberOfNode-1 < 0 || numberOfNode-1 >= this->amountOfNodes)
    {
        throw std::out_of_range("Invalid position");
    }

    Node *aux = this->head;
    for(int i =0; i < numberOfNode-1; i++)//vai da cabeça até o nó desejado
    {
        aux = aux->getNextNode();
    }

    return aux->getDataOfNode();
}

//Metodo para pegar a posicao de determinado dado. || Method to get the position of a gien data.
int SListLinked::getPosition(int data)
{
    Node* aux = this->head;
    for(int i =0; i < this->amountOfNodes; i++)//vai da cabeça até o nó desejado
    {
        if(aux->getDataOfNode() == data)
        {
            return i+1;
        }
        aux = aux->getNextNode();
    }
    return -1;
}

//Metodo para inserir um nó na minha lista. || Method to insert a node in my list.
void SListLinked::insert(int numberOfnode, int data)
{
    if(numberOfnode-1 < 0 || numberOfnode-1 > this->amountOfNodes)
    {
        throw std::out_of_range("Invalid position");
    }

    Node *newNode = new Node(data);
    if(numberOfnode-1 == 0)//se for o primeiro nó
    {
        newNode->setNextNode(this->head);
        this->head = newNode;
    }
    else
    {
        Node* aux = this->head;
        for(int i = 0; i < numberOfnode-1 - 1; i++)//vai da cabeça até o nó desejado
        {
            aux = aux->getNextNode();
        }
        newNode->setNextNode(aux->getNextNode());
        aux->setNextNode(newNode);
    }

    this->amountOfNodes++;
}

//Metodo para remover um nó da minha lista. || Method to remove a node from my list.
void SListLinked::remove(int numberOfNode)
{
    if(numberOfNode-1 < 0 || numberOfNode-1 >= this->amountOfNodes)
    {
        throw std::out_of_range("Invalid position");
    }
    
    Node* deletedNode;
    if(numberOfNode-1 == 0)
    {
        deletedNode = this->head;
        this->head = deletedNode->getNextNode();
    }
    else
    {
        Node* aux = this->head;
        for(int i = 0; i < numberOfNode - 2; i++)//vai da cabeça até o nó desejado
        {
            aux = aux->getNextNode();
        }
        deletedNode = aux->getNextNode();
        aux->setNextNode(deletedNode->getNextNode());
    }

    delete deletedNode;
    this->amountOfNodes--;
}

//Metodo para modificar o dado de um nó. || Method to modify the data of a node.
void SListLinked::modifyData(int numberOfNode, int data)
{
    if(numberOfNode-1 < 0 || numberOfNode-1 >= this->amountOfNodes)
    {
        throw std::out_of_range("Invalid position");
    }

    Node* aux = this->head;
    for(int i = 0; i < numberOfNode-1; i++)//vai da cabeça até o nó desejado
    {
        aux = aux->getNextNode();
    }

    aux->setDataOfNode(data);
}

//Metodo para imprimir a lista. || Method to print the list.
void SListLinked::print()
{
    Node* aux = this->head;
    for(int i = 0; i < this->amountOfNodes; i++)//vai da cabeça até o nó desejado
    {
        cout<<aux->getDataOfNode()<<" ";
        aux = aux->getNextNode();
    }
    cout<<endl;
}