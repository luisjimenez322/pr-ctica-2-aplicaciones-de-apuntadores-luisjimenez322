#include <stdio.h> //Este programa crea un apuntador de tipo entero que apunta al inicio de un arreglo.
int main() 
{
  short arr[5] = {1, 2, 3, 4, 5}, *apArr;
  apArr = &arr[0];

  printf("Dirección del arreglo en la primera posición: %p\n", &arr[0]);// imprime la dirección de memoria del arreglo en la posición [0]
  printf("Dirección del arreglo: %p\n", &arr); // imprime la dirección de memoria del arreglo (el nombre del arreglo es un apuntador)
  printf("Dirección almacenada en el apuntador: %p\n", apArr); // imprime la dirección de memoria almacenada en el apuntador apArr

  printf("*apArr = %i\n", *apArr);
  printf("*(apArr+1) = %i\n", *(apArr + 1)); // suma una localidad al inicio del arreglo e imprime su valor
  printf("*(apArr+2) = %i\n", *(apArr + 2));

  printf("Valor apuntado por apArr: %i\n", *apArr);  // Línea de código para mostrar el valor apuntado por apArr

  printf("Recorriendo el arreglo usando un apuntador:\n");
  for (int i = 0; i < 5; i++) 
  {
    printf("Elemento %d: %d\n", i, *(apArr + i));
  }

  apArr = &arr[2];// Modifica apArr para que apunte al tercer elemento

  printf("\nApuntador modificado para apuntar al tercer elemento:\n");
  printf("Valor apuntado por apArr ahora: %i\n", *apArr);

  printf("Valor en índice -2 desde apArr: %i\n", *(apArr - 2));   // Accede al elemento con índice -2 usando el apuntador

  printf("\nRecorriendo el arreglo desde el nuevo apuntador:\n");// Ajusta el ciclo for para recorrer completo el arreglo desde apArr
  for (int i = -2; i < 5 - 2; i++)  // Se ajusta para recorrer correctamente
  { 
    printf("Elemento %d: %d\n", i + 2, *(apArr + i));
  }

  return 0;
}
