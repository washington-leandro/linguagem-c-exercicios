/* Ler 10 valores inteiros e mostrar quantos entao dentro e
fora do intervalo [5,10] */
#include <stdio.h>
int main() {
	short int num, i, dentro, fora;
	printf("Digite um numero inteiro: ");
	scanf("%hd", &num);
	dentro = 0;
	fora = 0;
	for(i=0; i<num; i++) {
		if(num>=5 && num<=10) {
			dentro+=1;
		} else {
			fora+=1;
		}
		printf("Digite um numero inteiro: ");
		scanf("%hd", &num);
	}
	printf("\nDentro do intervalo: %hd\nFora do intervalo: %hd", dentro, fora);
	return 0;
}
