#include<stdio.h>

/* Dato un Array A di dimensione len, filtrare tutti gli elementi f.
 * Questo significa restituire l'array compattato composta da tutti gli elementi originali di A meno gli elementi uguali ad f.
 * ES: [1,24,3,4] 3 -> [1,24,4]
 * ES: [1,2,1,3,4,6] 1 -> [2,3,4,6]
*/

int main(){
        unsigned int len;
    int f;

    scanf("%2u", &len);
    int A[len];
    for(int i = 0; i<len; i=i+1){
        scanf("%d", A+i);
    }

    scanf("%d", &f);

    // definire ed utilizzare qui una funzione void filter(...)

    printf("[");
    for (int i = 0; i<len; i+=1)
        printf(" %d",A[i]);
    printf(" ]\n");

}
