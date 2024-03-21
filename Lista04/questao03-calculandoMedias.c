#include <stdio.h>

int main(void){
	
	int quant;
	float num, media, soma;
	
	scanf("%d", &quant);
	
	
	while(quant != 0){
		int cont = 0;
		soma = 0;
		while(cont < quant){
			scanf("%f", &num);
			soma += num;
			cont++;
		}
		
		media = soma / quant;
		
		printf("%.2f\n", media);
		scanf("%d", &quant);
	}

	
}
