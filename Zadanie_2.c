#include <stdio.h>

int main() {
    
    int tablica[10];

    int *wskaznik = tablica;

    printf("Podaj 10 liczb:\n");
    for (int i = 0; i < 10; ++i) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", wskaznik + i);
    }

    printf("\nWprowadzone elementy tablicy:\n");
    for (int i = 0; i < 10; ++i) 
    {
        printf("%d ", *(wskaznik + i));
    }

    return 0;
}