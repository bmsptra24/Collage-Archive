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

void bubbleSort(int numberList[], int *arrayLenght)
{
    // 1. loop dari awal sampe akhir,
    // sebanyak jumlah array - 1 karena yg akhir gk perlu dibandingi
    // 2. jika data[x]>data[x+1], swap
    for (int i = 0; i <= *arrayLenght; i++)
    {
        for (int j = 0; j <= *arrayLenght - 1; j++)
        {
            if (numberList[j] > numberList[j + 1])
            {
                int temp = numberList[j];
                numberList[j] = numberList[j + 1];
                numberList[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int numberList[] = {1, 3, 5, 7, 9, 2, 4, 6, 10, 8, 2, 43, 12, 345, 2312, 34, 2, 4};
    int arrayLenght = (sizeof(numberList) / sizeof(int)) - 1; //-1karena dari 0
    puts("Sebelum : ");
    displayArray(numberList, &arrayLenght);
    bubbleSort(numberList, &arrayLenght);
    puts("Sesudah : ");
    displayArray(numberList, &arrayLenght);
}