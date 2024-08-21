#include "main.h"
/**
 * void print_alphabet - entry point
 *
 * Description: This function prints the alphabet, in lowercase
 *
 * Return: void
*/
void print_alphabet(void)
{
int i = 0;
for (i = 0; i < 26; i++)
{
_putchar(97 + i);
}
_putchar('\n');
}
