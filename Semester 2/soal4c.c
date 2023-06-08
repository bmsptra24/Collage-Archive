// Statement 3 kondisi - Pengecek angka terbesar

#include <stdio.h>

int main()
{
    int angka1, angka2;

    printf("Masukkan angka pertama dan kedua: ");
    scanf("%d %d", &angka1, &angka2);

    if (angka1 > angka2)
    {
        printf("Angka pertama lebih besar dari angka kedua");
    }
    else if (angka2 > angka1)
    {
        printf("Angka kedua lebih besar dari angka pertama");
    }
    else
    {
        printf("Kedua angka sama besar");
    }

    return 0;
}