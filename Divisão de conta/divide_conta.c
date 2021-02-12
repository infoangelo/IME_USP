#include <stdio.h>
int main () {
    float total_conta, conta_div, conta_felipe;
    int divisao, resto;
    scanf ("%f", &total_conta);
    divisao = total_conta;
    resto = divisao % 3;
    conta_div = (divisao - resto) / 3;
    conta_felipe = total_conta-conta_div*2;
    printf ("Andre: %.2f, Carlos: %.2f e Felipe: %.2f", conta_div, conta_div, conta_felipe);
return 0;
}