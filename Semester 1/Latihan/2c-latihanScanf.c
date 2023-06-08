#include <stdio.h>
#include <windows.h>

int main()
{
    char nama[20], kelas[10], jurusan[20];
    int umur;

    printf("Input Data Mahasiswa!\n");

    printf("Nama     : ");
    scanf("%s", nama);
    printf("Umur     : ");
    scanf("%d", &umur);
    printf("Kelas    : ");
    scanf("%s", kelas);
    printf("Jurusan  : ");
    scanf("%s", jurusan);

    system("cls");
    printf("\n--------------------------\n");
    printf("Data Mahasiswa Yang Sudah Diinput\n\n");
    printf("Nama yang diinputkan    : %s\n", nama);
    printf("Umur yang diinputkan    : %d\n", umur);
    printf("Kelas yang diinputkan   : %s\n", kelas);
    printf("Jurusan yang diinputkan : %s\n", jurusan);
}