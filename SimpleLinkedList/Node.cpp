/*
 *	Metodos da minha classe.
 *	Methods of my class.
 *  Author: Pedro Ricardo Cavalcante Silva
 */

#include <stdlib.h>
#include "Node.h"

Node::Node ()
{
    
    setDataOfNode(0);
    //Inicialmente aponta para o vazio. || Initial points to nothig
    setNextNode(NULL);
}

int Node::getDataOfNode()
{
    return dataOfNode;
}

Node *Node::getNextNode()
{
    return nextNode;
}

void Node::setDataOfNode(int data)
{
    dataOfNode = data;
}

void Node::setNextNode(Node *adressNext)
{
    *nextNode = *adressNext;
}