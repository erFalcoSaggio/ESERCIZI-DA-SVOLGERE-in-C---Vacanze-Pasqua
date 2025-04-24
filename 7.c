#include <stdio.h>

int main() {
    int n, num, pari = 0, dispari = 0;
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }
    }

    printf("Hai inserito %d numeri pari e %d numeri dispari.\n", pari, dispari);
    return 0;
}
