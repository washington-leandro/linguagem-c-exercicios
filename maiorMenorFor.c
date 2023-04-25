/*Escreva um programa em C que lê 15 valores inteiros, encontra o maior e o menor deles e
mostra o resultado.*/
#include <stdio.h>
int main() {
	short int num, i, menor, maior;
	printf("Digite 15 numeros inteiros: ");
	scanf("%hd", &num);
	maior=num;
	menor=num;
	for(i=1; i<15; i++) {
		// descobrir o maior numero
		if(num>maior) {
			maior = num;
		} else {
			maior = maior;
		}
		// descobrir o menor numero
		if(num<menor) {
			menor = num;
		} else {
			menor = menor;
		}
		printf("Digite 15 numeros inteiros: ");
		scanf("%hd", &num);	
	}	
	printf("Maior: %hd\nMenor: %hd\n", maior, menor);	
	return 0;
}
