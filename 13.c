#include <stdio.h>
#include <math.h>

int main() {
    int num, max = 0, somma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        somma += num;
        if (i == 0 || num > max) {
            max = num;
        }
    }

    float media = somma / 5.0;
    printf("Maggiore: %d\nMedia: %.2f\nRadice quadrata della somma: %.2f\n", max, media, sqrt(somma));
    return 0;
}
