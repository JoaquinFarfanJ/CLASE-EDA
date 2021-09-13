#ifndef __OPERATORS_H__  
#define __OPERATORS_H__ 

#include <iostream>
#include "linkedlist.h"
#include "queue.h"

using namespace std;


template <typename T>
ostream &operator<<(ostream &os, LinkedList<T> &container)
{
    return container.print(os);
}

template <typename T>
ostream &operator<<(ostream &os, Queue<T> &container)//returna un contenedor
//parametro del template y pasa como referencia
{
    return container.print(os);//&os pasamos la direción del objeto y si no tiene & recibimos el objeto
}
#endif 