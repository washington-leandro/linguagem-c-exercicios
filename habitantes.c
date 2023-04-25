/*
Foi feita uma pesquisa com cerca de 200 pessoas entre os habitantes de uma região. Foram 
coletados os dados de idade, sexo (M/F) e salário. Desenvolva um software que informe: 
a) a média de salário do grupo; 
b) maior e menor idade do grupo; 
c) quantidade de mulheres com salário até R$1.500,00
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=1, idade, mulher=0, maiorIdade=0, menorIdade=130;
	float salario, soma_salario=0, media;
	char sexo, cont;
	do {
		printf("Pessoa %d\n", i);
		printf("Informe a idade: ");
		scanf("%d", &idade);
		if(idade>maiorIdade) {
			maiorIdade=idade;
		}
		if(idade<menorIdade) {
			menorIdade=idade;
		}
		printf("Informe o sexo: ");
		fflush(stdin);
		scanf("%c", &sexo);
		if(sexo=='f' && salario<=1500) {
			mulher++;
		}
		printf("Informe o salario: ");
		scanf("%f", &salario);
		system("PAUSE");
		system("CLS");
		soma_salario+=salario;
		i++;
	} while(i<=3);
	media=soma_salario/3;
	printf("\nMedia salario do grupo: %.2f\n", media);
	printf("Quantidades de mulheres com salario ate R$1.500,00 : %d\ mulheres", mulher);
	printf("\nMaior idade: %d e Menor idade: %d\n\n", maiorIdade, menorIdade);
	return 0;	
}
