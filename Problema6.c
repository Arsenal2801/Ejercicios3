/*
Realice un programa en C que muestre que operaciones que no se pueden hacer con los
apuntadores simples. Agregar una explicación con comentarios de C de ¿por qué no esta
permitida esa operación con los apuntadores?
*/

include<stdio.h>
#include <stdlib.h>

    int main()
{
    // Declaración de variables
    float x=0, y=0, n = 3.24;
    char c;
    // Declaración de apuntadores
    float *p, *q;

    p = &c; // Un apuntador no puede hacer referencia a variables que no son de su mismo tipo de dato

    *p = 4547.65776; // No lo puedo hacer porque p no hace referencia a una variable de tipo primitivo

    printf("El valor de p es: %p\n", p);
    printf("La DM de x es: %p\n", &x);
    printf("La DM de y es: %p\n", &y);
    printf("La DM de n es: %p\n", &n);

    *p = 58383.559; // No lo puedo hacer porque p no hace referencia a una variable de tipo primitivo
    p = &c; // Un apuntador no puede hacer referencia a variables distintas de su tipo de dato
    p = &x; // p hace referencia a la DM de x

    *p = &y; // De forma indirecta no se le puede asignar una DM a una variable

    p = x;     // A un apuntador no se le puede asignar el valor de una variable
    p = 40.02; // A un apuntador no se le puede asignar valores primitivos

    p = &y; // p hace referencia a la DM de y
    x = p; // No le puedo asigar a una variable de tipo primitivo el valor de un apuntador

    x = &p; // No le puedo asigar a una variable de tipo primitivo el valor de una DM

    *x = *p; // x no es apuntador

    q = y; // q hace referencia a la DM de y
    p = &q; // p hace referencia a la DM de q

    q = &n; // q hace referencia a la DM de n
    p = *q;

    *p = q; // El apuntador no puede hacer referencia a una DM

    &p = &x; // No se le puede asignar una DM a un apuntador

    p = &x; // p hace referencia a la DM de x
    p = p * 1; // No se le puede multiplicar un apuntador porque no es un valor primitivo

    p = p / 1; // No se le puede dividir un apuntador porque no es un valor primitivo

    q = p % 6; // No se le puede sacar el residuo a un apuntador porque no es un valor primitivo

    p = p - 45.56; // No se le puede restar un apuntador porque no es un valor primitivo

    return 1;
}