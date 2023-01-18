#include <stdio.h>

void matrix_multiplication(int A[][3], int B[][3], int C[][3], int n, int m, int p)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < p; j++)
        {
            C[i][j] = 0;
            for ( k = 0; k < m; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][3] = {{7, 8, 9}, {10, 11, 12}, {13, 14, 15}};
    int C[2][3] = {0};
    int i, j;
    matrix_multiplication(A, B, C, 2, 3, 3);
    printf("El resultado de la multiplicación es:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}