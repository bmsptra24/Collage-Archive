// Bima Saputra - 2IA
// Program mengurutkan data siswa berdasarkan umurnya
#include <stdio.h>
#include <string.h>

#define LENGHT_NAME 100
#define MAX_DATA 100

void display(char dataNama[MAX_DATA][LENGHT_NAME], int dataUmur[], int jumlahData, char message[])
{
    puts(message);
    for (int i = 0; i < jumlahData; i++)
    {
        printf("%d. Nama : %s \n", i + 1, dataNama[i]);
        printf("   Umur : %d \n", dataUmur[i]);
    }
}

void exchangeSort(char dataNama[MAX_DATA][LENGHT_NAME], int dataUmur[], int jumlahData)
{
    char temp[LENGHT_NAME];
    for (int i = 0; i < jumlahData - 1; i++)
    {
        for (int j = (i + 1); j < jumlahData; j++)
        {
            if (dataUmur[i] > dataUmur[j])
            {
                // swap data
                strcpy(temp, dataNama[i]);
                strcpy(dataNama[i], dataNama[j]);
                strcpy(dataNama[j], temp);

                int tempDataUmur = dataUmur[i];
                dataUmur[i] = dataUmur[j];
                dataUmur[j] = tempDataUmur;
            }
        }
    }
}

int main()
{
    int jumlahData;
    printf("Masukan jumlah data siswa : ");
    scanf("%d", &jumlahData);
    char dataNama[LENGHT_NAME][MAX_DATA];
    int dataUmur[MAX_DATA];

    for (int i = 0; i < jumlahData; i++)
    {
        printf("Masukan nama ke-%d : ", i + 1);
        scanf("%s", dataNama[i]);
        printf("Masukan umur ke-%d : ", i + 1);
        scanf("%d", &dataUmur[i]);
    }

    display(dataNama, dataUmur, jumlahData, "\nData sebelum diurut : ");
    exchangeSort(dataNama, dataUmur, jumlahData);
    display(dataNama, dataUmur, jumlahData, "\nData sesudah diurut : ");

    return 0;
}