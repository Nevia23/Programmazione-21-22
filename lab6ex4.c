#include <stdio.h>

/*
* Scrivete la funzione "moltiplicaMatrici" che calcola la moltiplicazione tra
* due matrici quadrate di numeri interi.
*
* L'operazione consiste nell'effettuare il prodotto scalare tra le righe della
* prima matrice e le colonne della seconda.
*
* Esempio:
* |a b| |e f| ____ |a*e+b*g a*f+b*h|
* |c d| |g h|      |c*e+d*g c*f+d*h|
*
* La funzione riceve come argomenti i puntatori alle due matrici di input ed
* alla matrice in cui salvare il risultato
* 
* void moltiplicaMatrici(int dim, int *mat1, int *mat2, int *matRisultato)
*
* Per la consegna, utilizzare:
* mat1 = [[1,2,3],[4,5,6],[7,8,9]]
* mat2 = [[9,8,7],[6,5,4],[3,2,1]]
*
* Utilizzare il seguente codice per stampare il risultato:
* for (int i = 0; i < dim; i += 1){
*   for (int j = 0; j < dim; j += 1){
*       printf("%d\t", matRisultato[i][j]); 
*   }
*   printf("\n");
* }
*/

void moltiplicaMatrici(int dim, int *mat1, int *mat2, int *matRisultato);

int main (void) {

    int mat1[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int mat2[][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int dim = 3, matRisultato[dim][dim];

moltiplicaMatrici (dim, mat1[0], mat2[0], matRisultato[0]);

for (int i = 0; i < dim; i += 1){
   for (int j = 0; j < dim; j += 1){
       printf("%d\t", matRisultato[i][j]); 
   }
   printf("\n");
}

}

void moltiplicaMatrici (int dim, int *mat1, int *mat2, int *matRisultato) {

    int i, j, k, scalare;
    
    for (i = 0; i < dim; i += 1) {
        for (j = 0; j < dim; j += 1) {

            scalare = 0;

            for (k = 0; k < dim; k += 1) {
                scalare += (*((mat1 + i*dim) + k)) * (*((mat2 + k*dim) + j));
            }

            *(matRisultato  + i*dim + j) = scalare;

        }
    }
}