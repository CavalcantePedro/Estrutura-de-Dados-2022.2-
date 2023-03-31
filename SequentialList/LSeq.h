/*
 *	Classe da minha lista sequencial de inteiros. 
 *	Class of my sequential list of ints.
 */
#ifndef LSEQ_H_
#define LSEQ_H_

//Tamanho (ou quantidade) maximo da lista. || Size (or amount) maximum of my sequential list.
const int maxSize = 100;

class LSeq 
{
private:
    //Array para guardar os dados da lista sequencial. || Array to hold sequential list data.		
    int data[maxSize]; 
    //Tamanho (ou quantidade de dados) da minha lista. || Size (or amount of data) of my sequential list.
    int sizeOfList;

public:
    //Metodo construtor. || Constructor method of my class
    LSeq();
    //Metodo para verificar se a lista esta vazia. || Method to check if my list is empty.
    bool empty(); 
    //Metodo para verificar se a lista esta cheia. || Method to check if my list is full.
    bool full(); 
    //Metodo para verficar tamanho atual da lista. || Method to check current list size.
    int getSize();
    //Metodo para pegar o dado de determinada posicao. || Method to get the data of a given position.
    int getData(int position);
    //Metodo para pegar a posicao de determinado dado. || Method to get the position of a gien data.
    int getPosition(int data);
    //Meodo para inserir um dado em uma determinada posicao da lista. || Method to insert data at a given position in the list.
    void insert(int position, int data);
    //Metodo para modicar dado ja presente na lista. || Method for modifying data already present in the list
    void modifyData(int position, int newData);
    //Metodo para remover dado de uma determinada posicao. || Method  to remove data at a given position in the list.
    void remove(int position);
    //Metodo para imprimir lista. || Method to show list.
    void showList();
};

#endif
