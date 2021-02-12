#include <stdio.h>
int main () {
    double salario;
    scanf ("%lf", &salario);
    if (salario < 1903.99) {
        printf ("Isento");
    }
        else if (salario < 2826.66){
            printf ("R$ %.2lf", salario * 0.075);
        }
        else if (salario < 3751.06){
            printf ("R$ %.2lf", salario * 0.15);
        }
        else if (salario < 4664.69){
            printf ("R$ %.2lf", salario * 0.225);
        }
    else {
        printf ("R$ %.2lf", salario * 0.275);
    }
return 0;
}