#include <stdio.h>  // Bima Saputra
#include <stdlib.h> // 2IA
#include <stdbool.h>
#include <string.h>
#define MAXSTACK 10
#define MAXCHAR 100
#define MAXNIM 12

struct templateStack
{
    int top;
    char name[MAXSTACK][MAXCHAR];
    char nim[MAXSTACK][MAXNIM];
} theStack;

bool isFull()
{
    if (theStack.top >= MAXSTACK)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty()
{
    if (theStack.top <= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void pop()
{
    if (isEmpty() == false)
    {
        theStack.top--;
        puts("Data berhasil dikeluarkan!\n");
    }
    else if (isEmpty() == true)
    {
        puts("Data kosong!\n");
    }
}

void push(char nama[MAXCHAR], char nim[MAXNIM])
{
    if (isFull() != true)
    {
        theStack.top++;
        strcpy(theStack.name[theStack.top], nama);
        strcpy(theStack.nim[theStack.top], nim);
        puts("Data berhasil ditambah!\n");
    }
    else
    {
        puts("Data penuh!\n");
    }
}

void print()
{
    if (theStack.top > -1)
    {
        for (int i = 0; i <= theStack.top; i++)
        {
            printf("%d. Nama : %s\n", i + 1, theStack.name[i]);
            printf("   NIM  : %s\n\n", theStack.nim[i]);
        }
        printf("\n");
    }
    else
    {
        puts("Data kosong!\n");
    }
}

void clear()
{
    theStack.top = -1;
    puts("Semua data berhasil dihapus!\n");
}

int main()
{
    // declare and init
    theStack.top = -1;
    int menu;
    char nama[MAXCHAR];
    char nim[MAXCHAR];

    do
    {
        system("cls");
        puts("Pilih menu berikut ini!");
        puts("1. Hapus data mahasiswa");
        puts("2. Input data mahasiswa");
        puts("3. Cetak semua data");
        puts("4. Hapus semua data");
        puts("5. Keluar");
        printf("Pilihan anda : ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            system("cls");
            pop();
            system("pause");
            break;
        case 2:
            system("cls");
            puts("Masukan data mahasiswa!");
            printf("Nama : ");
            scanf("%s", nama);
            printf("NIM : ");
            scanf("%s", nim);
            push(nama, nim);
            system("pause");
            break;
        case 3:
            system("cls");
            puts("List Data Mahasiswa");
            puts("===================");
            print();
            system("pause");
            break;
        case 4:
            system("cls");
            clear();
            system("pause");
            break;

        default:
            if (menu <= 1 && menu >= 5)
                puts("Input salah!");
            break;
        }
    } while (menu != 5);
}