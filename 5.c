#include <stdio.h>

int main() {
    int limite;
    printf("Inserisci un numero: ");
    scanf("%d", &limite);

    printf("Numeri pari da 0 a %d:\n", limite);
    for (int i = 0; i <= limite; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
