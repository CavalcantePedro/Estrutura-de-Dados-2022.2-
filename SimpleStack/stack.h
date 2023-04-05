/*
 *	Classe da minha pilha simples de inteiros. 
 *	Class of my simple stack of ints.
 *  Author: Pedro Ricardo Cavalcante Silva
 */

#ifndef STACK_H_
#define STACK_H_

class stack
{
private:
    //Array para guardar os dados da pilha. || Array to hold stack data.
    int data[100];
    //Tamanho (ou quantidade de dados) da minha pilha. || Size (or amount of data) of my stack.
    int sizeOfStack;
    //Posicao do topo da pilha. || Position of the top of the stack.
    int top;
public:
    //Metodo construtor. || Constructor method of my class
    stack();
    //Metodo para verificar se a pilha esta vazia. || Method to check if the stack is empty.
    bool empty();
    //Metodo para verificar se a pilha esta cheia. || Method to check if the stack is full.
    bool full();
    //Metodo para inserir um dado no topo da pilha. || Method to insert a data in the top of stack.
    void push(int data);
    //Metodo para verificar tamanho da pilha. || Method to check the size of stack.
    int size();
    //Metodo ver o topo da pilha. || Method to check the top of stack.
    int top();
    //Metodo para remover o topo da pilha. || Method to remove the top of stack.
    void pop();
};

#endif