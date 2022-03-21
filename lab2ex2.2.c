#include <stdio.h>

/*
* Scrivete un programma che trovi tutti i numeri perfetti tra due estremi. Sia estremi che i numeri trovati dovranno essere interi.
* Un numero perfetto si definisce tale quando la somma di tutti i suoi divisori eccetto se stesso è uguale al sumero stesso.
*
* Il programma deve stampare i valori trovati, utilizzare
* printf("Il numero %d è perfetto\n", limite_inferiore);
*
* Per la consegna utilizzare il seguenti limiti:
* limite_inferiore = 4
* limite_superiore = 30
*/

int perfectcheck (int numero); //prototipo di funzione

int main (void) {

    int limite_inferiore, limite_superiore = 30;

    for (limite_inferiore = 4; limite_inferiore <= limite_superiore; limite_inferiore++) {

        if (perfectcheck(limite_inferiore) == 1) {
            printf("Il numero %d è perfetto\n", limite_inferiore);
        }
    }
}

int perfectcheck (int numero) {

    int somma = 0, divisore = numero - 1;

    while (divisore > 0) {

        if (numero % divisore == 0){
            somma = somma + divisore;
        }
        
        divisore--;
    }

    if (somma == numero) {
        return 1;
    }
    else {
        return 0;
    }
}