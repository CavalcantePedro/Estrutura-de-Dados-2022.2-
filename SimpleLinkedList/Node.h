/*
 *	Classe no para minha lista simplismente encadeada. 
 *	Class node of my simple linked list of ints.
 */
#ifndef NODE_H_
#define NODE_H_

class Node
{
private:
    //Variavel para guardar conteudo do nó da minha lista encadeada. || Variable to store the contents of the node in my linked list.
    int dataOfNode;
    //Ponteiro para proximo nó. || Pointer of my next node.
    Node *nextNode;
public:
    //Contrutor da minha classe nó. || Constructor of my node's class.
    Node();
    //Metodo para pegar conteudo do meu nó. || Method of get the contents of my node.
    int getDataOfNode();
    //Metodo para setar o conteudo do no. || Method of set the contents of node
    void setDataOfNode(int data);
    //Metodo para pegar endereço do proximo nó. || Method of get the adress of next node.
    Node *getNextNode();
    //Metodo para setar o endereço do proximo nó. || Method of set the adress of next node.
    void setNextNode(Node *adressNext);
};

#endif
