/*
 *	Metodos da minha classe.
 *	Methods of my class.
 */

#include "LSeq.h"
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

LSeq::LSeq() 
{
    //Lista inicia vazia. || Initially empty list.
    //Inicial com -1 devido ao index do array. || Initial with -1 due to array index.
    sizeOfList = -1;
}

bool LSeq::empty() 
{
    if(sizeOfList == -1)
    {
        return true;
    }
    else return false;
}

bool LSeq::full() 
{
    if (sizeOfList+1 == maxSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int LSeq::getSize() 
{
    return sizeOfList + 1;
}

int LSeq::getData(int position) 
{
    int var;
    if ((position > sizeOfList+1) || (position <= 0))
    {
        return -1;
    }
    var = data[position-1];
    return var;
}

int LSeq::getPosition(int data)
{
    for (int i = 0; i < sizeOfList+1; i++)
    {
        if(this->data[i]==data)
        {
            return (i+1);
        }
    }
    return -1;
}

void LSeq::modifyData(int position, int newData) 
{
    if ((position > sizeOfList+1) || (position <= 0))
    {
        cerr<<"Position invalid"<<endl;
    }
    else
    {
        data[position-1] = newData;
    }
}

void LSeq::insert(int position, int data) 
{
    if ((position > sizeOfList+2) || (position <= 0) )
    {
        cerr<<"Erro"<<endl;
    }
    else if (full() ==  true)
    {
        cerr<<"list full"<<endl;
    }
    else
    {
        for (int i = sizeOfList+1; i >= position; i--)
        {
            this->data[i] = this->data[i-1];
        }
        this->data[position-1]= data;
        sizeOfList++;
    }
}

void LSeq::remove(int position) 
{
    int var;
    if ((position > sizeOfList+1) || (position <= 0) )
    {
        cerr<<"Position invalid";
    }
    var = this->data[position-1];
    for (int i = position-1; i < sizeOfList; i++)
    {
        this->data[i]= this->data[i+1];
    }
    sizeOfList--;
}

void LSeq::showList()
{
    for (int i = 0; i < sizeOfList+1; i++)
    {
        cout << i + 1 << ". " << getData(i+1) << endl;
    }
    
}