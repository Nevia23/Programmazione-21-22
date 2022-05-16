#include <stdio.h>
#include <time.h>
#include "counting_sort.h"
#include "quicksort.h"
#include "merge_sort.h"
#include "array.h"


#define SIZE_A 7
#define SIZE_X 25000


int main() {

    int A[SIZE_A] = {4,3,6,1,9,7,4}; 
    int B[SIZE_A];

    stampaArray(A, SIZE_A);
    copia_array(A, B, SIZE_A);
    counting_sort(B, SIZE_A);
    stampaArray(B, SIZE_A);

    copia_array(A, B, SIZE_A);
    mergeSort(B, 0, SIZE_A-1);
    stampaArray(B, SIZE_A);

    quickSort(A, 0, SIZE_A-1);
    stampaArray(A, SIZE_A);


    int X[SIZE_X]; 
    for(int i=SIZE_X-1; i>0; i--) {
        X[i] = i/10;
    }

    clock_t begin, end; 
    double time_spent;
    begin = clock(); counting_sort(X, SIZE_X); end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo (sec) per ordinare X con counting sort:  %f\n", time_spent);

    begin = clock(); quickSort(X, 0, SIZE_X-1); end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo (sec) per ordinare X con quicksort sort: %f\n", time_spent);

    begin = clock(); mergeSort(X, 0, SIZE_X-1); end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo (sec) per ordinare X con mergesort sort: %f\n", time_spent);
    
}
