#include <stdlib.h>
#include "No.h"

No::No ()
{
      setDado(0);
      setProx(NULL);
}

No::~No(){}

int No::getDado()
{
    return dado;
}

No *No::getProx()
{
    return prox;
}

void No::setDado(int d)
{
    dado = d;
}

void No::setProx(No *p)
{
    *prox = *p;
}