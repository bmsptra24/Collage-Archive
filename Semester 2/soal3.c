// nama, nim, mk, nilai 1,2,3,rata rata, keterangan
// jika rata rata 80-100 = A
// 65-79 = B
// 40-64 = C
// >40 = D
#include <stdio.h>

int main()
{
    char nama[50], MK[50], NIM[15];
    int nilai1, nilai2, nilai3, rataRata;

    printf("Masukan nama anda: ");
    gets(nama);
    printf("Masukan mata kuliah: ");
    gets(MK);
    printf("Masukan NIM: ");
    gets(NIM);
    printf("Masukan nilai 1: ");
    scanf("%d", &nilai1);
    printf("Masukan nilai 2: ");
    scanf("%d", &nilai2);
    printf("Masukan nilai 3: ");
    scanf("%d", &nilai3);
    rataRata = (nilai1 + nilai2 + nilai3) / 3;
    puts("\n============================================");

    if (rataRata >= 80)
    {
        printf("Selamat %s (%s) !\n Nilai anda A di matakuliah %s", nama, NIM, MK);
    }
    else if (rataRata >= 65)
    {
        printf("Selamat %s (%s) !\n Nilai anda B di matakuliah %s", nama, NIM, MK);
    }
    else if (rataRata >= 40)
    {
        printf("Belajar lagi ya %s (%s) !\n Nilai anda C di matakuliah %s", nama, NIM, MK);
    }
    else
    {
        printf("Belajar lagi ya %s (%s) !\n Nilai anda D di matakuliah %s", nama, NIM, MK);
    }
}

// kurang nim