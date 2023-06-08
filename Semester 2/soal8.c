// Bima Saputra - 2IA
#include <stdio.h>

void displayLine(int *jumlahBaris)
{
    // display a line
    for (int i = 0; i < *jumlahBaris; i++)
    {
        printf("----");
    }
    // a line for last element
    printf("-\n");
}

void display(int dataAngka[], char dataHuruf[], int *jumlahData, char message[])
{
    puts(message);
    displayLine(jumlahData);
    // display data huruf
    for (int i = 0; i < *jumlahData; i++)
    {
        printf("| %c ", dataHuruf[i]);
    }
    printf("|\n");
    displayLine(jumlahData);
    // display data angka
    for (int i = 0; i < *jumlahData; i++)
    {
        printf("| %d ", dataAngka[i]);
    }
    printf("|\n");
    displayLine(jumlahData);
}

void bubbleSort(char dataHuruf[], int dataAngka[], int *arrayLenght)
{
    for (int i = 0; i < *arrayLenght - 1; i++)
    {
        for (int j = 0; j < *arrayLenght - i - 1; j++)
        {
            if (dataHuruf[j] > dataHuruf[j + 1])
            {
                // swap data
                char tempDataHuruf = dataHuruf[j];
                dataHuruf[j] = dataHuruf[j + 1];
                dataHuruf[j + 1] = tempDataHuruf;

                // swap data
                int tempDataAngka = dataAngka[j];
                dataAngka[j] = dataAngka[j + 1];
                dataAngka[j + 1] = tempDataAngka;
            }
        }
    }
}

int main()
{
    int jumlahData;
    printf("Masukan jumlah data : ");
    scanf("%d", &jumlahData);
    char dataHuruf[jumlahData];
    int dataAngka[jumlahData];

    for (int i = 0; i < jumlahData; i++)
    {
        printf("\nMasukan huruf ke-%d : ", i + 1);
        scanf("%s", &dataHuruf[i]);
        printf("Masukan angka ke-%d : ", i + 1);
        scanf("%d", &dataAngka[i]);
    }

    display(dataAngka, dataHuruf, &jumlahData, "\nData sebelum diurut : ");
    bubbleSort(dataHuruf, dataAngka, &jumlahData);
    display(dataAngka, dataHuruf, &jumlahData, "\nData sesudah diurut : ");

    return 0;
}