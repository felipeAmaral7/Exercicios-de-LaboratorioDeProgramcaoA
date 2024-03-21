#include <stdio.h>
#include <stdlib.h>

int main(void){
	int menor, menorPar, atual, anterior, dif, menorDiferenca;
	
	scanf("%d", &atual);
	
	menor = atual;
	anterior = atual;
	menorPar = 100;
	
	if(atual % 2 == 0){
		menorPar = atual; // caso o primeiro seja par
	}
	
	for(int cont = 1; cont < 5; cont++){
		scanf("%d", &atual);
		
		if(atual < menor){
			menor = atual;  //menor numero
		}
		
		dif = abs(atual-anterior);
		
		if(cont == 1 || dif < menorDiferenca){
			menorDiferenca = dif; //menor diferenca no primeiro caso
		}
		
		if(atual % 2 == 0 && atual < menorPar){
			menorPar = atual;
		}
		
		anterior = atual;
	}
	
	printf("%d\n", menor);
	printf("%d\n", menorPar);
	printf("%d\n", menorDiferenca);

}
