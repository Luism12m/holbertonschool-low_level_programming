#ifndef _PRINTF_HEADER_H_
#define _PRINTF_HEADER_H_
/*Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/*structs*/

/**
 * 
 * struct char_function_struct - recives a character and a pointer to function
 * @char: the character
 * @function: the pointer to function
 *
 * Description: char_function_struct - recives a character and a pointer
 * to function which recives a variadic list, a string and an pointer to
 * an integer
 */
typedef struct char_function_struct
{
  char character;
  void (*function)(va_list arguments, char *arrayBuffer, int *arrayBuff_len);
} char_funtion_struct_t;
/*Prototypes*/

int _strlen(char *s);
int _printf(const char *format);
void print_string(va_list arguments, char *arrayBuffer, int *arrayBuff_len);
void print_char(va_list arguments, char *arrayBuffer, int *arrayBuff_len);
void print_digitinteger(va_list arguments, char *arrayBuffer, int *arrayBuff_len);
#endif
