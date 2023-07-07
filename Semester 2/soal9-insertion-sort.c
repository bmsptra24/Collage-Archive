// Bima Saputra - 2IA
// Program mengurutkan data tinggi badan siswa
#include <stdio.h>
#include <string.h>

#define MAX_DATA 100

void display(int dataTinggiSiswa[], int jumlahData, char message[])
{
    puts(message);
    for (int i = 0; i < jumlahData; i++)
    {
        printf("Tinggi siswa ke-%d : %d cm\n", i + 1, dataTinggiSiswa[i]);
    }
}

void insertionSort(int dataTinggiBadanSiswa[], int jumlahData)
{
    int temp;
    for (int i = 1; i < jumlahData; i++)
    {
        temp = dataTinggiBadanSiswa[i];
        int j = i - 1;
        while (dataTinggiBadanSiswa[j] > temp && j >= 0)
        {
            dataTinggiBadanSiswa[j + 1] = dataTinggiBadanSiswa[j];
            j--;
        }
        dataTinggiBadanSiswa[j + 1] = temp;
    }
}

int main()
{
    int jumlahData;
    printf("Masukan jumlah data siswa : ");
    scanf("%d", &jumlahData);
    int dataTinggiBadanSiswa[MAX_DATA];

    for (int i = 0; i < jumlahData; i++)
    {
        printf("Masukan tinggi badan siswa ke-%d : ", i + 1);
        scanf("%d", &dataTinggiBadanSiswa[i]);
    }

    display(dataTinggiBadanSiswa, jumlahData, "\nData sebelum diurut : ");
    insertionSort(dataTinggiBadanSiswa, jumlahData);
    display(dataTinggiBadanSiswa, jumlahData, "\nData sesudah diurut : ");

    return 0;
}