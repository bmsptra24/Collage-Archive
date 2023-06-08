// Statement 2 kondisi - Pengecek lulus / tidak

#include <stdio.h>

int main()
{
    int nilai;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 75)
    {
        printf("Anda lulus");
    }
    else
    {
        printf("Anda tidak lulus");
    }

    return 0;
}