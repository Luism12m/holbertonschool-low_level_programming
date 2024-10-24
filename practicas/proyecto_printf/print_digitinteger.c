#include <stdio.h>
#include <stdlib.h>

void print_digitinteger(va_list arguments, char *arrayBuffer, int *arrayBuff_len) {
  int num = va_arg(arguments, int);
  char temp[12];
  int i = 0;

  if (num < 0) {
    arrayBuffer[(*arrayBuff_len)++] = '-';
    num = -num;
  }

  do {
    temp[i++] = (num % 10) + '0';
    num /= 10;
  } while (num > 0);

  for (int j = i - 1; j >= 0; j--) {
    arrayBuffer[(*arrayBuff_len)++] = temp[j];
  }
}
