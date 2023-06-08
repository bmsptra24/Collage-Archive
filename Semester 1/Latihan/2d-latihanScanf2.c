#include <stdio.h>

int main(){

    float angka1, angka2, angka3, angka4, angka5;
    
    printf("Masukan Input Nilai!");
    printf("\nMasukan Angka 1 : ");
    scanf("%f", &angka1);

    printf("\nMasukan Angka 2 : ");
    scanf("%f", &angka2);

    printf("\nHASIL : ");
    angka3 = (angka1 + angka2) / 2;
    printf("\nKasus 1 - Hasilnya adalah : ");
    printf("%.2f", angka3);

    angka4 = angka3 * angka2;
    printf("\nKasus 2 - Hasilnya adalah : ");
    printf("%.2f", angka4);

    angka5 = (angka3 + angka4) / 2;
    printf("\nKasus 3 - Hasilnya adalah : ");
    printf("%.2f", angka4);
    
}