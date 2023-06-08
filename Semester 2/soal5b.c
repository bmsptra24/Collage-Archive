// Program pengecek kategori usia kucing
#include <stdio.h>

int main()
{
    // deklarasi
    int usiaKucing;

    // input usia kucing
    puts("Masukan usia kucing (tahun) : ");
    scanf("%d", &usiaKucing);

    // proses klasifikasi usia kucing
    if (usiaKucing >= 11)
    {
        printf("Kategori usia kucing anda : Kucing Senior");
    }
    else if (usiaKucing >= 80)
    {
        printf("Kategori usia kucing anda : Kucing Dewasa");
    }
    else if (usiaKucing >= 70)
    {
        printf("Kategori usia kucing anda : Kucing Muda");
    }
    else if (usiaKucing >= 60)
    {
        printf("Kategori usia kucing anda : Anak Kucing");
    }
    else
    {
        printf("Input yang anda masukan salah!");
    }

    return 0;
}