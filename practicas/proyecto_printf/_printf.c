#include "printf_header.h"

/**
 * _printf - recives a string and print the string with the
 * desire modifications (depend of the arguments the user put in
 * the variadic list): '%s' to print a string, '%c' to print 
 * a character, '%d' to print a digit and '%i' to print an
 * integer
 * @format: the string to be modify
 *
 * Return: the length of the string
 */

int _printf(const char *format, ...)
{
  int i = 0, j = 0, k = 0;
  char *arrayBuffer = '\0', *arrayBuff_len = '\0';
  int format_len = 0, argument_len = 0;
  char_function_struct_t pointer_strct[] = {
    {'c', print_char},
    {'s', print_string},
    {'d', print_digitinteger},
    {'i', print_digitinteger},
    {'\0', NULL}
  };

  va_list arguments;

  if (format == NULL)
    return (0);

  va_start(arguments, format);

  format_len = _strlen(format);

  for (i = 0; arrayBuffer[i]; i++)
    {
      if (arrayBuffer[i] == '%')
	{
	  arrayBuffer[*arrayBuff_len] = format[i];
	}

      for (j = 0; pointer[j].character; j++)
	{
	  if (format[i] && format[i] == pointer_strct[j].character)
	    {
	      pointer_strct[j].function(arguments, arrayBuffer, arrayBuff_len);
	      break;
	    }
	}
    }
  va_end(arguments);

  write(1, arrayBuffer, arrayBuff_len);

  return (arrayBuff_len);
}
