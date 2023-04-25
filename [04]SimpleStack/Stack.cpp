/*
 *  Metodos da minha pilha simplesmente encadeada de inteiros.
 *  Methods of my simple stack of ints.
 *  Author: Pedro Ricardo Cavalcante Silva
 */

#include <iostream>
#include "Stack.h"

//Metodo construtor. || Constructor method.
Stack::Stack()
{
    sizeOfStack = 0;
}
//Metodo para verificar se a pilha esta vazia. || Method to check if the stack is empty.
bool Stack::empty()
{
    if(sizeOfStack == 0)
    {
        return true;
    }
    else return false;
}
//Metodo para verificar se a pilha esta cheia. || Method to check if the stack is full.
bool Stack::full()
{
    if(sizeOfStack == 100)
    {
        return true;
    }
    else return false;
}
//Metodo para inserir um dado no topo da pilha. || Method to insert a data in the top of stack.
void Stack::push(int data)
{
    if(!full())
    {
        this->data[sizeOfStack] = data;
        sizeOfStack++;
    }
}
//Metodo para verificar tamanho da pilha. || Method to check the size of stack.
int Stack::size()
{
    return sizeOfStack;
}
//Metodo ver o topo da pilha. || Method to check the top of stack.
int Stack::top()
{
    if(!empty())
    {
        return this->data[sizeOfStack-1];
    }
    return -1;
}
//Metodo para remover o topo da pilha. || Method to remove the top of stack.
void Stack::pop()
{
    if(!empty())
    {
        sizeOfStack--;
    }
}

//Metodo para mostrar os dados da pilha. || Method to show the data of stack.
void Stack::show()
{
    for(int i = sizeOfStack-1; i >= 0; i--)
    {
        std::cout<<this->data[i]<<std::endl;
    }
}
