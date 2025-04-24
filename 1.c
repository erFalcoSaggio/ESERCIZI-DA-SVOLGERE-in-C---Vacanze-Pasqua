#include <stdio.h>

int main() {
    int id_cliente;
    float unita, costo_unitario, prezzo, sovrapprezzo = 0.0;

    // Input
    printf("Inserisci l'ID del cliente: ");
    scanf("%d", &id_cliente);

    printf("Inserisci la quantità di elettricità consumata (in unità): ");
    scanf("%f", &unita);

    // Determinazione del costo per unità
    if (unita < 200) {
        costo_unitario = 1.20;
    } else if (unita < 400) {
        costo_unitario = 1.50;
    } else if (unita < 600) {
        costo_unitario = 1.80;
    } else {
        costo_unitario = 2.00;
    }

    // Calcolo del prezzo totale
    prezzo = unita * costo_unitario;

    // Calcolo del sovrapprezzo, se applicabile
    if (prezzo > 300) {
        sovrapprezzo = prezzo * 0.15;
        prezzo += sovrapprezzo;
    }

    // Output
    printf("\n--- Bolletta Elettricità ---\n");
    printf("ID Cliente: %d\n", id_cliente);
    printf("Elettricità consumata: %.2f unità\n", unita);
    printf("Costo per unità: %.2f euro\n", costo_unitario);
    printf("Sovrapprezzo: %.2f euro\n", sovrapprezzo);
    printf("Prezzo totale da pagare: %.2f euro\n", prezzo);

    return 0;
}
