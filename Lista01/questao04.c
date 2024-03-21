#include <stdio.h>

int main(void){
	int num,ler, maior, menor, cont, diferenca;
	scanf("%d", &num);
	maior = num;
	menor = num;
	for(cont = 1; cont <= 2; cont++){
		scanf("%d", &ler);
		if(ler > maior){
			maior = ler;
		}
		if(ler < menor){
			menor = ler;
		}
	}
	diferenca = maior - menor;
	printf("%d\n", diferenca);

	
	return 0;
}
