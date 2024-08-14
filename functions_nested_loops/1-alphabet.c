#include "main.h"
/**
 * main - print alphabet lowercase
 * @alphabet
 * @i
 *
 * Return: always 0.
 */
int main (void)
{
  char *alphabet = "abcdefghijklmnopqrstuvwxyz\n";
  int i = 0;
  for (i = 0; alphabet[i]; i++)
    {
      _putchar(alphabet[i]);
    }
	 return (0);
}
