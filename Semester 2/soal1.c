#include <stdio.h>

int main()
{
    char nama[50];
    int nilai;

    printf("Masukan nama anda: ");
    gets(nama);
    printf("Masukan nilai anda: ");
    gets(nama);

    if (nilai > 90)
    {
        printf("Selamat %s! Nilai anda A", nama);
    }
    else if (nilai > 80)
    {
        printf("Selamat %s! Nilai anda B", nama);
    }
    else if (nilai > 70)
    {
        printf("Selamat %s! Nilai anda C", nama);
    }
    else if (nilai > 60)
    {
        printf("Belajar lagi ya %s! Nilai anda D", nama);
    }
    else
    {
        printf("Belajar lagi ya %s! Nilai anda E", nama);
    }
}