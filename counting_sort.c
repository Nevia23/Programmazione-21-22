#include "counting_sort.h"
#include "array.h"


void counting_sort(int A[], int dim) {
    /*
        Implementazione dell'algoritmo di ordinamento Counting Sort. 

        PRE A ha dim elementi, tutti gli elementi di A sono >= 0
        POST A è ordinato in modo crescente
     */
    int i, j, dim_freq = max_value(A, dim) + 1;
    if(dim_freq==1) // l'elemento massimo è zero, l'array è già ordinato
        return;     // ma se proseguissimo non potremmo inizializzare 
                    // freq come un array con 0 elementi
    int freq[dim_freq];
    count_frequencies(A, dim, freq, dim_freq);
    j=0;
    for(i=0; i<dim_freq; i+=1) {
        while (freq[i]>0) {
            A[j]=i;
            freq[i]--; j++;
        }
    }
}
