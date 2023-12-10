#include <stdio.h>

void zamiena(int *adres1, int *adres2)
{
    int temp = *adres1;
    *adres1 = *adres2;
    *adres2 = temp;
} 

int main() {
    
    int zmienna1 = 3;
    int zmienna2 = 16;

    printf("Przed zamianą miejscami:\n");
    printf("Zmienna 1: %d\n", zmienna1);
    printf("Zmienna 2: %d\n", zmienna2);

    zamiena(&zmienna1, &zmienna2);

    printf("\nPo zamianą miejscami:\n");
    printf("Zmienna 1: %d\n", zmienna1);
    printf("Zmienna 2: %d\n", zmienna2);

    

    return 0;
}