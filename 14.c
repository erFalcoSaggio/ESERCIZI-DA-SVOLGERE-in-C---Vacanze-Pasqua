#include <stdio.h>

int main() {
    int a, b;
    printf("Inserisci due numeri (larghezza e altezza): ");
    scanf("%d %d", &a, &b);

    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
