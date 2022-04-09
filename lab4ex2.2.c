#include <stdio.h>

/*
Data una matrice di dimensioni arbitrarie, definire una funzione calcola_somma che salva in un array somma 
la somma degli elementi di ciascuna colonna della matrice.

(somma[i] = "somma degli elementi dell'i-esima colonna della matrice")

e.g.:   [1 2 3

         4 5 6    -> [12, 15, 18]

         7 8 9]

Notare che la matrice è passata alla funzione tramite un puntatore int* al suo primo elemento ed è quindi 
come se la matrice fosse appiattita, formando un vettore lungo n-colonne*n-righe.

E' perciò necessario usare l'aritmetica dei puntatori. 
*/

void leggi_array(int * array, unsigned int dim){
    for(int i = 0; i< dim; i=i+1){
        scanf("%d", array+i);
    }
}

void calcola_somma(int *matrix, unsigned int righe, unsigned int colonne, int* somma){
    // vostro codice qui
}

int main(){
    int righe, colonne;

    scanf("%u", &righe);
    scanf("%u", &colonne);

    int mat[righe][colonne];

    leggi_array(*mat, righe*colonne);

    // array contenente somme per ogni colonna
    int somma[colonne];
    
    calcola_somma(*mat, righe, colonne, somma);    

    for(int i = 0; i < colonne; i = i+1){
        printf("La somma della colonna %d è %d\n", i, somma[i]);
    } 
}
