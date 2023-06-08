// Catatan (di print)
// - Penjelasan mengenai 3 statement kondisi (yg tgs sblmnya), dijelaskan masing" kondisinya 1 per 1.
// - Buat BENTUK UMUM
// - Buat CONTOH

// Statement 1 kondisi - Pengecek air mendidih
#include <stdio.h>

int main()
{
    int suhuAir;

    printf("Masukkan suhu air (celcius): ");
    scanf("%d", &suhuAir);

    if (suhuAir >= 100)
    {
        printf("Air telah mendidih\n");
    }

    return 0;
}