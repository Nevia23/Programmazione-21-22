#include <stdio.h>

/*
 * Scrivere una funzione che dati: 
 * - due array X e Y ordinati in modo crescente
 * - le loro dimensioni dim_X e dim_Y
 * - un terzo array Ord di dimensione dim_X+dim_Y
 * immetta i valori di X e Y in Ord in modo che anche
 * Ord risulti ordinato in modo crescente. Il prototipo
 * della funzione è il seguente
 *
 void combina_array(int *X, int dim_X, int *Y, int dim_Y, int *Ord)
 * 
 * Ad esempio se X={3,6,8} e Y={4,5,7,9}, 
 * Ord={3,4,5,6,7,8,9}
 * 
 */


void combina_array(int *X, int dim_X, int *Y, int dim_Y, int *Ord) {
    /* 
    PRE: X, di dimensione dim_X ed Y, di dimensione dim_Y, sono ordinati in modo crescente; Ord è di dimensione dim_X+dim_Y
    POST: Ord contiene gli elementi di X e Y, Ord è ordinato in modo crescente  
    */

   int i = 0;

   if (dim_X == 0 && dim_Y != 0) {
       while (dim_Y != 0) {
           *(Ord + i) = *(Y + i);
           i += 1;
           dim_Y -= 1;
       }
       return;
   }

   if (dim_Y == 0 && dim_X != 0) {
       while (dim_X != 0) {
           *(Ord + i) = *(X + i);
           i += 1;
           dim_Y -= 1;
       }
       return;
   }

   if (*X <= *Y) {
       *Ord = *X;
       return combina_array (X + 1, dim_X - 1, Y, dim_Y, Ord + 1);
   }
   if (*Y < *X) {
       *Ord = *Y;
       return combina_array (X, dim_X, Y + 1, dim_Y - 1, Ord + 1);
   }    
}

int main(void) {

    int X[] = {3,6,8};
    int Y[] = {4,5,7,9};
    int Z[7];

    combina_array(X, 3, Y, 4, Z);
    for(int i=0; i<7; i+=1) {
        printf(" %d", Z[i]);
    }
    printf("\n");
}