#include <stdio.h>
#include <ctype.h>

int main()
{
  char cadena[] = ";0sR(h&R1/";
  int i;

  for(i = 0; cadena[i]; i++)
    printf("%c, %d\n", cadena[i], isalpha(cadena[i]));

  return 0;
}
