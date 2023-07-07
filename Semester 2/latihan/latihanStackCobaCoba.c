#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXSTACK 10
#define MAXCHAR 100

struct templateStack
{
    int top;
    char string[MAXCHAR];
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
        puts("Data berhasil dikeluarkan!");
    }
    else if (isEmpty() == true)
    {
        puts("Data stack kosong!");
    }
}

void push(int data)
{
    if (isFull() != true)
    {
        theStack.top++;
        theStack.string[theStack.top] = data;
        puts("Data berhasil ditambah!");
    }
    else
    {
        puts("Data stack penuh!");
    }
}

void print()
{
    for (int i = 0; i <= theStack.top; i++)
    {
        printf("%c", theStack.string[i]);
    }
    printf("\n");
}

void clear()
{
    theStack.top = -1;
    puts("Stack dibersihkan!");
}

int main()
{
    // declare and init
    theStack.top = -1;
    int menu;
    char data;

    do
    {
        system("cls");
        puts("Pilih menu berikut ini!");
        puts("1. Pop Stack");
        puts("2. Push Stack");
        puts("3. Cetak");
        puts("4. Clear Stack");
        puts("5. Exit");
        printf("Pilihan anda : ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            pop();
            system("pause");
            break;
        case 2:
            printf("Masukan data : ");
            scanf("%s", &data);
            push(data);
            system("pause");
            break;
        case 3:
            puts("Data di stack adalah : ");
            print();
            system("pause");
            break;
        case 4:
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