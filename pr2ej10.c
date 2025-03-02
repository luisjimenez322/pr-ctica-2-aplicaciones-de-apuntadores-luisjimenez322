#include <stdio.h> // 10. Ordenamiento con Apuntadores (Burbuja)

void ordenarBurbuja(int *arr, int tamaño)// Función que ordena un arreglo usando el método de burbuja con apuntadores
{
    int temp; // Variable temporal para el intercambio
    for (int i = 0; i < tamaño - 1; i++) // Bucle externo que controla las pasadas
    { 
        for (int j = 0; j < tamaño - i - 1; j++) // Bucle interno para comparar elementos adyacentes
        { 
            if (*(arr + j) > *(arr + j + 1)) // Si el elemento actual es mayor que el siguiente, se intercambian
            {
                temp = *(arr + j); // Guarda el valor del elemento actual en temp
                *(arr + j) = *(arr + j + 1); // Mueve el siguiente elemento a la posición actual
                *(arr + j + 1) = temp; // Coloca el valor temporal (el original) en la posición siguiente
            }
        }
    }
}

int main() 
{
    int arr[] = {34, 12, 56, 78, 23}; // Arreglo desordenado
    int tamaño = sizeof(arr) / sizeof(arr[0]); // Calcula el número de elementos del arreglo

   
    ordenarBurbuja(arr, tamaño); // Llama a la función para ordenar el arreglo
    printf("Arreglo ordenado: ");// Imprime el arreglo ordenado
    for (int i = 0; i < tamaño; i++) 
    {
        printf("%d ", *(arr + i)); // Accede a cada elemento mediante aritmética de apuntadores
    }
    printf("\n");

    return 0; 
}