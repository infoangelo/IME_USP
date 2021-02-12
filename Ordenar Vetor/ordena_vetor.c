#include <stdio.h>
void ordena_vetor(int vet[], int tamanho){
    int transf;
   for (int i=0; i<tamanho-1; i++) {
       if (vet[i] > vet[i+1]) {
           transf = vet[i];
           vet[i] = vet[i+1];
           vet[i+1] = transf;
           i=-1;
       }
   } 
}
int main () {
    int n, i=0;
    scanf ("%d", &n);
    int v[n];
    do {
        scanf ("%d", &v[i]);
        i++;
    } while (i < n);
    ordena_vetor(v, n);
    for (i=0; i<n; i++)printf("%d ", v[i]);
    return 0;
}