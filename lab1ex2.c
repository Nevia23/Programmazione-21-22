//RISOLTO

#include <stdio.h>

/*
 * Stampare l'insieme dei divisori non banali 
 * di un numero x>0. Un divisore non banale è 
 * un divisore diverso da 1 e x. 
 * Inoltre, se x è primo, stampare 
 * "il numero x è primo".
 * 
 * Es. se x=5 stampa
 * Il numero 5 è primo
 * 
 * Es. se x=6 stampa
 * Il numero 6 è divisibile per 2
 * Il numero 6 è divisibile per 3
 * 
 * Per la consegna utilizzare x=63
 * 
 */

int main() {

    int x = 63, i;
    int contatore = 0;

    for (i=2; i<x; i++) {

        if(x%i == 0){

            printf("Il numero %d è divisibile per %d\n", x, i);

            contatore++;
        } 
    }

    if (contatore == 0) {

        printf("Il numero %d è primo", x);
    }
}
