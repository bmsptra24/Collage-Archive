#include <stdio.h>

int main(){
    int a = 10, b = 5, c;

    c = a + b;
    printf("Nilai 1 - Nilai C adalah %d\n", c);

    c = a - b;
    printf("Nilai 2 - Nilai C adalah %d\n", c);
    
    c = a * b;
    printf("Nilai 3 - Nilai C adalah %d\n", c);

    c = a / b;
    printf("Nilai 4 - Nilai C adalah %d\n", c);

    c = b % a;
    printf("Nilai 5 - Nilai C adalah %d\n", c);

    c = a++;
    printf("Nilai 6 - Nilai C adalah %d\n", c);

    c = a--;
    printf("Nilai 7 - Nilai C adalah %d\n", c);

    c = b++;
    printf("Nilai 8 - Nilai C adalah %d\n", c);
    
    c = b--;
    printf("Nilai 9 - Nilai C adalah %d\n", c);

    return 0;
}