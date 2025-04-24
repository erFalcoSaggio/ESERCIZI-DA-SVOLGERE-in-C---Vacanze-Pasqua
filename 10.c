#include <stdio.h>

int main() {
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    printf("Cifre del numero %d:\n", numero);
    while (numero > 0) {
        int cifra = numero % 10;
        printf("%d è %s\n", cifra, (cifra % 2 == 0) ? "pari" : "dispari");
        numero /= 10;
    }

    return 0;
}
