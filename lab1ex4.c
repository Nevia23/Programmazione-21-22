//RISOLTO

#include <stdio.h>

/*
 * Data la costante LIMIT, stampare la serie di 
 * fibonacci, fib(k), a partire da fib(0) fino al
 * valore fib(k) più grande t.c. fib(k) < LIMIT.
 * 
 * La funzione di Fibonacci è definita per casi:
 * 
 * fib(0) = 0
 * fib(1) = 1
 * fib(i) = fib(i-1) + fib(i-2)
 * 
 * Es. se LIMIT = 25 stampa
 * 0
 * 1
 * 1
 * 2
 * 3
 * 5
 * 8
 * 13
 * 21
 * 
 * Per la consegna assegnare LIMIT=56
 * 
 */

int main() {

    int LIMIT=56, i=0;
    int precedente = 0;
    int corrente = 1;

    while (i<LIMIT) {

        printf("%d\n", i);

        precedente = corrente;
        corrente = i;
        i = precedente + corrente;
    }

}

