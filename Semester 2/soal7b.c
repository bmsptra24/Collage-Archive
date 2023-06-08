// Bima Saputra - 2IA - Tugas Praktikum Strukltur data

// hitung matrix 3x3
#include <stdio.h>
#include <stdlib.h> //clrscr

#define Nmax 10
typedef int matriks[Nmax][Nmax];
int n = 3;
matriks A, B, C;

int main()
{
    puts("Program perkalian matrix 3x3\n");
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
    int temp = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                temp += A[i][k] * B[k][j];
            }
            C[i][j] = temp;
            temp = 0;
        }
    }
    // 1 2 3 4 5 6 7 8 9
    // 9 8 7 6 5 4 3 2 1

    // output
    puts("Entri-entri matriks A, B, dan C\n\n");
    // A
    for (int i = 1; i <= n; i++)
    {
        i == n / 2 + 1 ? printf("A = ") : NULL;

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
        i == n / 2 + 1 ? printf("B = ") : NULL;

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
        i == n / 2 + 1 ? printf("C = ") : NULL;

        // A
        for (int j = 1; j <= n; j++)
        {
            printf("\t%d", A[i][j]);
        }

        i == n / 2 + 1 ? printf("\tx") : printf("\t");

        // B
        for (int j = 1; j <= n; j++)
        {
            printf("\t%d", B[i][j]);
        }

        i == n / 2 + 1 ? printf("\t=") : printf("\t");

        // C
        for (int j = 1; j <= n; j++)
        {
            printf("\t%d", C[i][j]);
        }
        printf("\n\n");
    }
}
