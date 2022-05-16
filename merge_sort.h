/*
 * Implementazione dell' algoritmo di ordinamento merge sort. 
 */


// funzione ricorsiva di dimezzamento
void mergeSort(int arr[], int l, int r); 


// ordina ed unisce i sotto-array arr[l..m] ed arr[m+1..r]
void merge(int arr[], int l, int m, int r);
/*
 * PRE arr[l..m] e arr[m+1..r] sono ordinati
 * POST combina arr[l..r] è ordinato
 */
