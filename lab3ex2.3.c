#include<stdio.h>

/* Date due stringhe N e T, trovare la posizione del primo match di T in N.
 * Trovare un match significa trovare una sottosequenza di caratteri adiacenti in N uguali a T.
 * (ovvero una *(N+k)==*T, *(N+(k+1))==*(T+1), ..., *(N+(k+n))==*(T+n) dove n è (la lunghezza di T)-$
 * La posizione del match è uguale a quella del primo carattere matchato in N.
 * ES: N="programmazione2022", T="gra" -> "Match found at position 3"
 * ES: N="programmazione2020", T="ez" -> "No match found"
*/

unsigned int len (char* N);

int main(){

    /* Nota:
     * 256 è la dimensione massima della stringa ma il numero di caratteri può essere inferiore
     * implementare una funzione len per misurare la lunghezza di una stringa
     * (contare quanti caratteri ci sono prima del delimiter "\0")*/

    char N[256];
    char T[256];

    scanf("%255s", N);
    scanf("%255s", T);

    int N_len = len(N), T_len = len(T);
    int i, j = 0;

    for (i = 0; i < N_len && j < T_len; i += 1) {

        if (N[i] == T[j]) {
            j += 1;
        } else {
            i = i - j;
            j = 0;
        }
    }

    if (j == T_len) {
        int match = i - T_len;
        printf("Match found at position %d\n", match);
    } else {
        printf("No match found\n");
    }
}

unsigned int len (char* N) {

    unsigned int contatore = 0;

    while (*(N + contatore) != '\0') {
        contatore += 1;
    }

    return contatore;
}