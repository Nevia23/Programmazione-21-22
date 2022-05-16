#include "array.h"
#include "quicksort.h"


/*
* PRE: A array di interi, low e high sono rispettivamente indice più piccolo e più grande
* POST: restituisce l'indice di partizione
*/
int partition(int A[], int low, int high) {
    int pivot = A[high]; //seleziona l'ultimo elemento
    int i = (low - 1); // i è la posizione corretta dell'elemento pivot in A

    // scorre l'array e confronta i valori con il pivot
    for (int j = low; j < high; j++) {
        // se trova un elemento minore del pivot lo scambia con il maggiore puntato da i
        if (A[j] <= pivot) {
            i++;
            scambia(&A[i], &A[j]);
        }
    }

    // scambia l'elemento del pivot con il maggiore puntato da i
    scambia(&A[i+1], &A[high]);
    //ritorna l'indice di partizione
    return (i + 1);
}


/*
 * Implementazione dell'algoritmo QuickSort. 
 * low e high sono rispettivamente l' indice 
 * più piccolo e più grande in A tra i quali effettuare l'ordinamento. 
 * 
 * PRE: A array di N interi, 0 <= low <= high < N
 * POST: A è ordinato in modo crescente
 */
void quickSort(int A[], int low, int high) {
    if (low < high) {
        /*
          Trova il pivot t.c.
          gli elementi più piccoli del pivot sono alla sua sinistra
          gli elementi più grandi del pivot sono alla sua destra
        */
        int pivot = partition(A, low, high);
        
        // chiamata ricorsiva al sottoarrray sinistro e destro del pivot
        quickSort(A, low, pivot - 1);
        quickSort(A, pivot + 1, high);
    }
}

