#include <stdio.h>

/*
 * Definire una funzione ricorsiva che confronti
 * albeticamente due stringhe. La funzione prende
 * le stringhe come argomento e restituisce -1 se
 * la prima è minore della seconda, 0 se sono uguali,
 * 1 se la seconda è minore della prima. 
 * Ad esempio: ciao < dado; ciao > cia; ciao = ciao
 * Le due stringhe sono lette da tastiera nel main. 
 * Se le stringhe in input sono "ciao", "hello", si
 * stampa:  
   ciao < hello

 * In caso di dubbi sulla definizione di confronto
 * alfabetico tra due caratteri, fate riferimento al
 * risultato del confronto dei valori numerici
 * associati ai caratteri stessi, ovvero usate 
 * semplicemente 'a' < 'b' (vero), 'A'<'a' ecc... 
 * 
 */


int confronta_stringhe(char *s1, char *s2); 


int main(void) {

    char a[50];
    char b[50];
    
    scanf("%s\n%s", a, b);

    printf("%s %c %s\n", a, 61+confronta_stringhe(a, b), b); //valori numerici dei caratteri: 60(<), 61(=), 62(>)
    
}
