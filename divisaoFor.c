/*Fazer um programa para ler um n�mero de pares inteiro.
Depois leia esse numero pares de n�meros e mostre a divis�o do primeiro pelo
segundo.*/
#include <stdio.h>
int main() {
	short int i, pares;
	float div, x, y;
	printf("Digite o numero de pares de numeros: ");
	scanf("%hd", &pares);
	for(i=0; i<pares; i++) {
		printf("\nDigite o valor de [x,y] respectivamente:\n");
		scanf("%f %f", &x, &y);
		if(y==0) {
			puts("\nErro - divisao por ZERO");
		} else {
			div = x/y;
			printf("\n%.2f dividido por %.2f = %.2f\n", x, y, div);
		}
	}
	return 0;
}
