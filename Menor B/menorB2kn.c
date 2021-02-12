#include <stdio.h>
void teste (int n, int *b, int *k) {
    int potencia=0;
    while (potencia!=n && n>1){
        *k = *k + 1;
        potencia=1;
        for (int i=0; i < *k; i++){
            potencia = potencia**b;
        }
        if (potencia>n || *b==1){
            *b = *b +1;
            *k=0;
        }
    }
}
int main () {
    int n, b=1, k=0;
    scanf ("%d", &n);
    teste (n, &b, &k);
    printf ("%d %d", b, k);
    return 0;
}