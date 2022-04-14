#include <stdio.h>

/*
 * Scrivere una funzione che, dato un array di stringhe,
 * restituisca la stringa di lunghezza massima. 
 * Nel main si dovrà stampare tale stringa.
 * Inoltre, si tratti in modo appropriato il caso in cui
 * il numero di stringhe nell'array sia zero. In particolare,
 * nel main si stampi "array vuoto\n". Se il numero di 
 * stringhe è maggiore di zero, utilizzare il seguente comando
 * nel main per la stampa della stringa più lunga:
 * 
 * printf("%s\n", stringa_lung_max(stringhe, num_stringhe));
 * 
 * Il numero di stringhe e le stringhe stesse sono lette da 
 * tastiera. 
 * 
 */

int lunghezza (char *A);

char * stringa_lung_max (char stringhe[][256], int num_stringhe);

int main(void) {

    int num_stringhe;

    scanf("%d", &num_stringhe);

    char stringhe[num_stringhe][256];

    for(int i=0; i < num_stringhe; i += 1) {
        scanf("%255s", stringhe[i]);
    }

    char *s_max = stringa_lung_max (stringhe, num_stringhe);

    printf("%s\n", (s_max==NULL)? "array vuoto" : s_max);
}

char * stringa_lung_max (char stringhe[][256], int dim) {

    if (dim <= 0) {
        return NULL;
    }

    int lung_max = lunghezza (stringhe[0]), i, temp, indice_max = 0;

    for (i = 1; i < dim; i += 1) {

        temp = lunghezza (stringhe[i]);

        if (temp > lung_max) {
            lung_max = temp;
            indice_max = i;
        }
    }

    return stringhe[indice_max];
}

int lunghezza (char *A) {

    int i;

    for (i = 0; A[i] != '\0'; i += 1) {
        
    }

    return i;
}