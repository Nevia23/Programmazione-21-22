#include <stdio.h>
#include <assert.h>
#include "array.h"

/*
    Funzioni di utilità per array.
 */

void copia_array(int A[], int B[], int dim) {
    /*
        PRE dim è il numero di elementi di A e B.
        POST B è una copia di A
     */
    for(int i=0; i<dim; i+=1)
        B[i] = A[i];
}

void count_frequencies(int A[], int dim, int freq[], int dim_freq) {
    /*
        PRE freq ha dim_freq elementi, A ha dim elementi, dim_freq > max(A)
        POST freq[i] equivale al numero di elementi di A uguali a i
     */
    reset_array(freq, dim_freq);
    for(int i=0; i<dim; i+=1) {
        freq[A[i]]+=1;
    }

}


void inserisci_in_array(int A[], int start_index, int end_index) {
    /*
        PRE size(A) > start_index > end_index
        POST se A=[3,4,5,6,7,8,9], start_index=4, end_index=1, dopo l'esecuzione A=[3,7,4,5,6,8,9] (l'elemento di indice 4, ovvero
        7, viene messo nella posizione end_index spostando ciascun
        elemento tra end_index e start_index di una posizione a destra)
     */
    int value = A[start_index];
    int index = start_index;
    while (index != end_index) {
        A[index] = A[index - 1];
        index--;
    }
    A[end_index] = value;
}


int max_value(int A[], int dim) {
    /*  
        PRE: A ha dim>0 elementi
        POST: calcola il valore massimo in A
     */
    assert(dim>0);
    int max = A[0];
    for(int i=1; i<dim; i+=1) {
        if (A[i]>max) 
            max = A[i];
    }
    return max;

}


void reset_array(int A[], int dim) {
    /*
     * PRE: A ha dimensione almeno dim
     * POST per ogni i tale che 0<=i<dim si ha A[i]=0
     */
    for(int i=0; i<dim; i+=1)
        A[i] = 0;
}


/*
 * PRE: a e b puntatori a interi
 * POST: scambia i valori degli oggetti puntati
 */
void scambia(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}


/*
 * PRE: A ha dimensione almeno dim
 * POST stampa a video gli elementi di A su 
 * una riga separati da spazi e poi va a capo. 
 */
void stampaArray(int A[], int dim) {
    for (int i = 0; i < dim; i++)
        printf("%d ", A[i]);
    printf("\n");
}
