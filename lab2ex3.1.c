#include<stdio.h>

/*
 * Dato un array di interi di lunghezza N, scrivere un programma che stampa
 * "L'array è palindromo" se l'array è palindromo o "L'array non è palindromo" se non lo è.
 * Un array è definito palindromo se invertendolo rimane uguale (es. [1, 2, 3, 2, 1] è palindromo)
 * ATTENZIONE: l'input non è più fisso, la dimensione N e i valori dell'array saranno forniti come input. 
*/

int main(){

    int N;

    //leggere da input grandezza array
    scanf("%d", &N);

    int array[N], ultimo_indice = N - 1;
    int contatore = 0, i;

    //leggere da input dati array
    for (i = 0; i < N; i++) {
        scanf("%d", array+i);
    }

    for (i = 0; i < N/2; i++) {

        if (array[i] == array[ultimo_indice - i]) {
            contatore++;
        }
    }

    if (contatore == N/2) {
        printf("L'array è palindromo");
    }
    else {
        printf("L'array non è palindromo");
    }
}