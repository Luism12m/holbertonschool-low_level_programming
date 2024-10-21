#include "main.h"
/**
 *swap_int - cambia el valor de dos enteros
 *@a:puntero al primer valor
 *@b: puntero al segundo valor
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
