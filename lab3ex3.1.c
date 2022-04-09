#include<stdio.h>

/* Dato un Array A di dimensione len, filtrare tutti gli elementi f.
 * Questo significa restituire l'array compattato composta da tutti gli elementi originali di A meno gli elementi uguali ad f.
 * ES: [1,24,3,4] 3 -> [1,24,4]
 * ES: [1,2,1,3,4,6] 1 -> [2,3,4,6]
*/

void filter (int* X, unsigned int* X_len, int f);

int main(){
    
    unsigned int len;
    int f, i;

    scanf("%2u", &len);
    
    int A[len];

    for(i = 0; i < len; i += 1){
        scanf("%d", A + i);
    }

    scanf("%d", &f);

    filter(A, &len, f);

    printf("[");

    for (i = 0; i < len; i += 1) {
        printf(" %d", A[i]);
    }      

    printf(" ]\n");

}

void filter (int* X, unsigned int* X_len, int f) {   

    int *compact = X;
    unsigned int size = *X_len;
    int i;

    for (i = 0; i < size; i += 1) {
        
        if (*(X + i) != f) {

            *compact = *(X + i);
            compact += 1;

        } else {
            *X_len -= 1;
        }
    }
}

/* VERSIONE NON OTTIMALE
unsigned int filter (int* X, unsigned int X_len, int f);

int main(){
    
    unsigned int len;
    int f, i;

    scanf("%2u", &len);
    
    int A[len];

    for(i = 0; i < len; i += 1){
        scanf("%d", A + i);
    }

    scanf("%d", &f);

    len = filter (A, len, f);

    printf("[");

    for (i = 0; i < len; i += 1) {
        printf(" %d", A[i]);
    }      

    printf(" ]\n");

}

unsigned int filter (int* X, unsigned int X_len, int f) {

    int i, count = 0;

    for (i = 0; i < X_len; i += 1) {
        if (X[i] == f) {
            count += 1;
        }
    }

    if (count == 0) {
        return X_len;
    } else {

        count = 0;

        for (i = X_len - 1; i >= 0; i -= 1) {

            if (X[i] == f) {

                int j;

                count += 1;

                for (j = i; j <= X_len - count; j += 1) {
                    X[j] = X[j + 1];
                }
            }
        }

        X_len = X_len - count;

        return X_len;
    }
}
*/