// Bima Saputra - 2IA
// Buatlah sebuah program untuk mengurutkan data nama mahasiswa berdasarkan nilainya
#include <stdio.h>
#include <string.h>

#define LENGHT_NAME 100
#define MAX_DATA 100

void display(char dataNama[MAX_DATA][LENGHT_NAME], int dataNilai[], int jumlahData, char message[])
{
    puts(message);
    for (int i = 0; i < jumlahData; i++)
    {
        printf("|%s\t", dataNama[i]);
    }
    printf("|\n");
    for (int i = 0; i < jumlahData; i++)
    {
        printf("|%d\t", dataNilai[i]);
    }
    printf("|\n");
}

void bubbleSort(char dataNama[MAX_DATA][LENGHT_NAME], int dataNilai[], int arrayLenght)
{
    char temp[LENGHT_NAME];
    for (int i = 0; i < arrayLenght - 1; i++)
    {
        for (int j = 0; j < arrayLenght - i - 1; j++)
        {
            if (dataNilai[j] < dataNilai[j + 1])
            {
                // swap data
                strcpy(temp, dataNama[j]);
                strcpy(dataNama[j], dataNama[j + 1]);
                strcpy(dataNama[j + 1], temp);

                // swap data
                int tempDataNilai = dataNilai[j];
                dataNilai[j] = dataNilai[j + 1];
                dataNilai[j + 1] = tempDataNilai;
            }
        }
    }
}

int main()
{
    int jumlahData;
    printf("Masukan jumlah data mahasiswa : ");
    scanf("%d", &jumlahData);
    char dataNama[LENGHT_NAME][MAX_DATA];
    int dataNilai[MAX_DATA];

    for (int i = 0; i < jumlahData; i++)
    {
        printf("\nMasukan nama mahasiswa ke-%d : ", i + 1);
        scanf("%s", dataNama[i]);
        printf("Masukan nilai mahasiswa ke-%d : ", i + 1);
        scanf("%d", &dataNilai[i]);
    }

    display(dataNama, dataNilai, jumlahData, "\nData sebelum diurut: ");
    bubbleSort(dataNama, dataNilai, jumlahData);
    display(dataNama, dataNilai, jumlahData, "\nData sesudah diurut: ");

    return 0;
}