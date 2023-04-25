/*Uma empresa deseja aumentar seus preços em 20%. Faça
um programa que leia o código e o preço de custo de cada
produto e calcule o preço novo. Calcule também, a média
dos preços com e sem aumento. Mostre o código e o preço
novo de cada produto e, no final, as médias. A quantidade de
dados que serão cadastrados é desconhecida.*/
#include <stdio.h>
int main() {
	float preco_custo, preco_novo, total_precoCusto, total_precoNovo, media_custo, media_novo;
	int codigo, qtde_produtos;
	char controle;
	printf("Tecle enter para continuar ou s para parar: ");
	scanf("%c", &controle);
	while(controle != 's') {
		printf("Digite o codigo do produto: ");
		scanf("%d", &codigo);
		printf("Digite o preco de custo do produto: ");
		scanf("%f", &preco_custo);
		qtde_produtos++;
		total_precoCusto+=preco_custo;
		preco_novo = preco_custo*1.2;
		total_precoNovo+=preco_novo;
		printf("\nCodigo do produto: %d\n", codigo);
		printf("Preco novo do produto com aumento de 20%%: R$%.2f\n\n", preco_novo);
		fflush(stdin);
		printf("Tecle enter para continuar ou s para parar: ");
		scanf("%c", &controle);
	}
	if(qtde_produtos!=0) {
		media_custo = total_precoCusto/qtde_produtos;
		media_novo = total_precoNovo/qtde_produtos;
		printf("A media de preco dos produtos: R$%.2f\n", media_custo);
		printf("A media de preco dos produtos reajustado: R$%.2f", media_novo);
	}
	return 0;
}
