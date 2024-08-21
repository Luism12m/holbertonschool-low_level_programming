#include "main.h"
/**
 * _islower - Check if a character is a lowercase letter.
 * @c: The character to be checked.
 * Description: This function prints checks for lowercase character
 *
 * Return: 0 lowercase , Return: 1 otherwise
*/


int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
