#include "main.h"
/**
 * main - print _putchar
 * @char
 * @i
 *
 * Return: always 0.
 */

int main(void)
{
char *text = "_putchar\n";
int i = 0;
for (i = 0; text[i]; i++)
{
_putchar(text[i]);
}
return (0);
}
