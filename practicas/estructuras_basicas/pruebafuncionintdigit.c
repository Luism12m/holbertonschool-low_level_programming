#include <stdio.h>
#include <stdarg.h>

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

void my_printf(const char *format, ...) {
  char buffer[100];
  int length = 0;
  va_list args;

  va_start(args, format);

  for (const char *p = format; *p != '\0'; p++) {
    if (*p == '%') {
      p++;
      if (*p == 'd') {
	print_digitinteger(args, buffer, &length);
      }
    } else {
      buffer[length++] = *p;
    }
  }
  buffer[length] = '\0'; 

  printf("%s\n", buffer);
  va_end(args);
}

int main() {
  my_printf("El numero es  : %d", -321);
    return (0);
}
