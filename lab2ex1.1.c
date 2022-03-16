#include <stdio.h>

/*
 * Definire una funzione che, dato un parametro intero n,
 * restituisca la somma dei numeri naturali dispari fino ad n incluso:
 * 
 * int sommaDispariN(int n);
 *  
 * Nel main stampare la somma restituita a video. 
 * Ad es. se n=8 stampa (notate l'a capo finale)
 * Somma dei numeri dispari minori di n: 16
 * 
 */

int sommaDispariN(int n); //prototipo di funzione

int main (void) {

    int n;
    //leggere da input n
    scanf("%d", &n);

    printf("Somma dei numeri dispari minori di n: %d\n", sommaDispariN(n));

}

//definizione della funzione
int sommaDispariN(int n) {

    int i, somma = 0;

    if (n % 2 == 0) {

        for (i = n-1; i > 0; i = i-2) {
            somma = somma + i;
        }

        return somma;
        
    } else {

        for (i = n-2; i > 0; i = i-2) {
            somma = somma + i;
        }

        return somma;
    }
}