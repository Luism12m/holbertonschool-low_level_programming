#include <stdio.h>
#include <stdlib.h>
/*#include <string.h>*/

int main (void)
{
  int n;
  long *ar;

  n=100;
  ar= malloc(n * sizeof(long));
  ar [0] = '50,10';
  ar [1] = 'I';
  ar [2] = 'P';
  ar [3] = 'A';
  ar [4] = '\0';
  printf ("%s\n",ar); /*imprime zipa*/
  /* free (ar);*/
  return (0);
}
