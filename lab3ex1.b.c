#include <stdio.h>

/*
 * Scrivete una funzione che, dato un array di interi, inverta (riordini) i valori dell'array
 * scambiando ogni valore con il suo corrispondente partendo dal fondo. 
 * Ad esempio l'inverso dell'array [1,2,4] è [4,2,1]. 
 * Il programma deve stampare l'array aggiornato utilizzando
 * la funzione stampa_array() che vi forniamo noi.
 *
 * Per esempio se l'array è [1,2,3,4] si ottiene il seguente output: 
 * [ 4 3 2 1 ]
 *  
 * Per la consegna utilizzare l'array [1,2,3,4,5,6,7,8,9,10]
 * 
*/

void inverti(int *A, int dim);      //prototipo di funzione
void stampa_array(int *A, int dim); //prototipo di funzione

int main(void)
{
    const int dim = 10;
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    
    inverti(A, dim);
    stampa_array(A, dim);

    return 0;
}

void stampa_array(int *A, int dim) {

    int i;

    printf("[");
    for (i = 0; i < dim; i+=1)
        printf(" %d",A[i]);
    printf(" ]\n");

}

void inverti(int *A, int dim) {

    int tmp, i;

    for (i = 0; i < dim / 2; i += 1) {

        tmp = A[i];
        A[i] = A[dim - 1 - i];
        A[dim - 1 - i] = tmp;
    }
}