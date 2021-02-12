#  Funções: Laço simples - Cálculo de fatorial (com entradas negativas) #

Fazer um programa em C implementando obrigatoriamente uma função de nome fat, com 1 parâmetro n, que, dado um número inteiro n, devolva o fatorial de n se n>=0, caso contrário devolva -1.
Fazer um programa principal que solicite que o usuário digite um inteiro qualquer e usando a funcão fat imprima o fatorial do natural digitado.

_Lembrando, a função fatorial fat(n) é definida apenas para os naturais (com o zero), da seguinte forma: fat(0)=1 e fat(n)=n*fat(n-1), n>0._
_Assim, por exemplo, o fatorial de 4 é computado da seguinte forma: fat(4) = 4*3*2*1 = 24._

Dessa forma, é preciso convencionar o que fazer se o usuário digitar um número inteiro negativo, neste caso seu programa deverá imprimir -1.

__Entrada esperada:__ _um valor inteiro (int n)._
__Saída esperada:__ _se n<0, imprimir -1, se n>=0, imprimir um número natural correspondente a fat(n)._
