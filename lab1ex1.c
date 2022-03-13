//RISOLTO

#include <stdio.h>

/*
 * Data una costante intera SOGLIA, stampare il più piccolo numero
 * maggiore di SOGLIA che non sia divisibile per i seguenti numeri: 2, 3, 5. 
 * Es. se SOGLIA = 4, il programma stampa 
 * 7
 * 
 * Per la consegna, utilizzare SOGLIA = 63
 * 
 */

int main () {

    int SOGLIA = 63;
    int i = SOGLIA + 1;

    while (i%2 == 0 || i%3 == 0 || i%5 == 0) {
        i++;
    }
    printf("%d", i);

}
