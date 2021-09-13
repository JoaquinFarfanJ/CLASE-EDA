//COLA DE BANCO
//Ingresan por un lado y son removidos por otro lado
//no puede ser un vector
//Una sugerencia listas anidadas
//solo se inserta datos por lado izquierdo y sale por la derecha
//lista flexible
#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream> //busca en un directorio en una libreria <>
#include "linkedlist.h" //busca en donde esta ubicado

using namespace std;

template <typename T>
class Queue //Creamos la clase Queue
{
  private:
    LinkedList<T> m_list;// lista enlazada
  public:
    Queue();
    void insert(T n);
    T pop();
    size_t  size() {  return m_list.size();} //size de la cola
    ostream &print(ostream &os); //metemos el pinrt en la clase
};
template <typename T>
Queue<T>::Queue()
{

}
template <typename T>
void Queue<T>::insert(T n)
{
  m_list.insert_at_tail(n);
}
template <typename T>
T Queue<T>:: pop()//insertamos el pop
{
  return m_list.PopHead();
}
template <typename T>
ostream &Queue<T>::print(ostream &os) //& referencia significa no recibir una copia si no el mismo objeto
{
  return m_list.print(os); //el print de la cola es su lista interna 
}
#endif