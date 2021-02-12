#include <stdio.h>
int primo (int n) {
    if ((n > 2 && n%2 == 0) || n == 1) return 0;
    for (int i = 3; i <= n/3; i+=2) {
        if (n%i == 0) return 0;
    }
    return 1;
}
int main () {
    int n;
    scanf ("%d", &n);
    printf ("%d", primo(n));
    return 0;
}