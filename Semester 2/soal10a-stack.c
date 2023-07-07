#include <stdio.h>      // Bima Saputra
#include <stdlib.h>     // 2IA
#include <stdbool.h>
#include <string.h>
#define MAXSTACK 20

struct templateStack
{
    int top;
    char string[MAXSTACK];
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
    if (theStack.top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

char pop()
{
    if (isEmpty() == false)
    {
        char popped = theStack.string[theStack.top];
        theStack.top--;
        return popped;
    }
    else if (isEmpty() == true)
    {
        puts("Data stack kosong!");
        return '\0';
    }
}

void push(char data)
{
    if (isFull() != true)
    {
        theStack.top++;
        theStack.string[theStack.top] = data;
    }
    else
    {
        puts("Data stack penuh!");
    }
}

void print(char result[])
{
    printf("Menjadi : ");
    for (int i = 0; i < strlen(result); i++)
    {
        printf("%c", result[i]);
    }
    printf("\n");
}

int main()
{
    theStack.top = -1;
    char string[MAXSTACK];
    char result[MAXSTACK];
    puts("E. TUGAS\nBuatlah program yang melakukan pembalikan kalimat dengan menggunakan stack!\n");

    // Input
    printf("Kalimat : ");
    gets(string);

    // Proses
    int i;
    for (i = 0; i < strlen(string); i++)
    {
        push(string[i]);
    }

    int tempTop = theStack.top;
    for (i = 0; i <= tempTop; i++)
    {
        result[i] = pop();
    }
    result[i] = '\0';

    // Output
    print(result);

    return 0;
}