#include <stdio.h>
#define N 5

int main() {
    int num, somma = 0;

    for (int i = 0; i < N; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        somma += num;
    }

    printf("La somma è: %d\n", somma);
    return 0;
}
