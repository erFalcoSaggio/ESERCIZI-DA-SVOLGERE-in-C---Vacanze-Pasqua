#include <stdio.h>

int main() {
    int num, count = 0;
    float somma = 0;

    printf("Inserisci numeri positivi. Termina con un numero negativo.\n");
    while (1) {
        printf("Numero: ");
        scanf("%d", &num);
        if (num < 0) break;
        somma += num;
        count++;
        printf("Media attuale: %.2f\n", somma / count);
    }

    return 0;
}
