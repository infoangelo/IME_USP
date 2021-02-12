#include <stdio.h>
int main () {
	int modo, pecas, max_retira, retira=0, turno=1, jogador=1;
	printf ("[1]: jogador1 vs jogador2\n[2]: jogador vs computador\nEscolha o modo do jogo:");
	scanf ("%d", &modo);
	printf ("Entre com o numero de pecas:");
	scanf ("%d", &pecas);
	printf ("Entre com o numero maximo de pecas que podem ser retiradas:");
	scanf ("%d", &max_retira);
	if (modo == 1) {
		do {
			if (jogador == 1) {
				printf ("Turno: %d\nJogador: %d\nQuantas pecas voce gostaria de retirar?:",turno,jogador);
				scanf ("%d", &retira);
				pecas-=retira;
				printf ("Jogador retirou %d peca(s)\nNumero de pecas restantes = %d\n", retira, pecas);
				jogador++;
				turno++;
				}
			else {
				printf ("Turno: %d\nJogador: %d\nQuantas pecas voce gostaria de retirar?:",turno,jogador);
				scanf ("%d", &retira);
				pecas-=retira;
				printf ("Jogador retirou %d peca(s)\nNumero de pecas restantes = %d\n", retira, pecas);
				jogador--;
				turno++;
				}	
		} while (pecas > 0);
	} else {
		if (pecas%(max_retira+1)!=0) jogador=0;
		do {
			if (jogador == 1) {
				printf ("Turno: %d\nQuantas pecas voce gostaria de retirar?:",turno);
				scanf ("%d", &retira);
				pecas-=retira;
				printf ("Jogador retirou %d peca(s)\nNumero de pecas restantes = %d\n", retira, pecas);
				jogador--;
				turno++;
				}
			else {
				printf ("Turno: %d\n",turno);
				retira=max_retira;
				while ((pecas-retira)%(max_retira+1)!=0) retira--;				
				pecas-=retira;
				printf ("Computador retirou %d peca(s)\nNumero de pecas restantes = %d\n", retira, pecas);
				jogador++;
				turno++;
				}	
		} while (pecas > 0);
	}
if (jogador == 1 && modo == 1)
printf ("Jogador 2 ganhou!\n");
else if (jogador == 2)
printf ("Jogador 1 ganhou!\n");
else
printf ("Que pena! Voce perdeu\n");
return 0;
}
