#include <stdio.h>

/*
* Date due stringhe, scrivere una funzione che passi come parametri queste stringhe e le concateni.
* La concatenazione deve avvenire nella prima stringa, senza l'utilizzo di altre variabili di tipo array.
* La funzione dovrà sfruttare quanto visto con i puntatori per l'accesso in memoria (non usare S1[i]).
* Una volta fatto ciò, il programma deve stampare la stringa concatenata.
* 
* Per la consegna, utilizzare le seguenti stringhe:
* "laboratorio" e " programmazione"
* 
* Per la stampa usare:
* printf("Stringa concatenata: %s",S1);
*/

void concatena (char* S1, char* S2);

int main (void) {

    char S1[50] = "laboratorio",
         S2[20] = " programmazione";

    concatena (S1, S2);

    printf("Stringa concatenata: %s",S1);

    return 0;
}

void concatena (char* S1, char* S2) {

    int i = 0, j;

    while (*(S1 + i) != '\0') {
        i += 1;
    }

    for (j = 0; *(S2 + j) != '\0'; j+=1) {
        *(S1 + i + j) = *(S2 + j);
    }

    *(S1 + i + j) = '\0';

    return;
}