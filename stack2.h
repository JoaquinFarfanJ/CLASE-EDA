#ifndef __STACK2_H__//DIRECTIVAS Al PRECOMPILADOR
#define __STACK2_H__//SI NO ESTA DEFINIDO NO VA PASAR
#include <iostream>
#include "linkedlist.h"

using namespace std;
template <typename T> //permite igualar los tipos de datos del vector
class Stack
{
  private:
    LinkedList<T> m_list;
  public:
    Stack() {}
    void push(T n)  { m_list.insert_at_head(n); }
    T pop()         { return m_list.PopHead();  }
};

#endif