#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
  int numero = 20;
  int *puntero = &numero;
  printf("Valor del numero es : %d\n",numero);
  printf("Valor del numero a traves del puntero es : %p\n",(void*)puntero);
  return (0);
}
