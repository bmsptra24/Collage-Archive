// Buatkan program dg menggunakan statement IF dengan 3 kondisi (aksi)

#include <stdio.h>
#include <stdlib.h>

// function for count discount
int countDiscont(int Prices)
{
    if (Prices > 40000)
    {
        return Prices * 0.15;
    }
    else if (Prices > 70000)
    {
        return Prices * 0.40;
    }
    else
    {
        return 0;
    }
}

// function for diplay list of order and count the price
void displayOrderAndCountPrices(int orders[], int quantities, int *pPrices)
{
    // refresh the value
    *pPrices = 0;

    // order checker
    for (int i = 0; i < quantities; i++)
    {
        switch (orders[i])
        {
        case 1:
            printf("\n%d. Chicken Regular (20.000)", i + 1);
            *pPrices += 20000;
            break;
        case 2:
            printf("\n%d. Chicken Wings (15.000)", i + 1);
            *pPrices += 15000;
            break;
        case 3:
            printf("\n%d. Salad (8.000)", i + 1);
            *pPrices += 8000;
            break;
        case 4:
            printf("\n%d. Dessert (7.000)", i + 1);
            *pPrices += 7000;
            break;
        case 5:
            printf("\n%d. Paket Ramadhan Berkah (40.000)", i + 1);
            *pPrices += 40000;
            break;

        default:
            printf("\n%d. -", i + 1);
            break;
        }
    }
}

int main()
{
    // deklaration
    int orderQuantities, currentIndexOrder = 0, prices, discont, grandTotal;

    // ==================================INPUT==================================
    // input size of array orders
    printf("Masukan jumlah pesanan yang ingin dipesan : ");
    scanf("%d", &orderQuantities);

    // declaration array orders
    int orders[orderQuantities];

    // input order
    do
    {
        // clear screen
        system("cls");

        // display order
        printf("Pesanan anda:");
        displayOrderAndCountPrices(orders, orderQuantities, &prices);

        // input menu
        puts("\n\nPilih menu berikut ini!");
        printf("1. Chicken Regular (20.000)\n2. Chicken Wings (15.000)\n3. Salad (8.000)\n4. Dessert (7.000)\n5. Paket Ramadhan Berkah (40.000)\nPilihan anda : ");
        scanf("%d", &orders[currentIndexOrder]);

        // up current position index for checking loop
        currentIndexOrder++;

    } while (currentIndexOrder < orderQuantities);

    // clear screen
    system("cls");

    // display order
    printf("Pesanan anda:");
    displayOrderAndCountPrices(orders, orderQuantities, &prices);

    // ================================PROSES================================
    discont = countDiscont(prices);
    grandTotal = prices - discont;

    // ================================OUTPUT================================
    puts("\n\n===============================================");
    printf("\nTotal harga : Rp.%d", prices);
    printf("\nDiskon      : Rp.%d", discont);
    printf("\nGrand total : Rp.%d", grandTotal);
    puts("\n\n===============================================");
}
