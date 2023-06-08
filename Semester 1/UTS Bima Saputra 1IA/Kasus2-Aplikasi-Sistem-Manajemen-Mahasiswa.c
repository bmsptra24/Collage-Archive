// Bima Saputra - 1IA
// KASUS 2 - Aplikasi Konversi Nilai Mata Uang
// -------------------------------------------

// Buat masukan untuk nilai uangnya

// Buat inputan untuk memilih jenis konversi mata uang
// -US Dollar (USD)
// -Euro (EUR)
// -Japanese Yen (JPY)
// -Chinese Yuan Renminbi (CNY)
// -Pound Britania (GBP)

//     JIKA MEMILIH USD, MAKA:
//     hasilKonversi = nilaiUang * 0.0000639915;

//     JIKA MEMILIH EUR, MAKA:
//     hasilKonversi = nilaiUang * 0.00006126781;

//     JIKA MEMILIH JPY, MAKA:
//     hasilKonversi = nilaiUang * 0.0089539789;

//     JIKA MEMILIH CNY, MAKA:
//     hasilKonversi = nilaiUang * 0.00045654003;

//     JIKA MEMILIH GBP, MAKA:
//     hasilKonversi = nilaiUang * 0.000052855371;

//     Jika memilih selain itu munculkan kata input anda salah

// Tampilkan hasil konversi

#include <stdio.h>
#include <string.h>

void main()
{
    int stop = 0;
    double nilaiUang, hasilKonversi;
    char ulang, pilih[2];
    printf("=================================");
    printf("\nAPLIKASI KONVERSI NILAI MATA UANG");
    printf("\n=================================\n\n");

    printf("Masukan jumlah uangmu (IDR) : Rp. ");
    scanf("%lf", &nilaiUang);
    printf("\nPilih jenis konversi!\n-US Dollar (USD)\n-Euro (EUR)\n-Japanese Yen (JPY)\n-Chinese Yuan Renminbi (CNY)\n-Pound Britania (GBP)");
    printf("\n\nPilihanmu (misal, USD) : ");
    scanf("%s", &pilih);

    printf("\n=================================\n");

    if (strcmp(pilih, "USD") == 0) // fungsi strcmp() menegecek apakah nilai dr variabel pilih sama dengan "USD" jika sama nilainya 0
    {                              // tidak bisa langsung (pilih == "USD")
        printf("IDR -> %s\n", pilih);
        hasilKonversi = nilaiUang * 0.0000639915; // IDR -> US Dollar
        printf("%.2lf -> %.2lf\n", nilaiUang, hasilKonversi);
    }
    else if (strcmp(pilih, "EUR") == 0)
    {
        printf("IDR -> %s\n", pilih);
        hasilKonversi = nilaiUang * 0.00006126781; // IDR -> EUR
        printf("%.2lf -> %.2lf\n", nilaiUang, hasilKonversi);
    }
    else if (strcmp(pilih, "JPY") == 0)
    {
        printf("IDR -> %s\n", pilih);
        hasilKonversi = nilaiUang * 0.0089539789; // IDR -> JPY
        printf("%.2lf -> %.2lf\n", nilaiUang, hasilKonversi);
    }
    else if (strcmp(pilih, "CNY") == 0)
    {
        printf("IDR -> %s\n", pilih);
        hasilKonversi = nilaiUang * 0.00045654003; // IDR -> CNY
        printf("%.2lf -> %.2lf\n", nilaiUang, hasilKonversi);
    }
    else if (strcmp(pilih, "GBP") == 0)
    {
        printf("IDR -> %s\n", pilih);
        hasilKonversi = nilaiUang * 0.000052855371; // IDR -> GBP
        printf("%.2lf -> %.2lf\n", nilaiUang, hasilKonversi);
    }
    else
    {
        printf("Data yang anda input salah!\n\n");
    }
}