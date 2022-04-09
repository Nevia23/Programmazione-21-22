#include <stdio.h>

/*
* Scrivete un programma che calcoli la trasposta di una matrice generica.
*
* L'operazione consiste nello scambiare le righe con le colonne.
*
* Esempio:
* |a b c| ____ |a d|
* |d e f|      |b e|
*              |c f|
*
* Per la consegna, utilizzare:
* matrice = [[1,2],[3,4],[5,6]]
*
* Utilizzare il seguente codice per stampare il risultato:
* for (int i = 0; i < colonne; i += 1){
*   for (int j = 0; j < righe; j += 1){
*       printf("%d ", matRisultato[i][j]); 
*   }
*   printf("\n");
* }
* 
*/

int main (void) {

    int righe = 3, colonne = 2, i, j;
    int matrice[][2] = {1, 2, 3, 4, 5, 6};
    int matRisultato[colonne][righe];

    for (i = 0; i < colonne; i += 1) {

        for (j = 0; j < righe; j += 1) {
            matRisultato[i][j] = matrice[j][i];
        }
    }

    for (i = 0; i < colonne; i += 1) {

        for (int j = 0; j < righe; j += 1) {
            printf("%d ", matRisultato[i][j]); 
        }

        printf("\n");
    }

}