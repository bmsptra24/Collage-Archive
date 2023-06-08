#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cariNamaKota(int nomorKota) // fungsi convert input angka ke string
{
    switch (nomorKota)
    {
    case 1:
        return "Jakarta";
        break;
    case 2:
        return "Semarang";
        break;
    case 3:
        return "Bandung";
        break;
    case 4:
        return "Palembang";
        break;
    case 5:
        return "Medan";
        break;
    case 6:
        return "Lampung";
        break;
    case 7:
        return "Pontianak";
        break;
    case 8:
        return "Banjarmasin";
        break;
    case 9:
        return "Samarinda";
        break;

    default:
        break;
    }
}

int main()
{
    // Input
    system("cls"); // fungsi untuk membersihkan terminal
    int jmlPaket, hargaOngkir, lokasiTujuan, lokasiPengirim, pajak = 0;
    float beratPaket[100], totBeratPaket = 0;
    char namaPengirim[30], namaPaket[100][50], jenisPengiriman[15]; // array untuk data tiap barang

    puts("=======================================");
    puts("=============PAKET EXPRESS=============");
    puts("=======================================");

    printf("\nNama Pengirim : ");
    gets(namaPengirim);
    puts("\nLokasi yang tersedia!\n1. Jakarta\n2. Semarang\n3. Bandung\n4. Palembang\n5. Medan\n6. Lampung\n7. Pontianak\n8. Banjarmasin\n9. Samarinda");
    printf("Lokasi Pengirim (input angka) : ");
    scanf("%d", &lokasiPengirim);
    printf("Lokasi Tujuan   (input angka) : ");
    scanf("%d", &lokasiTujuan);

    puts("\n=======================================");
    printf("Jumlah paket yang dikirim : ");
    scanf("%d", &jmlPaket);
    for (int i = 0; i < jmlPaket; i++) // looping untuk input berbagai data barang
    {
        printf("\nData Paket Ke-%d\n", i + 1);
        puts("----------------");
        printf("Nama Barang : ");
        scanf("%s", namaPaket[i]);
        printf("Berat Barang (kg) : ");
        scanf("%f", &beratPaket[i]);
    }

    // Output
    system("cls");
    puts("=======================================");
    puts("=============PAKET EXPRESS=============");
    puts("=======================================");
    printf("\nNama Pengirim      : %s", namaPengirim);
    printf("\nLokasi Pengirim    : %s", cariNamaKota(lokasiPengirim));
    printf("\nLokasi Tujuan      : %s", cariNamaKota(lokasiTujuan));
    printf("\nJumlah Paket       : %d", jmlPaket);
    if ((lokasiPengirim == lokasiTujuan)) // logika untuk lihat jenis pengiriman
    {
        strcpy(jenisPengiriman, "Dalam Kota");
        pajak = 0;
    }
    else if ((lokasiPengirim <= 3 && lokasiTujuan <= 3) || (lokasiPengirim >= 3 && lokasiTujuan >= 3 && lokasiPengirim <= 6 && lokasiTujuan <= 6) || (lokasiPengirim >= 6 && lokasiTujuan >= 6 && lokasiPengirim <= 9 && lokasiTujuan <= 9))
    {
        strcpy(jenisPengiriman, "Dalam Pulau");
        pajak = 1;
    }
    else
    {
        strcpy(jenisPengiriman, "Antar Pulau");
        pajak = 2;
    }
    printf("\nJenis Pengiriman   : %s", jenisPengiriman);

    puts("\n\n=======================================");
    for (int i = 0; i < jmlPaket; i++) // looping untuk menampilkan data barang
    {
        printf("Data Paket Ke-%d\n", i + 1);
        puts("---------------------");
        printf("Nama Barang  : %s", namaPaket[i]);
        printf("\nBerat Barang : %.1f kg\n\n", beratPaket[i]);
    }
    puts("=======================================");
    for (int j = 0; j < jmlPaket; j++) // looping untuk menjumlahkan berat barang
    {
        totBeratPaket += beratPaket[j];
    }

    if (pajak == 0) // logika untuk menghitung pajak
    {
        hargaOngkir = totBeratPaket * 20000;
        pajak = 0;
    }
    else if (pajak == 1)
    {
        hargaOngkir = totBeratPaket * 25000;
        pajak = hargaOngkir * 0.5;
    }
    else if (pajak == 2)
    {
        hargaOngkir = totBeratPaket * 30000;
        pajak = hargaOngkir * 0.10;
    }
    printf("Total Berat Barang : %.1f kg", totBeratPaket);
    printf("\nOngkos Kirim       : Rp. %d", hargaOngkir);
    printf("\nPajak Pengiriman %s : Rp. %d", jenisPengiriman, pajak);
    puts("\n\n=======================================");
    printf("Total Harga : Rp. %d", hargaOngkir + pajak);
    puts("\n=======================================");

    system("pause");
}