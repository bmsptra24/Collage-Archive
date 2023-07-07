#include <stdio.h>

int angka[10], tAngka;
char huruf[10], tHuruf;
int i, j, temp, jumlahdata;

// INSERTION_SORT//
void insertion_sort()
{
    int temp, i, j;
    for (i = 1; i < jumlahdata; i++)
    {
        temp = angka[i];
        tHuruf = huruf[i];
        j = i - 1;

        while (j >= 0 && angka[j] > temp)
        {
            angka[j + 1] = angka[j];
            huruf[j + 1] = huruf[j];
            j--;
        }

        angka[j + 1] = temp;
        huruf[j + 1] = tHuruf;
    }
}

int main()
{
    printf("Masukkan jumlah data: ");
    scanf("%d", &jumlahdata);

    printf("\nMasukkan data yang belum diurutkan!\n");

    for (i = 0; i < jumlahdata; i++)
    {
        printf("\nMasukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);

        printf("Masukkan huruf ke-%d: ", i + 1);
        scanf(" %c", &huruf[i]);
    }

    // HASIL URUTAN//
    insertion_sort();
    printf("\n");
    printf("\nData setelah diurutkan: \n");
    for (i = 0; i < jumlahdata; i++)
        printf("%c ", huruf[i]);

    printf("\n");
    for (i = 0; i < jumlahdata; i++)
        printf("%d ", angka[i]);

    return 0;
}