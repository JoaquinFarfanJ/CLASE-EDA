#ifndef __LINKEDLIST_H__//DIRECTIVAS Al PRECOMPILADOR
#define __LINKEDLIST_H__//SI NO ESTA DEFINIDO NO VA PASAR

using namespace std;

template <typename T>
class LinkedList //Esta clase tiene un metodo
{
  class Node
  {
    private:
      T       m_data;//si esto fuera un auto no se puede hacer dentro de {}
      Node *m_pNext;
    public: //esta recibiendo 2 parametros
      Node(T data, Node *pNext = nullptr): m_data(data), m_pNext(pNext)
      {};
      //creamos el setpNext
      T             getData()                       {return m_data; }
      void          setpNext(Node *pNext)      { m_pNext = pNext;  }
      Node       *getPNext()                   {return m_pNext;  }

  //constructor
  //Este null lo agregamos porque al inicio no hay valores
  //inicializamos miembros la buena praxis es hacerlo arriba y no dentro de {}
  };
    private:
    Node *m_pHead = nullptr,*m_pTail = nullptr;
  size_t   m_size = 0;//se coloca el size aqui tambien
  public:
  void            insert_at_head(T elem);//el metodo
  void            insert_at_tail(T elem);//insertamos en la cabeza y cola
  T               PopHead();
  size_t        size() const  {  return m_size; }    //para reemplazar el valor del vector y entre otros
  bool empty()  const   {return size() == 0; }//el const es para evitar cambios
  
  ostream & print(ostream &os);
};




template <typename T> //se puede implementar afuera como dentro
void LinkedList<T>::insert_at_head(T elem) //el metodo
{
Node *pNew = new Node(elem, m_pHead);
  m_pHead = pNew;
  m_size++;
}


template <typename T> //se puede implementar afuera como dentro
void LinkedList<T>::insert_at_tail(T elem) //el metodo
{
  //Creamos el nuevo Nodo y tiene que estar con su dato el cual es elem porque recibe la T del parametro
  Node *pNew = new Node(elem); //el * es un objeto dinamico
  if(m_pTail)
  {m_pTail->setpNext(pNew); //Cuando tenemos un objeto utilizamos ., si utilizamos -> es para un puntero
  }
  m_pTail = pNew;
    
  if (!m_pHead)
  {m_pHead = pNew;  } //si es que esta vacia se 
  m_size++; //size aqui tambien
}

template <typename T>
T LinkedList<T>::PopHead()
{
  if(m_pHead)
  {
    Node *pNode = m_pHead;
    T data = pNode->getData();
    m_pHead = m_pHead->getPNext();
    delete pNode;
    m_size--;//size aqui tambien para ver el pop
    return data;
  }
  throw "Hola excepción";//el throw es lanzado y se llama a otra función. es un return pero de multiples niveles
  //como podemos retornar el valor si es que la lista esta vacia (un catch)
}

template <typename T>
ostream &LinkedList<T>::print(ostream &os) //& referencia significa no recibir una copia si no el mismo objeto
{
  Node *pNode = m_pHead;
  while(pNode)
  {
    os << pNode->getData() << " , "; //cout
    pNode = pNode->getPNext();
  }
  return os;
}

template <typename T>
class iterator //especio de capsula que al inicio apunta al head
{
  private:  //constructor 
  typename LinkedList<T>::Node *m_pNode;//llamamos al nodo de la clase list
  
  public:
 iterator(LinkedList<T>::Node *pNode)  : m_pNode(pNode)  {};
  bool operator==(iterator &iter)   { return m_pNode == iter.m_pNode; } //si mi nodo esta apuntando al iter entonces son iguales
  bool operator!=(iterator &iter)       { return m_pNode != iter.m_pNode; }
  T operator*()       { return m_pNode -> getData(); } //el * a la izquierda significa dame el contenido de ese puntero
  void operator++();  //para que vaya recorriendo al siguiente y sobrecargando

};

template <typename T>
void iterator<T>::operator++();
{
  m_pNode=  m_pNode->getPNext();
}
#endif

//paso 1 crear Nodo
//paso 2 crear la cola si es que hay
//poner el puntero
