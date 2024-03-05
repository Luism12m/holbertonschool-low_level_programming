#include <stdio.h>
/**
 *main - Punto de Entrada
 *
 *Return: Siempre 0 (finalizado)
 *
 */
int main(void)
{
int a;
long int b;
double c;
int d;
float e;

printf("Espacio Memoria de int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Espacio Memoria long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Espacio Memoria de double: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Epacio Memoria de int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Espacio Memoria de float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);


}
