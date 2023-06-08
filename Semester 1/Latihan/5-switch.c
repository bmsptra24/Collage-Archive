// Buatlah aplikasi penghitung transaksi penjualan
// 1. Tampilkan semua produk
// 2. Buat input berupa pilihan produk yang ingin dibeli
// 3. Buat pengkondisian dari setiap pilihan yang ada dengan menambah harga sesuai produk yg dibeli
// 4. Buat juga pilihan untuk membersihkan variabel yang menampung total harga pembelian dan pilihan untuk keluar dari looping program
// 5. Looping program dengan menggunakan while, dimana pengkondisianya menggunakan sebuah variable, jika variabel bernilai 1, maka program akan terus melakukan looping. Jika bernilai 0, maka proram akan stop melakukan looping

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float totalHarga = 0;
    int pilihMenu, ulang = 1;

    while (ulang == 1)
    {
        system("cls");
        puts("========================================");
        puts("==SELAMAT BERBELANJA DI TOKO SERBA ADA==");
        puts("========================================\n");
        printf("Total belanja anda : Rp. %.2f\n\n", totalHarga);
        puts("Masukan produk yang anda beli!");
        puts("1. Gula\n2. Minyak\n3. Tepung\n4. Telur\n5. Sabun\n6. Sampo\n7. Es Krim\n8. Roti\n9. Mentega\n10. Indomie\n\n11. Clear\n111. Exit");
        printf("\nMasukan pilihan anda : ");
        scanf("%d", &pilihMenu);
        switch (pilihMenu)
        {
        case 1:
            totalHarga += 5000;
            break;
        case 2:
            totalHarga += 7800;
            break;
        case 3:
            totalHarga += 8900;
            break;
        case 4:
            totalHarga += 12100;
            break;
        case 5:
            totalHarga += 2850;
            break;
        case 6:
            totalHarga += 6700;
            break;
        case 7:
            totalHarga += 4300;
            break;
        case 8:
            totalHarga += 9800;
            break;
        case 9:
            totalHarga += 6750;
            break;
        case 10:
            totalHarga += 2850;
            break;
        case 11:
            totalHarga = 0;
            break;
        case 111:
            ulang = 0;
            break;

        default:
            ulang = 0;
            break;
        }
    }
}