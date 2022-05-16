/*
* Implementare l'algoritmo di merge sort per ordinare un array.
* Merge Sort è un algoritmo divide-et-impera che divide iterativamente
* l'array di input in due metà per poi riunirle ordinate
*
* Come test utilizzare il seguente array:
* {12, 11, 13, 5, 6, 7, 43, 56, 10, 11}
*
* Suggerimento: l'algoritmo di merge sort può essere scomposto
* in due funzioni. La funzione mergeSort() che ricorsivamente
* divide a metà l'array di input e la funzione merge() che
* si occupa di ordinare e riunire i vari pezzi. 
*/
#include "array.h"
#include "merge_sort.h"

// ordina ed unisce i sotto-array ordinati arr[l..m] ed arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{   //l: puntatore all'elemento corrente del sottoarray sinistro
    //m: fine sottoarray sinistro
    int l1 = m+1; //puntatore all'elemento corrente del sottoarray destro
    // sono già ordinati se la metà sinistra termina con un
    // valore inferiore a quello con cui inizia la metà destra
    if (arr[m] <= arr[l1])
        return;
    // Scorro le due metà
    while (l <= m && l1 <= r) {
        // non sposto nulla se a sinistra sono già minore di destra
        if (arr[l] <= arr[l1])
            l++;
        else {
            inserisci_in_array(arr, l1, l); //sposto a destra gli elementi arr[l..l1-1] e metto l'elemento l1 in l. 
            // Aggiorno gli indici l,m,l1 in modo che l punti
            l++; m++; l1++;
        }
    }
}


// funzione ricorsiva di dimezzamento
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Calcolo della metà per evitare overflow con l,r grandi
        int m = l + (r - l) / 2;
        // Chiamata ricorsiva sulle due metà
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        // Ordino e riunisco
        merge(arr, l, m, r);
    }
}
