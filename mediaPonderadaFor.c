/* Criar um algoritmo que leia o numero de calculos de media ponderada.
Calcular a media ponderada de 3 notas, sendo a primeira
nota peso 2, a segunda peso 3 e a terceira peso 5. */
#include <stdio.h>
int main() {
	short int qtde_media, i;
	float n1, n2, n3, mp;
	printf("Informe a QTDE de media ponderada ira calcular: ");
	scanf("%hd", &qtde_media);
	for(i=0; i<qtde_media; i++) {
		printf("Digite tres notas:\n ");
		scanf("%f %f %f", &n1, &n2, &n3);
		mp = (n1*2 + n2*3 + n3*5)/10;
		printf("\nMedia ponderada: %.2f\n", mp);
	}
	return 0;
}
