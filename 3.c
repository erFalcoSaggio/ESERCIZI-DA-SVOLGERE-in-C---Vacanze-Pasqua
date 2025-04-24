#include <stdio.h>

int main() {
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Il numero %d è pari (divisibile per 2).\n", numero);
    } else {
        printf("Il numero %d è dispari (non è divisibile per 2).\n", numero);
    }

    return 0;
}
