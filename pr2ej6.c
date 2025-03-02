#include <stdio.h>
#include <string.h>

void invertirCadena(char *cadena)  //Invierte una cadena de caracteres usando apuntadores
{
    char *inicio = cadena; // Apuntador al inicio de la cadena
    char *fin = inicio + strlen(cadena) - 1; // Apuntador al final de la cadena
    char temp; // Variable temporal para intercambio de caracteres

    
    while (inicio < fin) // Intercambia caracteres de los extremos hacia el centro
    {
        temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++; // Mueve el apuntador de inicio hacia la derecha
        fin--;    // Mueve el apuntador de fin hacia la izquierda
    }
}

int main() 
{
    char cadena[] = "Hola Mundo"; // Cadena a invertir
    printf("Cadena original: %s\n", cadena);
    
    invertirCadena(cadena); // Llamada a la función para invertir la cadena
    
    printf("Cadena invertida: %s\n", cadena);
    
    return 0;
}
