#ifndef ARRAY_H
#define ARRAY_H

/*
    Funzioni di utilità per array.
 */


void copia_array(int A[], int B[], int dim);
    /*
        PRE dim è il numero di elementi di A e B.
        POST B è una copia di A
     */


void count_frequencies(int A[], int dim, int freq[], int dim_freq);
    /*
        PRE dim_freq > max(A), freq ha dim_freq elementi, A ha dim elementi
        POST freq[i] equivale al numero di elementi di A uguali a i
     */


void inserisci_in_array(int A[], int start_index, int end_index);
    /*
        PRE size(A) > start_index > end_index
        POST se A=[3,4,5,6,7,8,9], start_index=4, end_index=1, dopo l'esecuzione A=[3,7,4,5,6,8,9] (l'elemento di indice 4, ovvero
        7, viene messo nella posizione end_index spostando ciascun
        elemento tra end_index e start_index di una posizione a destra)
     */


int max_value(int A[], int dim); 
    /*  
        PRE: A ha dim>0 elementi
        POST: calcola il valore massimo in A
     */


void reset_array(int A[], int dim); 
    /*
     * PRE: A ha dimensione almeno dim
     * POST per ogni i tale che 0<=i<dim si ha A[i]=0
     */


void scambia(int *a, int *b);
    /*
     * PRE: a e b puntatori a interi
     * POST: scambiati i valori degli oggetti puntati da a e b
     */


void stampaArray(int A[], int dim);
    /*
     * PRE: A ha dimensione almeno dim
     * POST stampa a video gli elementi di A su 
     * una riga separati da spazi e poi va a capo. 
     */


#endif
