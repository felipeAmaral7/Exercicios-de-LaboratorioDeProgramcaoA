#include <stdio.h>

int main(void){
	int num, ler, maior, menor, doMeio, soma, cont;
	
	scanf("%d", &num);
	maior = num;
	menor = num;
	soma = num;
	
	for(cont = 1; cont <= 2; cont++){
		scanf("%d", &ler);
		if(maior < ler){
			maior = ler;
		}
		if(menor > ler){
			menor = ler;
		}
		soma += ler;
	}
	
	doMeio = soma - maior - menor;
	printf("%d\n", menor);
	printf("%d\n", doMeio);
	printf("%d\n", maior);
}
