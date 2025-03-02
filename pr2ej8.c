#include <stdio.h> // Intercambio de Valores

void intercambiar(int *a, int *b) // Función que intercambia dos valores utilizando apuntadores
{
    int temp = *a; // Almacena el valor de a en una variable temporal
    *a = *b;       // Asigna el valor de b a a
    *b = temp;     // Asigna el valor temporal (original de a) a b
}
int main()
{
    int arr[] = {5, 10}; // Arreglo con dos valores a intercambiar

    printf("Valores antes del intercambio: a = %d, b = %d\n", arr[0], arr[1]);

    // Llamamos a la función pasando las direcciones de los elementos del arreglo
    intercambiar(&arr[0], &arr[1]);

    printf("Valores después del intercambio: a = %d, b = %d\n", arr[0], arr[1]);

    return 0; 
}