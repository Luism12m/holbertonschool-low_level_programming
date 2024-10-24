#include "printf_header.h"

void print_char(va_list arguments, char *arrayBuffer, int *arrayBuff_len)
{
  char c = va_arg(arguments, int);
  arrayBuffer[*arrayuff_len] = c;
  (*arrayuff_len)++;
}
