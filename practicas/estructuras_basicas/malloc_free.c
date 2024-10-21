#include <stdio.h>
#include <stdlib.h>


int main (void)
{
  int n = 5; /*defino cantidad de enteros*/
  int *array;
  int i = 0;
  size_t memoria_usada;
 
  array = malloc(n * sizeof(int));/*asigno memoria para la cantidad de enteros*/

  if(array == NULL)
    {
      printf("Error al asignar memoria \n");
      return (1); /*sal1ir del programa si hay error al asignar memoria*/
    }

  memoria_usada = n * sizeof(n);
  printf("cantidad de memoria utilizada en bytes: %ld bytes\n",memoria_usada);/*calculo la cantidad de memoria utilizada en mi programa*/
  for(i = 0; i < n; i++)
    {
      array [i] = (i + 1) * 1; /*asigno valores por medio de un for a mi arreglo*/
      printf("%d \n", array[i]); /*imprimo los valores*/
    }

  free(array); /*libero la memoria*/
  return (0);
  
}
