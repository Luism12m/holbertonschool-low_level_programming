#include "main.h"

/**
* _isdigit - revisar digito de 0 a 9
* @c: Value being evaluated
*
* Return: 1 si es digito, de lo contrario 0
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
