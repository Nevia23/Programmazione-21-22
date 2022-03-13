//RISOLTO

#include <stdio.h>

/*
 * Stampare una piramide rovesciata utilizzando il carattere #,  
 * in modo che la punta della piramide sia in basso e la base in alto. 
 * Per esempio se ALTEZZA=3 si ottiene il seguente output: 
 * 
 * #####
 *  ###
 *   #
 * 
 * Per la consegna utilizzare ALTEZZA=6
 * 
 */

int main (void) {

    int ALTEZZA=6, i=1, j=1;
    int riga, colonna, num_spazi, num_simboli;

    for (riga=1; riga<=ALTEZZA; riga++) {

        num_spazi = riga - 1;
        num_simboli = ALTEZZA*2 - num_spazi*2 - 1;

        for(i=0; i<num_spazi; i++) {
            printf(" ");
        }

        for(i=0; i<num_simboli; i++) {

            printf("#");
        }

        printf("\n");
    }

}
