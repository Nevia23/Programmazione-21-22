#include <stdio.h>

/* 
* Scrivere un programma che dato in input una stringa, verifichi con una funzione ricorsiva se è palindroma.
* Il programma deve poi stampare quanto trovato, utilizzare:
* if ( stringa_palindroma == 1)
*     printf("%s palindroma\n",S);
* else
*     printf("%s non palindroma\n",S);
*/

int palindroma ();

int main(void) {
    int len;
    scanf("%d",&len);
    char S[len];
    scanf("%s",S);

    int stringa_palindroma = palindroma (S, len);

    if (stringa_palindroma == 1) {
        printf("%s palindroma\n",S);
    } else {
        printf("%s non palindroma\n",S);
    }
    
    return 0;
}

int palindroma (char *X, int dim) {
    
    if (dim <= 0) {     
        return 1;
    }

    if (*X != *(X + dim - 1)) {
        return 0;
    } else {
        palindroma (X + 1, dim - 2);
    }   
}