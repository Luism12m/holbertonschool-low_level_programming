#include <stdio.h>
#include <stdlib.h>

#define int double

int main(void)
{
  int i;

  i = 5;
  printf ("sizeof(i) = %lu \n",sizeof(i));
  
  return (EXIT_SUCCESS);
}
