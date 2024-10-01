#include "main.h"

/**
* _isdigit - revisar digito del 0-9
* @c: Value being evaluated
*
* Return: 1 if digit, otherwise 0
*/
int _isdigit(int c)
{
  if (c >= '0' && c < 'a')
    return (1);
  else
    return (0);
}
