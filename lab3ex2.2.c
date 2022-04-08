#include <stdio.h>

/*
* Dato un array di interi positivi (maggiori di 0), un nuovo valore e un indice, incrementare l'array inserendo il nuovo valore nella posizione indicata dall'indice.
* Il programma deve poi stampare il nuovo array. 
* Il programma non deve utilizzare nuove variabili di tipo array, ma modificare l'array di input.
* Inoltre il programma deve sfruttare la conoscenza dei puntatori per accedere agli elementi (non usare A[i] eccetto che per la stampa).
* 
* Per esempio se l'array fosse [2,11,14,3,6,8], il nuovo valore 7 e la posizione 3, l'array incrementato e la stampa attesa dal programma sarebbe:
* "2, 11, 14, 7, 3, 6, 8"
*
* Notate che l'array deve essere dichiarato di dimensione
* maggiore del numero di elementi con cui si inizializza 
* (perché andremo ad inserirne 1), perciò si assume che le 
* restanti posizioni dell'array siano inizializzate a 0. 
* Ad esempio se l'array sopra è stato dichiarato come 
* int[9] allora sarebbe inizializzato come 
* int a[9] = {2,11,14,3,6,8,0,0,0}. 
*
* Per la consegna, utilizzare:
* array = [1,8,4,7,12,3,2]
* valore = 5
* posizione = 4
*/


void incrementa_array(int* A, int length, int x, int pos){

    int i = 0, y = 0;
    
    while (*(A + i) != y) {
        i += 1;
    }

    while (i >= pos) {
        *(A + i + 1) = *(A + i);
        i -= 1;
    }

    *(A + pos) = x;
    
    return;
}

int main()
{
    int length = 10;
    int A[10] = {1,8,4,7,12,3,2,0,0,0}; 
    int x = 5;
    int pos = 4, i;
    
    incrementa_array(A, length, x, pos);
    
    printf("[");

    for (i = 0; (i < length) && (A[i]!= 0); i += 1) {
        printf(" %d", A[i]);
    }

    printf(" ]\n");

    return 0;
}