/* Criar um algoritmo que mostra a tabuada de acordo com a entrada do usuario */
#include <stdio.h>
int main() {
	short int in, i;
	printf("Deseja saber a tabuada de qual numero: \n");
	scanf("%hd", &in);
	for(i=1; i<=10; i++) {
		printf("%hd * %2hd = %2hd\n", in, i, in*i);
	}
	return 0;
}
