#include <stdio.h>

/* 
 * Scrivere una funzione che controlli se due array
 * sono uguali. 
 * Due array sono uguali se tutti i corrispondenti 
 * elementi (ovvero quelli nella stessa posizione) 
 * sono uguali. 
 * Ad esempio [1,2,3,4] e [1,2,3,4] sono uguali, mentre
 * [1,2,3,4] e [1,6,3,4] non lo sono. 
 * Il prototipo della funzione confronta_array() è
 * fornito di seguito. 
 */

int confronta_array(int *X, int *Y, int dim);
void leggi_array(int *X, int dim);

int main(void) {

    int dim;
    scanf("%d", &dim);
    int A[dim], B[dim];
    leggi_array(A, dim);
    leggi_array(B, dim);

    if (confronta_array(A, B, dim)==1)
        printf("Gli array sono uguali\n");
    else 
        printf("Gli array non sono uguali\n");
    
    return 0;
}


void leggi_array(int *X, int dim) {

    int i;

    for(i = 0; i < dim; i += 1) {
        scanf("%d", &X[i]);
    }
}

int confronta_array(int *X, int *Y, int dim) {

    int i, contatore = 0;

    for (i = 0; i < dim; i += 1) {
        
        if (X[i] == Y[i])
            contatore++;
    }

    if (contatore == dim)
        return 1;
    else
        return 0;
}