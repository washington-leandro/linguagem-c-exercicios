/* Faça um programa que leia 15 números inteiros e informe os 2 maiores */
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	int i, cont=0, num, primeiro_maior=0, segundo_maior=0;
	for(i=0; i<15; i++) {
		cont++;
		printf("Digite o %dº numero: ", cont);
		scanf("%d", &num);
		if(num>primeiro_maior) {
			if(primeiro_maior>segundo_maior) {
				segundo_maior=primeiro_maior;
			}
			primeiro_maior=num;
		}
		if(primeiro_maior>=segundo_maior && num!=primeiro_maior) {
			if(num>segundo_maior) {
				segundo_maior=num;
			}
		}	
	}
	printf("\nOs dois numeros maiores sao %d e %d\n", primeiro_maior, segundo_maior);
	return 0;
}
