//OPERACION DE MULTIPLICACION
 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define col1 3
#define fil1 3
#define col2 3
#define fil2 3

int main()
{
  int **A;
  int **B;
  //int C[fil1][col2];
  int **C;
  int i, j, k;


  A = (int **)malloc( sizeof(int*) * fil1 );

  for( i = 0; i < fil1; i++ )
  {
    A[i] = (int*)malloc( sizeof(int)*col1 ); 
  }

  B = (int **)malloc( sizeof(int*) * fil2 );

  for( i = 0; i < fil2; i++ )
  {
    B[i] = (int*)malloc( sizeof(int)*col2 ); 
  }

  C = (int **)malloc( sizeof(int*) * fil1 );

  for( i = 0; i < fil1; i++ )
  {
    C[i] = (int*)malloc( sizeof(int)*col2 ); 
  }

  srand(time(NULL));
  for( j = 0; j < fil1; j++ ) //Recorrer los arreglos unidimensionales
  {
    for( k = 0; k < col1; k++ )//Recorrer los elementos de cada arreglo unidimensional
    {
      A[j][k] = rand()%5;  //Acción: de asignar datos al arr2D
    }
  }

  for( j = 0; j < fil2; j++ ) //Recorrer los arreglos unidimensionales
  {
    for( k = 0; k < col2; k++ )//Recorrer los elementos de cada arreglo unidimensional
    {
      B[j][k] = rand()%5;  //Acción: de asignar datos al arr2D
    }
  }

  for( j = 0; j < fil1; j++ ) //Recorrer los arreglos unidimensionales
  {
    for( k = 0; k < col1; k++ )//Recorrer los elementos de cada arreglo unidimensional
    {
      printf("(%d,%d)%d ", j, k, A[j][k]);  //Accion: Mostrar los datos del arreglo 2D

    }
    printf("\n");
  }  

  printf("\n");
  for( j = 0; j < fil2; j++ ) //Recorrer los arreglos unidimensionales
  {
    for( k = 0; k < col2; k++ )//Recorrer los elementos de cada arreglo unidimensional
    {
      printf("(%d,%d)%d ", j, k, B[j][k]);  //Accion: Mostrar los datos del arreglo 2D

    }
    printf("\n");
  }  
  printf("\n\n");

  //Algoritmo de multiplicaciónde matrices
  for (i=0;i<fil1;i++)
  {
    for (j=0;j<col2;j++)
    { 
      C[i][j]=0;
      for (k=0;k<fil2;k++)
      {
         C[i][j]=C[i][j]+A[i][k]*B[k][j];
      }
    }
  }

  for( j = 0; j < fil1; j++ ) //Recorrer los arreglos unidimensionales
  {
    for( k = 0; k < col2; k++ )//Recorrer los elementos de cada arreglo unidimensional
    {
      printf("(%d,%d)%d ", j, k, C[j][k]);  //Accion: Mostrar los datos del arreglo 2D

    }
    printf("\n");
  }  
  return 1;
}