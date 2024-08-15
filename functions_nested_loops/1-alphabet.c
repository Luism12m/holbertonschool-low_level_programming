#include "main.h"
/**
 * main - print alphabet lowercase
 * 
 * 
 *
 * Return: always 0.
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
