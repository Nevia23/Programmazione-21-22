#include <stdio.h>

/*
 * Stampare la somma dei numeri pari tra 1 
 * ed n inclusi. 
 * 
 * Es. se n=5 stampa
 * La somma dei numeri pari minori di 5 è 6
 * 
 * Per la consegna, utilizzare n=13
 */

int main () {

    int n = 12;
    int i, somma = 0;

    for (i=2; i <= n; i++) {
        
        if (i%2 == 0) {
            somma = somma + i;
        }
    }
    printf("La somma dei numeri pari minori di %d è %d\n", n, somma);
}
