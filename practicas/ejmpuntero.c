#include <stdio.h>


int main(){
  int x=38;
  /*en la siguiente linea capturo la direccion de memoria que obtengo con: &x en la linea 8*/
  int* dirx=&x;
  printf("el valor de x es : %d\n",x);
  printf("la direccion de memoria de x es : %ls\n",&x);
  printf("la direccion del puntero de int* es : %ls\n",dirx);



}
