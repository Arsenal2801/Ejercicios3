/*
Dado un arreglo de 100 números enteros aleatorios, implemente el algoritmo del
ordenamiento burbuja con aritmética de apuntadores.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declaración de variables
    int arreglo[100], i, j, aux, *p, *q;
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

    // Inicialización de los apuntadores
    p = arreglo;
    q = arreglo + 1;

    // Ordenamiento burbuja con aritmética de apuntadores
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 99; j++)
        {
            // Verifico si el número es mayor al número siguiente
            if (*p > *q)
            {
                // Si es mayor, intercambio los valores
                aux = *p;
                *p = *q;
                *q = aux;
            }
            // Incremento los apuntadores
            p++;
            q++;
        }
        // Reinicio los apuntadores
        p = arreglo;
        q = arreglo + 1;
    }

    // Imprimir el arreglo ordenado
    printf("\n");
    for (i = 0; i < 100; i++)
    {
        printf("%d ", arreglo[i]);
    }

    return 1;
}