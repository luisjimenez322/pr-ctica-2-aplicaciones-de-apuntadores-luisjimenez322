#include <stdio.h>
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Apuntador al inicio del arreglo

    printf("Valores originales:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", *(ptr + i)); // Imprimir los valores usando el apuntador
    }

    // Duplicar cada elemento del arreglo usando el apuntador
    for (int i = 0; i < 5; i++) 
    {
        *(ptr + i) *= 2; // Duplicar el valor de cada elemento
    }

    printf("\n\nValores modificados:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", *(ptr + i)); // Imprimir los valores modificados usando el apuntador
    }

    return 0;
}
