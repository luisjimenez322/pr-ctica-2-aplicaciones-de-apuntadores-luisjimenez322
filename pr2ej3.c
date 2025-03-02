#include<stdio.h> //Se imprimen 3 valores de un arreglo a través de aritmética de direcciones.
int main () 
{
  int *ap;
  int nums[3][3] = {{98,76,66}, {53,49,34}, {21,17,4}};
  ap = nums;
  for (int i = 0; i < 9 ; i++) // Recorremos el arreglo usando solo un ciclo for
  {
    if ((i%3)==0)
      printf("\n");
    printf("%x\t",(ap+i));  //imprime el valor de la dirección del elemento mostrado usando el ap e i
  }

  for (int i = 0; i < 3 ; i++)
  {
    for(int j = 0: j< 3; j++)
    {
      printf("%x\t",(ap+indice)); //imprime el valor de la dirección del elemento mostrado usando el ap, i y j
    }
    printf("\n");
  }
  return 0;
}