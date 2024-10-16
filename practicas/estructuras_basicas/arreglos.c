#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
  int array [5] = {1,2,3,4,5};
  int i = 0;
  for(i = 0; i < 5; i++)
    {
      printf("Elemento : %d : %d\n",i,array[i]);
    }
  return (0);
}
