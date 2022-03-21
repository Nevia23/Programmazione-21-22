#include <stdio.h>

/*
* Scrivete un programma che ordini un array di numeri interi in ordine
* crescente.
*
* Il programma deve stampare l'array ordinato al termine dell'esecuzione.
* Utilizzare: printf("Array[%d] : %d\n", i, array[i]);
*
* Per la consegna, utilizzare il seguente array:
* [3, 5, 7, 1, 2, 9, 4, 6, 0, 8]
*/

int main (void) {

    int array[] = {3, 5, 7, 1, 2, 9, 4, 6, 0, 8};
    int saved, min_indice, i, j;

    for (i = 0; i < 10; i++) {

        min_indice = i;
        saved = array[i];

        for (j = i; j < 10; j++) {

            if (array[j] < array[min_indice]) {
                min_indice = j;
            }
        }

        array[i] = array[min_indice];
        array[min_indice] = saved;
    }

    for (i = 0; i < 10; i++) {
        printf("Array[%d] : %d\n", i, array[i]);
    }
}