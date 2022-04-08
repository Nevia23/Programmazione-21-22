#include <stdio.h>

/*
* Scrivete la funzione "scambiaArray" che scambia i
* valori di due array di numeri interi. Notate che i 
* due array possono essere di dimensione diversa. 
* Inserite il vostro codice, ovvero l'implementazione
* della funzione (e di ogni altra funzione accessoria)
* e la sua chiamata nel main, nel file 
* che accompagna la consegna (senza modificare altre
* parti del file).    
*
* La funzione riceve come argomenti i due array e 
* la loro dimensione.
*
* Per la consegna, utilizzare: array1 = [1,1,1], array2 = [2,2,2,2,2] 
* Utilizzare il seguente codice per stampare il risultato:
* for (int i = 0; i < size_array1; i += 1)
* 	printf("[%d] -> A1: %d\n", i, array1[i]);
* for (int i = 0; i < size_array2; i += 1)
* 	printf("[%d] -> A2: %d\n", i, array2[i]);
*/

#include <stdio.h>


// inserite qua la definizione di scambiaArray

int main()
{
    int size_array1 = 3, size_array2 = 5;
    int array1[5] = {1,1,1};
    int array2[5] = {2,2,2,2,2};
    
	// inserite qua la chiamata a scambiaArray()
    
	for (int i = 0; i < size_array1; i += 1)
 		printf("[%d] -> A1: %d\n", i, array1[i]);
 	for (int i = 0; i < size_array2; i += 1)
 		printf("[%d] -> A2: %d\n", i, array2[i]);

    return 0;
}
