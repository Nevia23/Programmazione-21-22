/*
* La congettura di Collatz è un problema matematico ad oggi irrisolto.
*
* L'enunciato del problema dice quanto segue:
* 1. Scegliere un numero intero positivo n.
* 2. Se n è pari, si divida per due.
* 3. Se n è dispari, si moltiplichi per 3 e si aggiunga 1
* 4. Ripetere i punti 2-3 fino a che n = 1.
*
* L'algoritmo termina con n = 1 in quanto da quel momento i numeri iniziano
* a ripetersi ciclicamente. La congettura afferma che tutti i numeri interi
* positivi raggiungono ad un certo punto il valore n = 1.
*
* Creare la funzione ricorsiva SequenzaCollatz che stampa la sequenza di 
* numeri di Collatz e restituisce la quantità di numeri stampati.
*
* void SequenzaCollatz(int n)
*
* Utilizzare il numero 7 come test
* Output atteso: 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
*/

#include <stdio.h>

void SequenzaCollatz (int n);

int main (void) {

    int number;

    scanf ("%d", &number);

    SequenzaCollatz (number);
}

void SequenzaCollatz (int n) {

    if (n == 1) {

        printf ("%i\n", n);
        return;

    } else {

        printf ("%i ", n);

        if (n % 2 == 0) {
            return SequenzaCollatz (n / 2);
        } else {
            return SequenzaCollatz (n*3 + 1);
        }
    }
}