// Catatan (di print)
// - Penjelasan mengenai perulangan, dijelaskan masing" kondisinya 1 per 1.
// - Buat BENTUK UMUM
// - Buat CONTOH

// Program pembalik kalimat
#include <stdio.h>
#include <string.h>

int main()
{
    int jumlahAngka, count = 0, i = 1;

    // input
    printf("Masukan jumlah angka : ");
    scanf("%d", &jumlahAngka);

    // proses hitung jumlah bil. genap
    do
    {
        if (i % 2 == 0)
        {
            count++;
        }
        i++;
    } while (i <= jumlahAngka);

    // output
    printf("Jumlah bilangan genap (1 - %d) : %d", jumlahAngka, count);
}