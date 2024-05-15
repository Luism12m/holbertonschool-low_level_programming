#include <stdio.h>
#include <stdlib.h>
int main(void)
{
/**Inicializar el array*/
int notas [10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
/**Mostrar todas las notas con un bucle FOR*/
for (int i = 0; i < 10; i++) /**recorrer desde 0 hasta 10*/
{
  printf("La nota del %i alumno es: %i\n", i , notas[i]);
}
system("PAUSE");
}
