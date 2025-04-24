#include <stdio.h>

int main() {
    int n, num, somma = 0;
    printf("Quanti numeri vuoi sommare? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        somma += num;
    }

    printf("La somma è: %d\n", somma);
    return 0;
}
