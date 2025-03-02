#include <stdio.h>// 9. Suma con Apuntadores

int sumaArreglo(int *arr, int tamaño) // Función que recibe un apuntador a un arreglo de enteros y su tamaño, y calcula la suma de sus elementos
{
    int suma = 0; // Inicializa la suma en 0
    for (int i = 0; i < tamaño; i++) // Itera sobre cada elemento del arreglo
    { 
        suma += *(arr + i); // Accede al valor mediante aritmética de apuntadores y lo suma
    }
    return suma; // Retorna el resultado de la suma
}

int main() 
{
    int numeros[] = {1, 2, 3, 4, 5}; // Define un arreglo de enteros con 5 elementos
    int tamaño = sizeof(numeros) / sizeof(numeros[0]); // Calcula el tamaño del arreglo (número de elementos)
    int resultado = sumaArreglo(numeros, tamaño);  // Llama a la función sumaArreglo pasando el arreglo y su tamaño

    printf("La suma de los elementos del arreglo es: %d\n", resultado); // Imprime el resultado de la suma
    return 0; 
}