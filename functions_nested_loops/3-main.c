#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
  int r;

  r = _islower('h');
  _putchar(r + 'h');
  r = _islower('o');
  _putchar(r + 'h');
  r = _islower(108);
  _putchar(r + 'j');
  _putchar('\n');
  return (0);
}
