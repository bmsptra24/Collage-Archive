// Bima Saputra - 2IA - Tugas Praktikum Strukltur data

// hitung matrix 3x3
#include <stdio.h>
#include <stdlib.h> //clrsrn

#define Nmax 10
typedef int matriks[Nmax][Nmax];

int main()
{
    int n;
    matriks A, B, C;
    n = 3;
    puts("Program penjumlahan matrix 3x3\n");
    puts("Masukan entri-entri matrix A\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    system("cls");
    puts("Masukan entri-entri matrix B\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    system("cls");

    // proses
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // output
    puts("Entri-entri matriks A, B, dan C\n\n");
    // A
    for (int i = 1; i <= n; i++)
    {
        i == 2 ? printf("A = ") : NULL;

        for (int j = 1; j <= n; j++)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n\n");
    }
    // B
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        i == 2 ? printf("B = ") : NULL;

        for (int j = 1; j <= n; j++)
        {
            printf("\t%d", B[i][j]);
        }
        printf("\n\n");
    }
    // RESULT
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        i == 2 ? printf("C = ") : NULL;

        for (int j = 1; j <= n; j++)
        {
            printf("\t%d", A[i][j]);
        }

        i == 2 ? printf("\t+") : printf("\t");

        for (int j = 1; j <= n; j++)
        {
            printf("\t%d", B[i][j]);
        }

        i == 2 ? printf("\t=") : printf("\t");

        for (int j = 1; j <= n; j++)
        {
            printf("\t%d", C[i][j]);
        }
        printf("\n\n");
    }
}