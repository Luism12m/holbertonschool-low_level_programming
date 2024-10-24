#include "printf_header.h"

/**
 * _strlen - counts the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
  int i = 0;

  while (s[i])
    i++;
  return (i);
}
