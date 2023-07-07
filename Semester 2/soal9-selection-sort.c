// Bima Saputra - 2IA
// Buatlah sebuah program untuk mengurutkan nama siswa berdasarkan huruf awalnya.
#include <stdio.h>
#include <string.h>

#define LENGHT_NAME 100
#define MAX_DATA 100

void display(char dataSiswa[LENGHT_NAME][MAX_DATA], int jumlahData, char message[])
{
    puts(message);
    for (int i = 0; i < jumlahData; i++)
    {
        printf("%d. %s \n", i + 1, dataSiswa[i]);
    }
}

void selectionSort(char dataNama[LENGHT_NAME][MAX_DATA], int jumlahData)
{
    int i, j, small;
    char temp[LENGHT_NAME];
    for (i = 0; i < jumlahData; i++)
    {
        small = i;
        for (j = i + 1; j < jumlahData; j++)
        {
            if (dataNama[j][0] < dataNama[small][0])
            {
                small = j;
            }
        }
        strcpy(temp, dataNama[i]);
        strcpy(dataNama[i], dataNama[small]);
        strcpy(dataNama[small], temp);
    }
}

int main()
{
    int jumlahData;
    printf("Masukan jumlah data siswa : ");
    scanf("%d", &jumlahData);
    char dataNama[LENGHT_NAME][MAX_DATA];

    for (int i = 0; i < jumlahData; i++)
    {
        printf("Masukan nama siswa ke-%d : ", i + 1);
        scanf("%s", dataNama[i]);
    }

    display(dataNama, jumlahData, "\nData sebelum diurut : ");
    selectionSort(dataNama, jumlahData);
    display(dataNama, jumlahData, "\nData sesudah diurut : ");

    return 0;
}