#include <stdio.h>

int main() {
    int num, somma = 0;

    printf("Inserisci numeri positivi. Termina con un numero <= 0.\n");
    while (1) {
        printf("Numero: ");
        scanf("%d", &num);
        if (num <= 0) break;
        somma += num;
        printf("Somma progressiva: %d\n", somma);
    }

    return 0;
}
