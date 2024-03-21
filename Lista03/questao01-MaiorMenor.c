#include <stdio.h>

int main(void){
	int maior, menor, num, ler, cont;
	scanf("%d", &num);
	maior = num;
	menor = num;
	
	for(cont = 1; cont < 10; cont++){
		scanf("%d", &ler);
		if(ler > maior){
			maior = ler;
		}
		if(ler < menor){
		menor = ler;
		}
	}
	printf("%d\n", menor);
	printf("%d", maior);
	return 0;
}
