// Catatan (di print)
// - Penjelasan mengenai perulangan, dijelaskan masing" kondisinya 1 per 1.
// - Buat BENTUK UMUM
// - Buat CONTOH

// Program pembalik kalimat
#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int strLenght, i = 0;

    // input
    printf("Masukan kata / kalimat : ");
    gets(string);
    strLenght = strlen(string) - 1;

    // proses display kata secara terbalik
    while (i <= strLenght)
    {
        printf("%c", string[strLenght]);
        strLenght--;
    }
}