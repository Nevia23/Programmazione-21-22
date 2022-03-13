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



int main (void) {

    int n;
    //leggere da input n
    scanf("%d", &n);

    printf("Somma dei numeri dispari minori di n: %d\n", sommaDispariN(n));

}
