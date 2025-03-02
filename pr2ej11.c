#include <stdio.h>// 11. Buscar en un Arreglo

// Función que busca un valor en el arreglo y devuelve un apuntador a su posición, o NULL si no lo encuentra
int *buscarElemento(int *arr, int tamaño, int valor) 
{
    for (int i = 0; i < tamaño; i++) // Recorre cada elemento del arreglo
    { 
        if (*(arr + i) == valor) // Si encuentra el valor, retorna el apuntador a ese elemento
        { 
            return (arr + i);
        }
    }
    return NULL; // Retorna NULL si el valor no está en el arreglo
}

int main() 
{
    int arr[] = {10, 20, 30, 40, 50}; // Arreglo de enteros
    int tamaño = sizeof(arr) / sizeof(arr[0]); // Calcula el número de elementos
    int valor; // Valor a buscar

    printf("Ingrese el número que desea buscar: ");    // Solicita al usuario el número a buscar
    scanf("%d", &valor);

    int *resultado = buscarElemento(arr, tamaño, valor);// Llama a la función buscarElemento
    if (resultado != NULL)  // Verifica si el valor fue encontrado o no
    {
        printf("El número %d se encuentra en la dirección de memoria: %p\n", valor, (void *)resultado);
    } 
    else 
    {
        printf("El número %d no está en el arreglo.\n", valor);
    }

    return 0;
}