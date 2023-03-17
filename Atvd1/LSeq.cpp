#include "LSeq.h"
#include <iostream>

using namespace std;

LSeq::LSeq() 
{
    qndEle = 0;
}

bool LSeq::estaVazia() 
{
    return qndEle == 0; //Retorna vdd se tamanho for igual a 0, ou seja lista vazia
}

bool LSeq::estaCheia() 
{
    return qndEle == MAX;  //Retorna vdd se tamanho for igual ao MAX (valor maximo definido no cabeçalho), ou seja lista cheia
}

int LSeq::getTamanho() 
{
    return qndEle;
}

int LSeq::getElemento(int posicao) 
{
    if (posicao < 0 || posicao > qndEle) {
        cout << "Posicao invalidaa." << endl;
        return 0;
    }
    return elementos[posicao];
}

void LSeq::modificarElemento(int posicao, int novoValor) 
{
    if (posicao < 0 || posicao >= qndEle) {
        cout << "Posicao invalida." << endl;
        return;
    }
    elementos[posicao] = novoValor;
}

void LSeq::inserirElemento(int posicao, int valor) 
{
    if (estaCheia())  //Vejo se a lista já ta cheia
    {
        cout << "A lista esta cheia." << endl;
        return;
    }
    if (posicao < 0 || posicao > qndEle + 1) //Garanto que não vai estrapolar o limite 
    {
        cout << "Posicao invalida." << endl;
        return;
    }
    for (int i = qndEle; i >= posicao; i--) {
        elementos[i+1] = elementos[i];
    }
    elementos[posicao] = valor;
    cout << "Valor: " << valor << " inserido na posição: " << posicao << endl;
    qndEle++;
}

void LSeq::retirarElemento(int posicao) 
{
    if (estaVazia()) {
        cout << "A lista esta vazia." << endl;
        return;
    }
    if (posicao < 0 || posicao > qndEle) {
        cout << "Posicao invalida." << endl;
        return;
    }
    for (int i = posicao + 1; i <= qndEle; i++) {
        elementos[i - 1] = elementos[i];
    }
    qndEle--;
}

void LSeq ::imprimirLista()
{
    for (int i = 0; i < qndEle; i++)
    {
        cout << i + 1 << ". " << getElemento(i + 1) << endl;
    }
    
}