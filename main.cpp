#include <iostream>
#include "type.h"
#include "stack2.h"
#include "queue.h"
#include "linkedlist.h"
#include "operators.h"

using namespace std;

const int nElem = 20; //numero de elementos

int main()
{
  TX vect[nElem] = {5,30,40, 7,80, 90, 3,25, 54,47,3,6,12,8,25,27,19,83,9,0};//mayor flexibilidad por el TX en tipos
 /*Queue<TX> queue;
 for(auto x=0; x<10; x++){
   queue.insert(vect[x]);
   cout << queue <<endl;
 }
 for(auto x=0; x<10; x++)
 {
   auto dato = queue.pop();
   cout<<"dato removido: "<< dato <<endl;
   cout << queue <<endl;
 }*/
 
 
 
 
  int z=5;
  LinkedList<TX> mylist;//recibira algo de tipo TX
  for(auto x=0; x<10; x++)//primero 10 primeros por cola
  {   mylist.insert_at_tail(vect[x]);//insertamos en la cola
      cout << mylist<<" ... "<<z<<endl;//parametro cout para cualquier string de salida
      cout <<endl;//un enter para la impresión
  }

  for(auto x=10; x< nElem; x++)//Colocamos en la cabeza de 10 a 20
  {   mylist.insert_at_head(vect[x]);//insertamos en la head
      cout << mylist <<endl;//parametro cout para cualquier string de salida
  }


 iterator<TX> iter = mylist.begin();
  for(; iter != mylist.end() ; iter++)
  {
      cout << *iter << endl;
  }
    
    /*while( !mylist.empty() )
  {  
    auto dato = mylist.PopHead();//Como sabemos que va retornar PopHead() podemos poner un tipo de dato auto
      cout << "dato removido: " << dato << endl;
      cout << mylist<<endl;//el endl es imprimir + enter

  }*/

  try//las lineas que tengan instrucciones las atrapara y mandara esto
  {
    auto dato = mylist.PopHead();
    cout <<"abc" << endl;
  }
  catch(int n)//puedes tomar control del problema y despues decides si sigues o no
  //el catch puede tener varios catch
  // catch (double n) atrapa doubles
  //catch ( ... ) atrapa lo que sea 
  {
    cout << "Excepcion atrapada ... puedes continuar !!!"<<endl;
  }
  catch(double n) 
  {
    cout << "Excepcion de doubles atrapada ... puedes continuar !!!" <<endl;
  } 
  catch(exception n) 
  {
    cout << "Excepcion generiuca atrapada ... puedes continuar !!!" <<endl;
  }  
  catch( ... )
  {
      cout << "todo lo demas atrapada ... puedes continuar !!!" <<endl;
  }
  cout << "Finalizando el programa ... "<<endl;
  
  char c = 'A';






  /*Stack<T1> stack;
  auto w = "hola"; //auto z; no tiene un = para definir la variable 
  auto x = 0; //Permite que el compilador detecte automaticamente que valor ingresara
  for( x = 0 ; x < nElem ; x++ )
     stack.push(x+x);
  
  for( x = 0 ; x < nElem ; x++ )
  {
    auto y = stack.pop(); //detectar el tipo de dato poner
    cout << y << endl; //imprimir
  }
  */
}
