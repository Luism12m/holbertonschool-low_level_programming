#include <stdio.h>

/**
 *struct Persona - Estructura para almacenar datos de una persona
 * @nombre: Nombre de la Pertsona
 *@edad : Edad de la Persona
 */
struct Persona
{
  char nombre[50];
  int edad;
};

/**
 *main - Punto de entrada del programa
 *
 *Return : Always 0 (Success)
 */

int main(void)
  {
    struct Persona persona;
    printf("Ingrese el nombre de la persona: \n");
    scanf("%s",persona.nombre);
    printf("Ingrese edad de la persona: \n");
    scanf("%d",&persona.edad);

    printf("Nombre : %s, Edad : %d\n", persona.nombre,persona.edad);

    return(0);
  }
