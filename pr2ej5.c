#include <stdio.h>

void pasarValor(int);      // Función que recibe un entero por valor (no modifica el original)
void pasarReferencia(int *); // Función que recibe un puntero a entero (modifica el original)
int main()
{
    int nums[] = {55, 44, 33, 22, 11}; // Arreglo de enteros
    int *ap = nums; // Apuntador que apunta al primer elemento del arreglo
    
    printf("Pasar por valor (antes): %d\n", *ap);// Paso por valor: se pasa una copia del primer elemento del arreglo
    pasarValor(*ap);
    printf("Pasar por valor (después, en main): %d\n", *ap); // El valor original no cambia

    // Paso por referencia: se pasa la dirección de memoria del primer elemento
    printf("\nPasar por referencia (antes): %d\n", *ap);
    pasarReferencia(ap);
    printf("Pasar por referencia (después, en main): %d\n", *ap); // El valor original cambia

    return 0;
}

// Función que recibe un entero por valor (trabaja con una copia, no afecta el original)
void pasarValor(int equis)
{
    printf("Dentro de pasarValor (antes): %d\n", equis);
    equis = 128; // Se modifica la copia, pero no afecta el valor original
    printf("Dentro de pasarValor (después): %d\n", equis);
}

// Función que recibe un puntero a entero (puede modificar el valor original)
void pasarReferencia(int *equis)
{
    printf("Dentro de pasarReferencia (antes): %d\n", *equis);
    *equis = 128; // Se modifica el valor en la dirección de memoria apuntada
    printf("Dentro de pasarReferencia (después): %d\n", *equis);
  return 0;
}
