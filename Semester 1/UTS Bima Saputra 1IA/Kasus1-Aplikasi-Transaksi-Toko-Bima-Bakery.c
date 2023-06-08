// Bima Saputra - 1IA
// KASUS 1 - Aplikasi Transaksi Toko Bima Bakery
// ---------------------------------------------
// 1. Buat masukan data transaksi berupa
//    a. Nama pembeli
//    b. Jumlah barang yang dibeli
//    c. Lalu masukan data barang sebanyak jumlah barang yg diinputkan td
//       -Nama barang
//       -Harga barang
//       -Kuantitas
// 2. Munculkan hasil InVoice (hasil input td)
//    -Nama pembeli
//    -Nama barang
//    -Kuantitas
//    -Total Harga Perbarang (Jumlah barang * Harga barang)
//    -Sub Total (Total harga barang 1 + Total harga barang 2 + Total harga barang ...)
//    -Diskon:
//        Jika Sub Total lebih besar dari 50.000, maka diskon 15%
//        Jika Sub Total lebih besar dari 25.000, maka diskon 10%
//        Jika Sub Total lebih besar dari 10.000, maka diskon 5%
//    -Grand Total (Sub Total - Diskon)

#include <stdio.h>

// Deklarasi Variabel
int jumlahBarang, kuantitas[100], hargaBarang[100], id = 0;
char namaPembeli[50], namaBarang[100][50]; // namaVariabel[id barang][jml. karakter]

int main()
{
    printf("======================TOKO BIMA BAKERY=====================\n");
    printf("\nNama Pembeli              : ");
    scanf("%s", &namaPembeli);
    printf("Jumlah barang yang dibeli : ");
    scanf("%d", &jumlahBarang);
    printf("\n\nMasukan data barang!\n");
    int i;
    for (i = 1; i <= jumlahBarang; i++) // karena data barang yang diinput bisa lebih dari 1 maka dilakukan pengulangan untuk memberi tanda
    {
        printf("-----------------------------------------------------------\n");
        printf("Nama barang  : ");
        scanf("%s", &namaBarang[i]);
        printf("Harga barang : ");
        scanf("%d", &hargaBarang[i]);
        printf("Kuantitas    : ");
        scanf("%d", &kuantitas[i]);
    }
    printf("\n===========================================================\n\n\n\n\n");

    int total, subTotal = 0, diskon, grandTotal;
    printf("\n======================TOKO BIMA BAKERY=====================\n");
    printf("\n%s", namaPembeli);
    printf("\n-----------------------------------------------------------");
    printf("\nItem\t\t\tJumlah\t\t\tTotal");
    printf("\n-----------------------------------------------------------");
    for (i = 1; i <= jumlahBarang; i++) // menampilkan data barang berdasarkan id yang sudah dibuat
    {
        total = hargaBarang[i] * kuantitas[i];
        subTotal += total;
        printf("\n%s\t\t\t%d\t\t\t%d", namaBarang[i], kuantitas[i], total);
    }
    printf("\n\n-----------------------------------------------------------");
    printf("\nSub Total\t\t\t\t\t%d", subTotal);
    if (subTotal > 50000) // memberi diskon berdasarkan jml. sub total
    {
        diskon = subTotal * 0.15;                        // diskon 15%
        printf("\nDiskon 15%c\t\t\t\t\t%d", 37, diskon); // 37 adalah kode karakter untuk menampilkan simbol %
    }
    else if (subTotal > 25000)
    {
        diskon = subTotal * 0.10; // diskon 10%
        printf("\nDiskon 10%c\t\t\t\t\t%d", 37, diskon);
    }
    else if (subTotal > 10000)
    {
        diskon = subTotal * 0.05; // diskon 5%
        printf("\nDiskon 5%c\t\t\t\t\t%d", 37, diskon);
    }
    else
    {
        diskon = 0; // tdk dapat diskon
        printf("\nDiskon\t\t\t\t\t\t%d", diskon);
    }
    printf("\n-----------------------------------------------------------");
    grandTotal = subTotal - diskon;
    printf("\nGrand Total\t\t\t\t\t%d", grandTotal);
    printf("\n===========================================================");
}