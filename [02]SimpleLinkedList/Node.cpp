/*
 *	Metodos da minha classe.
 *	Methods of my class.
 *  Author: Pedro Ricardo Cavalcante Silva
 */

#include <stdlib.h>
#include "Node.h"
#include <iostream>

using std::cout;
using std::endl;

Node::Node(int data)
{
    this->setDataOfNode(data);
    //Inicialmente aponta para o vazio. || Initial points to nothig
    this->setNextNode(NULL);
}

int Node::getDataOfNode()
{
    return this->dataOfNode;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}

void Node::setDataOfNode(int data)
{
    this->dataOfNode = data;
}

void Node::setNextNode(Node* adressNext)
{
    this->nextNode = adressNext;
}