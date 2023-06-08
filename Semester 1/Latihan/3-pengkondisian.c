#include <stdio.h>

int main()
{
    int angka;
    printf("Masukan angka : ");
    scanf("%d", &angka);

    if (angka > 20)
    {
        printf("angka lebih besar dari 20");
    }
    else if (angka == 0)
    {
        printf("angka adalah 0");
    }

    else
    {
        printf("angka lebih kecil dari 20");
    }
    return 0;
}
