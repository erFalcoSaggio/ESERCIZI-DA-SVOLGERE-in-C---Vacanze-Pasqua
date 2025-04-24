#include <stdio.h>

int main() {
    int anno, continua;

    do {
        printf("Inserisci un anno: ");
        scanf("%d", &anno);

        if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
            printf("L'anno %d è bisestile.\n", anno);
        } else {
            printf("L'anno %d NON è bisestile.\n", anno);
        }

        printf("Vuoi inserire un altro anno? (Inserisci un numero > 0 per continuare, 0 per uscire): ");
        scanf("%d", &continua);
    } while (continua > 0);

    return 0;
}
