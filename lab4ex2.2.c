#include <stdio.h>

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
