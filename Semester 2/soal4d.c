// Nasted IF - Pengecek kategori umur

#include <stdio.h>

int main()
{
    int umur;

    printf("Masukan umurmu : ");
    scanf("%d", &umur);

    if (umur >= 18)
    {
        if (umur >= 60)
        {
            printf("Anda adalah lansia");
        }
        else
        {
            printf("Anda adalah dewasa");
        }
    }
    else
    {
        if (umur >= 12)
        {
            printf("Anda adalah remaja");
        }
        else
        {
            printf("Anda adalah anak-anak");
        }
    }

    return 0;
}
