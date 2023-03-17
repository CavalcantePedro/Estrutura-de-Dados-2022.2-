#ifndef LSEQ_H_
#define LSEQ_H_

const int MAX = 100;

class LSeq 
{
private:
    int elementos[MAX];
    int qndEle;

public:
    LSeq(); //Criar lista

    bool estaVazia(); //Veriicar se a lista é vazia 
    bool estaCheia(); //Vrifica se a lista esta cheia
    int getTamanho(); //Obter tamanho
    int getElemento(int posicao); //Obter elemento
    void modificarElemento(int posicao, int novoValor); //modificar elemento 
    void inserirElemento(int posicao, int valor); // INSERIR
    void retirarElemento(int posicao); // RETIRAR
    void imprimirLista();
};

#endif