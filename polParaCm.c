/*
Exiba uma tabela de convers�o de polegadas para cent�metros, de 1 a 20. Considere que: Polegada =
Cent�metro * 2,54. 
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	float polegadas, cm;
	printf("=== CONVERSOR DE POLEGADAS PARA CENTIMETROS ===");
	for(i=0; i<5; i++) {
		printf("\n\nDigite um numero em polegadas: ");
		scanf("%f", &polegadas);
		cm=polegadas*2.54;
		puts("\nPolegadas\t\tCentimetros");
		printf("%5.2f %25.2f\n\n", polegadas, cm);
		system("pause");
		system("cls");
	}
	return 0;
}
