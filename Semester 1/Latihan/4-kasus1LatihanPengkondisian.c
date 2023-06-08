#include <stdio.h>
#include <windows.h>

int main()
{
    char namaBarang[100], diskonPersen[100];
    int jumlahBarang, totalHarga;
    float hargaBarang, diskon, grandTotal;

    system("cls");
    printf("---------------------------\n");
    printf("Masukan Data Barang!\n");
    printf("\nNama Barang   : ");
    scanf("%s", &namaBarang);
    printf("\nHarga Barang  : Rp ");
    scanf("%f", &hargaBarang);
    printf("\nJumlah Barang : ");
    scanf("%d", &jumlahBarang);

    printf("\n\n---------------------------\n");
    printf("Data Yang Anda Inputkan!\n");
    printf("\nNama Barang   : %s\n", namaBarang);
    printf("\nHarga Barang  : Rp %.2f\n", hargaBarang);
    printf("\nJumlah Barang : %d\n", jumlahBarang);

    // total harga
    printf("\n\n---------------------------\n");
    totalHarga = hargaBarang * jumlahBarang;
    printf("Total Harga   : Rp %d\n", totalHarga);

    // diskon
    if (jumlahBarang > 15)
    {
        diskon = totalHarga * 0.1; // diskon 10 persen
        strcpy(diskonPersen, "(10 Persen)");
    }
    else if (jumlahBarang > 10)
    {
        diskon = totalHarga * 0.05; // diskon 5 persen
        strcpy(diskonPersen, "(5 Persen)");
    }
    else
    {
        diskon = 0;
        strcpy(diskonPersen, "(Tidak ada diskon)");
    }
    printf("\nDiskon        : Rp %.2f %s\n", diskon, diskonPersen);

    // grand total
    grandTotal = totalHarga - diskon;
    printf("\nGrand Total   : Rp %.2f\n\n", grandTotal);
}
