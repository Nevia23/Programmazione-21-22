/*
 * Implementazione dell'algoritmo di ordinamento Counting Sort per un 
 * array di interi.  
 * 
 * L'algoritmo, per un input array A, è così descritto: 
 * 1) trovare l'elemento massimo di A 
 * 2) creare un array F che contenga le frequenze di tutti gli elementi 
 *    di A nel corrispondente indice di F: se il numero j compare k 
 *    volte in A, allora F[j]=k. 
 * Es. se A={3,1,4,3} F[0]=0, F[1]=1, F[2]=0, F[3]=2, F[4]=1
 * A = [3, 1, 4, 3]
 * F = [0, 1, 0, 2, 1]  (valori di F)
 *      0  1  2  3  4   (indici di F)
 * 3) poiché F[0]=k ci dice che ci sono k zeri in A, per ordinare 
 *    l'array possiamo mettere nelle prime posizioni di A k zeri. 
 *    Proseguiamo poi con F[1], F[2] e così via...al termine A 
 *    risulterà ordinato. 
 *    Esempio: se chiamiamo A' = [3, 1, 4, 3] una copia di A ed 
 *    applichiamo 3) ad A ed F[0]=0, F[1]=1, F[2]=0, F[3]=2, F[4]=1
 *    otteniamo:
 * 
 *  F = [0, 1, 0, 2, 1]  -> A = []
 *       ^
 *  F = [0, 1, 0, 2, 1]  -> A = [1]
 *          ^
 *  F = [0, 1, 0, 2, 1]  -> A = [1]
 *             ^
 *  F = [0, 1, 0, 2, 1]  -> A = [1, 3, 3]
 *                ^
 *  F = [0, 1, 0, 2, 1]  -> A = [1, 3, 3, 4]
 *                   ^
 *
 *  Potete provare un'animazione del counting sort qua: 
 *  https://visualgo.net/en/sorting
 *  oppure potete vedere il suggerimento
 */

void counting_sort(int A[], int dim);
    /*
        Implementazione dell'algoritmo di ordinamento Counting Sort. 
        
        PRE A ha dim elementi
        POST A è ordinato in modo crescente
     */
