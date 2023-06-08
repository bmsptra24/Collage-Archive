#include <stdio.h>
#include <windows.h>

int main()
{
    int a, b, rumus, ulang = 1;
    float hasil;

    system("cls");
    printf("--------------------------------------");
    printf("\nAplikasi Penghitung Luas Bangun Datar\n");
    printf("\n1. Segitiga    \n");
    printf("\n2. Persegi    \n");
    printf("\n3. Lingkaran  \n");
    printf("\nMasukan pilihan anda : ");
    scanf("%d", &rumus);

    if (rumus == 1) // segitiga
    {
        printf("\n\n--------------------------------------\n\n");
        printf("Masukan Data!\n");
        printf("\nNilai Alas    : ");
        scanf("%d", &a);
        printf("\nNilai Tinggi  : ");
        scanf("%d", &b);
        ulang = 0;
        hasil = (a * b) / 2;
    }
    else if (rumus == 2) // persegi
    {
        printf("\n\n--------------------------------------\n\n");
        printf("Masukan Data!\n");
        printf("\nPanjang Sisi  : ");
        scanf("%d", &a);
        ulang = 0;
        hasil = a * a;
    }
    else if (rumus == 3) // lingaran
    {
        printf("\n\n--------------------------------------\n\n");
        printf("Masukan Data!\n");
        printf("\nPanjang Jari-Jari  : ");
        scanf("%d", &a);
        ulang = 0;
        hasil = 3.14159265358979323846 * a * a;
    }
    else
    {
        printf("Silakan masukan angka 1, 2 atau 3 : ");
        scanf("%d", &rumus);
    }
    printf("\n\n---------------------------\n");
    printf("\nHasil              : %.2f\n", hasil);

    return 0;
}

