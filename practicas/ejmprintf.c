#include <stdio.h>

int main()
{
  /*usando banderas (espacios,mas,menos)*/
  int age;
  age = 25;
  printf ( "I am %+05d years old\n",age );
  

  /*imprimir varios argumentos o variables*/
  int x = 5, y = 10;
  printf("x es %dy y es %d\n", x, y);


  /*La opcion %s nos permite imprimir una cadena dentro de una cadena*/
  int year =11;
  char *grade;
  if (year == 11 ) grade = "junior";
  printf ( "%s is a %s\n", "Fred", grade );
  

 
    
  
}
