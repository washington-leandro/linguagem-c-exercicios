/*
Escreva um programa para ler as coordenadas (X,Y) 
de uma quantidade indeterminada de pontos no sistema
cartesiano. Para cada ponto escrever o quadrante a que
ele pertence. O algoritmo será encerrado quando pelo
menos uma de duas coordenadas for NULA.
*/
#include <stdio.h>
int main() {
	short int x, y;
	printf("Entre com as coordenadas [x, y] respectivamente:\n");
	scanf("%hd %hd", &x, &y);
	while(x!=0 && y!=0) {
		if(x>0 && y>0)	{
			puts("Pertence ao primeiro quadrante.");
		} else {
			if(x>0 && y<0) {
				puts("Pertence ao quarto quadrante.");
			} else {
				if(x<0 && y>0) {
					puts("Pertence ao segundo quadrante.");
				} else {
					if(x<0 && y<0) {
						puts("Pertence ao terceiro quadrante.");
					} else {
						puts("Nao pertence aos quadrantes.");
					}
				}
			}
		}
		printf("\nEntre com as coordenadas [x, y] respectivamente:\n");
		scanf("%hd %hd", &x, &y);
	}
	return 0;
}
