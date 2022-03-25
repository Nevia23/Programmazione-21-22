#include<stdio.h>

/*
 * Dato un array di interi di lunghezza N, scrivere un programma che stampa
 * "Array palindromo" se l'array è palindromo o "Array non palindromo" se non lo è.
 * Un array è definito palindromo se invertendolo rimane uguale (es. [1, 2, 3, 2, 1] è palindromo)
 * 
 * Per questa implementazione ci rifaremo letteralmente alla
 * la definizione sopra: creeremo una funzione che 
 * inverte un array ed una che confronta due array. 
 * Realizzate le due funzioni secondo i prototipi forniti
 * ed infine usatele all'interno di una funzione 
 * palindromo che realizzi la consegna. 
 */

int confronta_array(int *X, int *Y, int dim);
void inverti(int *A, int dim);
int palindromo(int array[], int n);

int main(){
    int N,  i;
    
    //leggere da input grandezza array
    scanf("%d", &N);

    int array[N];

    //leggere da input dati array
    for(i = 0; i < N; i++){
        scanf("%d", array + i);
    }

    if(palindromo(array, N) == 1)
        printf("Array palindromo\n");
    else 
        printf("Array non palindromo\n");
    
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

void inverti(int *A, int dim) {

    int tmp, i;

    for (i = 0; i < dim / 2; i += 1) {

        tmp = A[i];
        A[i] = A[dim - 1 - i];
        A[dim - 1 - i] = tmp;
    }
}

int palindromo(int array[], int n) {

    int arraytwo[n], i;

    for (i = 0; i < n; i += 1) {

        arraytwo[i] = array[i];
    }

    inverti(arraytwo, n);
    return confronta_array(array, arraytwo, n);
}