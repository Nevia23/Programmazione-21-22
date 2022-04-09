#include<stdio.h>

/* Dato un Array A di dimensione len, filtrare tutti gli elementi f.
 * Questo significa restituire l'array compattato composta da tutti gli elementi originali di A meno gli elementi uguali ad f.
 * ES: [1,24,3,4] 3 -> [1,24,4]
 * ES: [1,2,1,3,4,6] 1 -> [2,3,4,6]
*/

void filter(int *A, unsigned int *dim, int f){
    int *compat = A;
    unsigned int sz = *dim;

    for(int i=0; i<sz; i =i+1){
        if(*(A+i)!=f){
            *compat = *(A+i);
            compat=compat+1;
        }
        else *dim = *dim - 1;
    }
}

int main(){

    unsigned int len;
    int f;

    scanf("%2u", &len);
    int A[len];
    for(int i = 0; i<len; i=i+1){
        scanf("%d", A+i);
    }

    scanf("%d", &f);

    filter(A, &len, f);

    printf("[");
    for (int i = 0; i<len; i+=1)
        printf(" %d",A[i]);
    printf(" ]\n");

}