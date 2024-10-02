#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int i;
  char *s;

  s = " 0 ";
  i = atoi(s);     /* i = 0 */

  printf("i = %d\n",i);
  return(1);
}
/*******************  Output should be similar to:  ***************
 
i = 0
*/




