#include "printf_header.h"

/**
 * _string - concatenates and save a variadic list with a buffer
 *  and recives the length of the buffer
 * @arguments: the variadic list
 * @arrayBuffer: the buffer
 * @arrayBuff_len: the buffer's length
 *
 */

void print_string(va_list arguments, char *arrayBuffer, int *arrayBuff_len)
{
  int i = 0;
  char *argument = NULL;

  argument = va_arg(arguments, char *)

    for (i = 0; argument[i]; i++)
      {
	arrayBuffer[*arrayBuff_len] = argument[i];
	(*arrayBuff_len)++;
      }
}
