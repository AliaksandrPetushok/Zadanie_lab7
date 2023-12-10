#include <stdio.h>


int num1 = 42;


void wypiszAdresy(int liczba1, int liczba2) {
    printf("Adres liczby1: %p\n", (void*)&liczba1);
    printf("Adres liczby2: %p\n", (void*)&liczba2);
}

int main() {
    int num2 = num1;

    printf("Adres globalnej zmiennej: %p\n", (void*)&num1);
    printf("Adres lokalnej zmiennej: %p\n", (void*)&num2);

    wypiszAdresy(num1, num2);

    return 0;
}