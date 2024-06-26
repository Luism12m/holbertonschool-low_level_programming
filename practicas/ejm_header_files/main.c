//progrma principal

#include <stdio.h>
#include "main.h"


int main()
{
  float radio, base, altura;
  // Solicitar al usuario que ingrese el radio del circulo:
  printf("Ingrese el radio del circulo: ");
  scanf ("%f",&radio);
  


 // Solicitar al usuario que ingrese la base del rectangulo:
  
  printf("Ingrese la base del rectangulo: ");
  scanf ("%f",&base);

// Solicitar al usuario que ingrese la altura del rectangulo:
  
  printf("Ingrese la altura del rectangulo: ");
  scanf ("%f",&altura);

  // Calcular el area del circulo utilizando la funcion definida en area.h
  float areaCirculo = calcularAreaCirculo(radio);
  

  // Calcular el area del rectangulo utilizando la funcion definida en area.h
  float areaRectangulo = calcularAreaRectangulo(base,altura);

  //Mostrar el resultado del area del circulo en consola
  printf("El area del circulo es : %.2f\n",areaCirculo); 
  
  //Mostrar el resultado del area del rectangulo en consola
  printf("El area del rectangulo es : %.2f\n",areaRectangulo);

  return 0;
  


}
