#include "No.h"

class ListaD
{
private:
    No *head;
    int qntdEle;
    bool inserirInicio(int dado);
    int removerInicio();

public:
    ListaD();
    ~ListaD();

    bool estaVazia();
    int tamanhoLista();
    int obterEle(int pos);
    bool modEle(int dadoNovo, int pos);
    bool inserir(int dado, int pos);
    int remover(int pos);
    void imprimir();
};


