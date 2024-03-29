
#include <stdio.h>
#include <stdlib.h>
int printf(const char *fmt, ...)
{
	puts("Erro! A funcao printf nao deve ser usada neste exercicio!");
	puts("Use a funcao `putchar()' para imprimir cada caracter.");
	puts("Exemplo: putchar('#'); imprime uma vez o caracter #");
	exit(EXIT_FAILURE);
}

int main(void){
	
	int linha, coluna;
	
	scanf("%d %d", &linha, &coluna);
	
	putchar('+');
	for(int cont = 0; cont < 10; cont++){
		putchar('-');
	}
	putchar('+');
	putchar('\n');
	
	for(int cont1 = 1; cont1 <= 20; cont1++){
		putchar('|');
		for(int cont2 = 1; cont2 <= 10; cont2++){
			if(cont1 == linha && cont2 == coluna){
				putchar('#');
			}
			else if(linha == cont1 && coluna + 1 == cont2){
				putchar('#');
			}
			else if(linha + 1 == cont1 && coluna == cont2){
				putchar('#');
			}
			else if(linha + 1 == cont1 && coluna + 1 == cont2){
				putchar('#');
			}
			else{
				putchar('.');
			}
		}
		putchar('|');
		putchar('\n');
	}
	
	putchar('+');
	for(int cont = 0; cont < 10; cont++){
		putchar('-');
	}
	putchar('+');
}
