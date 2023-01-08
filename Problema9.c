/*
Dado un arreglo de 100 números enteros aleatorios, implemente el algoritmo de búsqueda
secuencial con aritmética de apuntadores.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declaración de variables
    int arreglo[100], i, numero, *p;
    int encontrado = 0;

    // Inicialización del generador de números aleatorios
    srand(time(NULL));

    // Generación de los 100 números aleatorios
    for (i = 0; i < 100; i++)
    {
        // Generación de números aleatorios entre 1 y 100
        arreglo[i] = rand() % 100 + 1;
        printf("%d ", arreglo[i]);
    }

    // Solicitar al usuario un número
    printf("\n Favor de ingresar un numero: ");
    scanf("%d", &numero);

    // Inicialización del apuntador
    p = arreglo;

    // Búsqueda secuencial con aritmética de apuntadores
    for (i = 0; i < 100; i++)
    {
        // Verifico si el número es igual al número ingresado por el usuario
        if (*p == numero)
        {
            // Si es igual, cambio el valor de la variable encontrado
            encontrado = 1;
            break;
        }
        // Incremento el apuntador
        p++;
    }

    // Imprimir el resultado de la búsqueda secuencial con aritmética de apuntadores
    // Si el número se encuentra en el arreglo, imprimir la posición en la que se encuentra
    if (encontrado == 1)
    {
        // Imprimir la posición en la que se encuentra el número
        printf("El numero %d se encuentra en la posicion %d del arreglo", numero, i);
    }
    // Si el número no se encuentra en el arreglo, imprimir un mensaje indicando que no se encuentra
    else
    {
        // Imprimir un mensaje indicando que el número no se encuentra en el arreglo
        printf("El numero %d no se encuentra en el arreglo", numero);
    }

    return 1;
}