#include <stdio.h>
int main () {
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    if (a*a+b*b == c*c)
        printf ("1 %d", c*c);
        else if (a*a+c*c == b*b)
        printf ("1 %d", b*b);
        else if (b*b+c*c == a*a)
        printf ("1 %d", a*a);
        else
        printf ("0");
return 0;
}