#include <stdio.h>

/* 
 * Definire una funzione che, dati due 
 * interi: base ed esponente, restituisce 
 * base elevata ad esponente. Il prototipo della
 * funzione è il seguente: 
 * 
 * int potenza(int base, int esponente);
 * 
 * Es. se l'input è: "2 3" stampa 
 * 8
 * 
 */

int potenza (int base, int esponente); //prototipo di funzione

int main (void) {

    int base, esp;
    //A tempo di esecuzione, fornire due interi separati da spazio e seguiti da Invio
    scanf("%d %d", &base, &esp);

    printf("%d\n", potenza(base, esp));

}

int potenza (int base, int esponente) {

    int i, prodotto = 1;

    for (i = 0; i < esponente; i++) {

        prodotto = prodotto * base;
    }

    return prodotto;
}