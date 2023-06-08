// Nama    : Bima Saputra
// Kelas   : 1IA
// MK      : Prak. Logika dan pemrograman
#include <stdio.h>
#include <stdlib.h>

void hitung1(int * xP, int * yP, int * opratorP){
    switch (* opratorP)
    {
    case 1:
      printf("Hasil dari %d + %d = %d", *xP, *yP, *xP + *yP);
      break;
    case 2:
      printf("Hasil dari %d - %d = %d", *xP, *yP, *xP - *yP);
      break;
    case 3:
      printf("Hasil dari %d * %d = %d", *xP, *yP, *xP * *yP);
      break;
    case 4:
      printf("Hasil dari %d / %d = %d", *xP, *yP, *xP / *yP);
      break;
    case 5:
      printf("Hasil dari %d mod %d = %d", *xP, *yP, *xP % *yP);
      break;
    
    default:
      break;
    }
}

void hitung2(int * xP, int * opratorP){
    switch (* opratorP)
    {
    case 6:
      printf("x = %d \nHasil dari ++x = %d", --*xP, ++*xP);
      break;
    case 7:
      printf("x = %d \nHasil dari --x = %d", ++*xP, --*xP);
      break;
    
    default:
      break;
    }
}

int main() {
int i;
while (i == 0){
system("clear");

    int x, y, oprator;
    printf("Pilih operator aritmatika berikut ini!\n");
    printf("1. x + y \n2. x - y \n3. x * y \n4. x / y \n5. x mod y \n6. ++x \n7. --x \n\n");
    scanf("%d", &oprator);
    system("clear");


    if (oprator < 6 && oprator > 0)
    {
      printf("Masukan angka pertama : "); 
      scanf("%d", &x);
      printf("\nMasukan angka kedua : ");
      scanf("%d", &y); 
      printf("\n");
      hitung1(&x, &y, &oprator);
    }else if (oprator > 5 && oprator < 8)
    {
      printf("Masukan angka : "); 
      scanf("%d", &x);
      hitung2(&x, &oprator);
    }else
    {
      printf("Masukan anda salah!");
    }
    
    
    printf("\n\nUlangi? \n1. Ya \n2. Tidak\n");
    scanf("%d", &i);
    if (i==1)
    {
      i=0;
    }else{
      i++;    
    }
    system("clear");

}

  return 0;
}
