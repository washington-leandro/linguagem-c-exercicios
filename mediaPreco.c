#include <stdio.h>
/*Fa�a um programa para ler o c�digo e o pre�o de 15
produtos, calcular e exibir a m�dia aritm�tica dos pre�os
dos produtos.*/
int main() {
	short int codigo, qtde_produtos;
	float preco, media, soma_preco;
	qtde_produtos = 0;
	soma_preco = 0;
	puts("=== CALCULAR A MEDIA DOS PRECOS ===");
	do {
		printf("\nDigite o codigo do produto: ");
		scanf("%hd", &codigo);
		qtde_produtos++;
		printf("Digite o preco do produto: ");
		scanf("%f", &preco);
		soma_preco += preco;
		
	} while (qtde_produtos < 15);
	media = soma_preco/15;
	printf("\nMedia dos precos: R$%.2f\n", media);		
	return 0;
}
