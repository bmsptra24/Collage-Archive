// blm work
#include <stdio.h>
#include <math.h>

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
    // Step 2 − Initialize the value of gap size. Example: h
    // Step 3 − Divide the list into smaller sub-part. Each must have equal intervals to h
    // Step 4 − Sort these sub-lists using insertion sort
    // Step 5 – Repeat this step 2 until the list is sorted.
    // Step 6 – Print a sorted list.
    int gap = ceil(*arrayLenght / 2.0);

    for (int i = 0; i <= *arrayLenght; i++)
    {
        for (int j = i; j <= *arrayLenght; j++)
        {
            if (j + gap <= *arrayLenght)
            {
                if (numberList[j] < numberList[j + gap])
                {
                    int temp = numberList[j];
                    numberList[j] = numberList[j + gap];
                    numberList[j + gap] = temp;
                    
                }
            }
        }
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