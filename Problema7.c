/*
Dado un arreglo de 50 letras aleatorias (mayúsculas y minúsculas), encontrar y contabilizar las veces que aparece un carácter solicitado al usuario.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declaración de variables
    char arreglo[50], c;
    int i, contador = 0;

    // Inicialización del generador de números aleatorios
    srand(time(NULL));

    // Generación de los 50 caracteres aleatorios
    for (i = 0; i < 50; i++)
    {
        // Generación de números aleatorios entre 65 y 122
        arreglo[i] = rand() % 58 + 65;
        printf("%c ", arreglo[i]);
    }

    // Solicitar al usuario un caracter
    printf("\n Favor de ingresar un caracter: ");
    scanf("%c", &c);

    // Contabilización de las veces que aparece el caracter
    for (i = 0; i < 50; i++)
    {
        // Verifico si el caracter es igual al caracter ingresado por el usuario
        if (arreglo[i] == c || arreglo[i] == c + 32 || arreglo[i] == c - 32)
        {
            // Si es igual, incremento el contador
            contador++;
        }
    }

    printf("El caracter %c aparece %d veces en el arreglo", c, contador);

    return 1;
}