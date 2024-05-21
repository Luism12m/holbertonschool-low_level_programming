#include <stdio.h>


/* PRIMER EJEMPLO DE FUNCIONES*/
void holamundo(); /*prototipado: declaro antes del main todas las funciones como esta  para este archivo*/

int main()  /* dentro del main se llama la funcion en este caso"hola mundo"*/

{
  holamundo();
  holamundo();
  holamundo();
  holamundo();

  
  return 0;
}

void holamundo()
{
  printf ("Hola queridos programadores \n");  /*esta es la funcion de este programa*/
}
