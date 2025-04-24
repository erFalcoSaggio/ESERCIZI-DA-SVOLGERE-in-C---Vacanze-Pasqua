#include <stdio.h>

int main() {
    int num, prev = 0, first = 1;
    printf("Inserisci una serie di numeri interi. Si fermerà se inserisci due numeri uguali consecutivi.\n");

    while (1) {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        if (!first && num == prev) {
            break;
        }
        prev = num;
        first = 0;
    }

    printf("Due numeri uguali consecutivi inseriti. Fine programma.\n");
    return 0;
}
