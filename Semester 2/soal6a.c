// Catatan (di print)
// - Penjelasan mengenai perulangan, dijelaskan masing" kondisinya 1 per 1.
// - Buat BENTUK UMUM
// - Buat CONTOH

// Program pencetak gambar persegi
#include <stdio.h>

int main()
{
    int sisiPersegi;

    // input
    printf("Masukan sisi persegi : ");
    scanf("%d", &sisiPersegi);

    // proses display
    for (int y = 0; y < sisiPersegi; y++)
    {
        for (int x = 0; x < sisiPersegi; x++)
        {
            printf("* ");
        }
        printf("\n");
    }
}