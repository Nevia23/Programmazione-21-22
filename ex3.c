#include <stdio.h>

/*
 * Scrivete un programma che definisca una costante ALTEZZA=x e disegni un triangolo rettangolo di base ed 
 * altezza x, utilizzando il carattere #. 
 * In particolare il programma stamperà # una volta per la prima riga, # due volte per la seconda riga, 
 * fino a stampare # x volte per la x-esima riga. 
 *
 * Per esempio se ALTEZZA=3 si ottiene il seguente output: 
 * #
 * ##
 * ###
 * 
 * Per la consegna utilizzare ALTEZZA=13
 */
 

int main () {

    int ALTEZZA = 13, i, j;

    for (i=1; i<=ALTEZZA; i++) {

        for (j=1; j<=i; j++) {

            printf("#");
        }
        
        printf("\n");
    }
}
