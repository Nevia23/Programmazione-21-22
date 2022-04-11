#include <stdio.h>

/*
 * Scrivere una funzione ricorsiva che calcoli la 
 * lunghezza di una stringa. 
 * Scegliete voi il nome ed il prototipo della 
 * funzione. 
 * Nel main leggete da tastiera la stringa di cui
 * calcolar la lunghezza. 
 * Ad esempio se la stringa in input è "ciao", viene
 * stampato:
   4

 */

int lunghezza (char *X);

int main(void) {

    char s[100]; //lunghezza massima stringa in input
    scanf("%s", s);
    int lunghezza_s;

    lunghezza_s = lunghezza (s);
    printf("%d\n", lunghezza_s);

}

int lunghezza (char *X) {

    if (*X == '\0') {
      return 0;
    } else {
      return 1 + lunghezza (X + 1);
    }
}