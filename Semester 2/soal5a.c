// Untuk hari ini kerjakan latihan berikut ini. Buatlah program dg menggunakan minimal 4 kondisi if tentukanla kasus sendiri2.

// Ketentuan misal dengan nilai
// A....
// B...
// C...
// D...
// E...

// DI SCREENSHOT

// Program pengecek kategori nilai
#include <stdio.h>

int main()
{
    // deklarasi
    float uh1, uh2, uh3, uts, uas, nilaiAkhir;

    // input nilai
    puts("Masukan nilai anda!");
    printf("UH1, UH2, UH3, UTS, UAS : ");
    scanf("%f %f %f %f %f", &uh1, &uh2, &uh3, &uts, &uas);

    nilaiAkhir = (uh1 + uh2 + uh3 + uts + uas) / 5; // cari rata-rata

    // proses klasifikasi nilai
    if (nilaiAkhir >= 90)
    {
        printf("\nNilai anda %.2f (A)", nilaiAkhir);
    }
    else if (nilaiAkhir >= 80)
    {
        printf("\nNilai anda %.2f (B)", nilaiAkhir);
    }
    else if (nilaiAkhir >= 70)
    {
        printf("\nNilai anda %.2f (C)", nilaiAkhir);
    }
    else if (nilaiAkhir >= 60)
    {
        printf("\nNilai anda %.2f (D)", nilaiAkhir);
    }
    else
    {
        printf("\nNilai anda %.2f (E)", nilaiAkhir);
    }

    return 0;
}