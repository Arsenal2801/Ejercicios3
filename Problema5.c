/*
Realice un programa en C que muestre que operaciones que se pueden hacer con los
apuntadores simples. Agregar una explicación con comentarios de C de lo que hace cada
operación de los apuntadores.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaración de variables
    float x, y, n = 3.24;
    char c;
    // Declaración de apuntadores
    float *p, *q, *r;

    // Un apuntador puede hacer referencia a varias variables, una la vez, en diferentes
    // momentos de mi programa
    p = &x;          // Asigno la dirección de memoria de x a p
    *p = 4547.65776; // Se asigna el valor 4547.65776 a la variable que hace referencia p
    printf("La valor de x es: %f\n", x);

    p = &y;         // Asigno la dirección de memoria de y a p
    *p = 58383.559; // Se asigna el valor 58383.559 a la variable que hace referencia p
    printf("La valor de y es: %f\n", y);

    // Varios apuntadores puede hacer referencia a la misma variable, en diferentes
    // momentos de mi programa
    q = &y;      // Asigno la dirección de memoria de y a q
    *q = 0.0005; // Se asigna el valor 0.0005 a la variable que hace referencia q
    printf("La valor de y es: %f\n", y);

    r = &y;       // Asigno la dirección de memoria de y a r
    *r = 10.0005; // Se asigna el valor 10.0005 a la variable que hace referencia r
    printf("La valor de y es: %f\n", y);

    r = &n; // Asigno la dirección de memoria de n a r
    *r = 1; // Se asigna el valor 1 a la variable que hace referencia r
    printf("La valor de n es: %f\n", n);

    q = r;  // El valor de un apuntador se lo puedo asignar a otro apuntador
    *q = 2; // Se asigna el valor 2 a la variable que hace referencia q
    printf("La valor de n es: %f\n", n);

    *p = *r; // El valor de la variable que hacer referencia un apuntador
             // se lo puedo asignar a otra variable a través de otro apuntador
    printf("La valor de y es: %f\n", y);

    r = &x; // Asigno la dirección de memoria de x a r

    *p = *q * *r + *p - *q; // Se asigna el valor de la operación a la variable que hace referencia p
    printf("La valor de x es: %f\n", x);
    printf("La valor de y es: %f\n", y);
    printf("La valor de n es: %f\n", n);

    // Estas dos operaciones se refieren a un concepto conocido como aritmetica de apuntadores
    p = &x;     // Asigno la dirección de memoria de x a p
    p = p + 80; // Esto es peligroso

    p = p - 80; // Esto es peligroso

    return 1;
}