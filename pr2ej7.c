// 7. Accediendo a la Memoria
#include <stdio.h>// Este programa imprime las direcciones de memoria de los elementos de un arreglo usando apuntadores.

int main() 
{
    int arr[5] = {10, 20, 30, 40, 50}; // Arreglo de enteros

    printf("Valores y direcciones de memoria del arreglo:\n");

    
    for (int i = 0; i < 5; i++) // Recorremos el arreglo con un apuntador e imprimimos la dirección de cada elemento
    {
        printf("arr[%d] = %d, Dirección: %p\n", i, arr[i], &arr[i]);
    }

    return 0;
}
