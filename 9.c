#include <stdio.h>

int main() {
    int num, somma_pari = 0, somma_dispari = 0;

    for (int i = 0; i < 10; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            somma_pari += num;
        } else {
            somma_dispari += num;
        }
    }

    printf("Somma dei pari: %d\nSomma dei dispari: %d\n", somma_pari, somma_dispari);
    return 0;
}
