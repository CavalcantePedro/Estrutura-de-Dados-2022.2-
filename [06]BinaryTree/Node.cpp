/* 
* Metodos da minha classe.
* Methods of my class.
* Author: Pedro Ricardo Cavalcante Silva Filho
*/

#include <stdlib.h>
#include "Node.h"

Node :: Node(int data)
{
    this -> setDataOfNode(data);
    //Inicialmente aponta para o vazio. || Initial points to nothing
    this -> setLeftChild(NULL);
    this -> setRightChild(NULL);
}

int Node :: getDataOfNode()
{
    return this -> dataOfNode;
}

void Node :: setDataOfNode(int data)
{
    this -> dataOfNode = data;
}

Node* Node::getLeftChild()
{
    return this->leftChild;
}

Node* Node::getRightChild()
{
    return this->rightChild;
}

void Node::setLeftChild(Node* adressLeft)
{
    this->leftChild = adressLeft; 
}

void Node::setRightChild(Node* adressRight)
{
    this->rightChild = adressRight; 
}