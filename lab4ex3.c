#include <stdio.h>

/*
 * Scrivete un programma che dato un array di interi positivi, calcoli quante 
 * sono le occorrenze di ogni valore presente nell'array.
 * Notate che i valori dell'array, purché positivi, 
 * possono essere grandi a piacere. 
 * Il programma deve poi stampare quanto trovato, utilizzando il comando:
 * printf("il valore %d appare %d volte\n", A[i], freq[i]);
 * 
 * Per esempio se l'array è [1,1,2,3,1,2] si ottiene il seguente output:
 * il valore 1 appare 3 volte
 * il valore 2 appare 2 volte
 * il valore 3 appare 1 volte
 * 
 * Per la consegna usare l'array [2,5,6,2,7,6,6,7,7,7]
 * 
 */

int main () {

    int A[] = {2,5,6,2,7,6,6,7,7,7}, lenght = 10;
    int freq[10] = {0};
    int counter, i, j;

    for (i = 0; i < lenght; i += 1) {
        
        counter = 1;
        
        if (freq[i] != -1) {

            for (j = i + 1; j < lenght; j += 1) {

                if (A[j] == A[i]) {
                    counter += 1;
                    freq[j] = -1;
                }
            }
            
            freq[i] = counter;
        }
    }

    for (i = 0; i < lenght; i += 1) {
        if (freq[i] != -1) {
            printf("il valore %d appare %d volte\n", A[i], freq[i]);  
        }
    }
}