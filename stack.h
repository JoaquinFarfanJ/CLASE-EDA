#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>
#include <vector>

using namespace std;
template <typename T> //permite igualar los tipos de datos del vector
class Stack
{
  private:
    int m_top;
    vector<T> m_vect;
  public:
    Stack();
    void push(T n);
    T pop();
};
template <typename T>
Stack<T>::Stack() //Se coloca T porque no es clase, es plantilla obligada a funcionar con parametro T
//esto es un constructor y no devuelve nada
{
  m_top = 0;
}
template <typename T>
void Stack<T>::push(T n)
{
  m_vect[m_top++] = n;
}
template <typename T> //Todos deben ser plantillas
T Stack<T>::pop() //esto no es un constructor
{
  if( m_top > 0 ) // Tiene elementos
    return m_vect[--m_top];
  // El Stack esta vacio ! que debo hacer?
  // TO DO: Alexander Zevallos
}

#endif
