#include "main.h"
/**
 * _islower - entry point
 *
 * Description: This function prints checks for lowercase character
 *
 * Return: 0 lowercase
 * Return: 1 otherwise
*/


int _islower(int c)
{
  
    if (c >= 97 && c <= 122)
    {
      return (1);
    }
    return (0);
}
