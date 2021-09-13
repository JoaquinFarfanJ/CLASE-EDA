//cuantos pasos demoro en encontrar un determinado elemento en una lista enlazada
//Esto entonces es que para N datos, se necesita N pasos
//Igual si queremos insertar
//como no hay puntero en la cola, se deben avanzar n pasos para eliminar un elemento 

//Si queremos concatenar 2 listas, nos demoraria n+n 
//Como tenemos en nuestra lista 1 un puntero en la cola, debemos apuntar en la cabeza de la otra lista seria un costo computacional de orden 1


//No se debe recorrer todo esto, 
//como se imprimiria una lista al reves
//la imprimiriamos mandando los elementos que estan en la cabeza a la cola de la otra, asi nos dara su ultimo elemento al inicio 

//Tambien otra forma podriamos mandarlo a un stack, con esto podriamos hacerlo con varios pop()


//Si no tenemos el puntero en la cola, necesitariamos hacer un costo de N veces.
//Si tenemos un puntero en la cola, no tendremos acceso al puntero previo 


//si tenemos un puntero a un elemento, si queremos borrarlo, sin comenzar por la cabeza por ejemplo 6 - 2 - 9 - 0 - 3 y apunta al 9

//podemos copiar el 0 o ,el 2 si tuvieramos acceso, si eliminamos el elemento 0, el elemento 9 tendria el valor de 0 porque se ha copiado en ese elemento los valores de 0.

//Eliminamos el 0 haciendo un puente y dejando el 9 con los valores copiados del 0

//necesitamos hacer un pull request

//¿Cuanto tiempo demora encontrar un elemento al inicio? ¿al final? ¿En cualquier posición?
//Al inicio solo 1 paso, al final N veces y en cualquier posición es N tambien 


//para insertar un elemento despues del primer nodo?
//Se agarra el primer nodo y se hace un puente

//Despues de cualquier nodo, su costo para hacerlo seria N veces porque tendriamos que dar N saltos para llegar a esa posición