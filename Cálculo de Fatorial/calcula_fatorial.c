#include <stdio.h>
int fat (int n) {
    int fatN=1;
    if (n >= 0) {
        while (n > 0) {
            fatN*=n;
            n--;
        }
        return fatN;
    } else {
        return -1;
    }
}
int main () {
    int n;
    scanf ("%d", &n);
    printf ("%d", fat(n));
    return 0;
}