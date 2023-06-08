#include <stdio.h>

void displayArray(int numberList[], int *arrayLenght)
{
    int i;

    for (i = 0; i <= *arrayLenght; i++)
    {
        printf("%d ", numberList[i]);
    }
    printf("\n\n");
}

void selectionSort(int numberList[], int *arrayLenght)
{
    // 1. loop dari i sampe akhir,
    // sebanyak jumlah array - 1 karena yg akhir gk perlu dibandingi
    // 2. jika data[x]<min, min diubah jadi data[x]
    // 3. i++
    int min;
    for (int i = 0; i <= *arrayLenght; i++)
    {
        min = i;
        for (int j = i; j <= *arrayLenght; j++)
        {
            if (numberList[j] < numberList[min])
            {
                min = j;
            }
        }
        int temp = numberList[min];
        numberList[min] = numberList[i];
        numberList[i] = temp;
    }
}

int main()
{
    int numberList[] = {1, 3, 5, 7, 9, 2, 4, 6, 10, 8};
    int arrayLenght = (sizeof(numberList) / sizeof(int)) - 1; //-1karena dari 0
    puts("Sebelum : ");
    displayArray(numberList, &arrayLenght);
    selectionSort(numberList, &arrayLenght);
    puts("Sesudah : ");
    displayArray(numberList, &arrayLenght);
}