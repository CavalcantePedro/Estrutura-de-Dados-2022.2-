/*
* Classe nó para minha arvore binaria.
* Class node of my binary tree.
*Autor: Pedro Ricardo Cavalcante Silva
*/

#ifndef NODE_H_
#define NODE_H_

class Node
{
    private:
        //Variavel para guardar conteudo do nó da minha arvore binaria. || Variable to store the contents of the node in my binary tree.
        int dataOfNode;
        //Ponteiro para filho da esquerda. || Pointer of my left child.
        Node* leftChild;
        //Ponteiro para filho da direita. || Pointer of my right child.
        Node* rightChild;
    public:
        //Contrutor da minha classe nó. || Constructor of my node's class.
        Node(int data);
        //Metodo para pegar conteudo do meu nó. || Method of get the contents of my node.
        int getDataOfNode();
        //Metodo para setar o conteudo do no. || Method of set the contents of node
        void setDataOfNode(int data);
        //Metodo para pegar endereço do filho da esquerda. || Method of get the adress of left child.
        Node* getLeftChild();
        //Metodo para setar o endereço do filho da esquerda. || Method of set the adress of left child.
        void setLeftChild(Node* adressLeft);
        //Metodo para pegar endereço do filho da direita. || Method of get the adress of right child.
        Node* getRightChild();
        //Metodo para setar o endereço do filho da direita. || Method of set the adress of right child.
        void setRightChild(Node* adressRight);
};

#endif