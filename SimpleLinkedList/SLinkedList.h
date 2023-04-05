/*
 *	Classe da minha lista simplesmente encadeada  de inteiros. 
 *	Class of my simple linked list of ints.
 */
#ifndef SLL_H_
#define SLL_H_

#include "Node.h"

class SListLinked
{
private:
    //Nó inicial da minha lista encadeada || Initial node of my linked list
    Node *head;
    //Quantidade de nos na minha lista. || Amount of nodes in my list
    int amountOfNodes;
    //Metodo privado para o primeiro nó da minha lista. || Private method to make the first node in my list.
    void firstNode(int data);
    //Metodo privado para o ultimo nó da minha lista. || Private method to make the last node in my list.
    void lastNode(int data);
    //Metodo privado para remover o primeiro nó da minha lista. || Private method to remove the first node in my list.
    void removeFirstNode();
    //Metodo privado para remover o ultimo nó da minha lista. || Private method to remove the last node in my list.
    void removeLastNode();

public:
    //Metodo construtor. || Constructor method.
    SListLinked();
    //Metodo para verificar se a lista esta vazia. || Method to check if my list is empty.
    bool empty();
    //Metodo para verficar tamanho atual da lista. || Method to check current list size.
    int getSize();
    //Metodo para pegar o dado de determinado no. || Method to get the data of a given node.
    int getData(int numbeOfNode);
    //Metodo para pegar a posicao de determinado dado. || Method to get the position of a gien data.
    int getPosition(int data);
    //Metodo para modicar dado ja presente na lista. || Method for modifying data already present in the list
    void modifyData(int position, int newData);
    void insert(int numberOfnode, int data);
    //Metodo para remover dado de uma determinado nó. || Method  to remove data at a given node in the list.
    void remove(int numberOfnode);
    //Metodo para imprimir lista. || Method to show list.
    void print();
};

#endif


