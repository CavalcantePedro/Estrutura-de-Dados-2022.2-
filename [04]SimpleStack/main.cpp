#include <iostream>
#include "Stack.h"

using std::cout;
using std::endl;

int main()
{
    Stack pilha;
    pilha = Stack();
    
    if (pilha.empty())
    {
        cout<<"Pilha iniciamente vazia"<<endl;
    }
    cout<<"-----------------"<<endl;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    pilha.push(40);

    pilha.show();
    cout<<"O topo da pilha é: "<<pilha.top()<<endl;
    cout<<"O tamanho da pilha é: "<<pilha.size()<<endl;
    cout<<"-----------------"<<endl;
    pilha.pop();
    pilha.show();
    cout<<"O topo da pilha é: "<<pilha.top()<<endl;
    cout<<"O tamanho da pilha é: "<<pilha.size()<<endl;
    cout<<"-----------------"<<endl;


    return 0;
}