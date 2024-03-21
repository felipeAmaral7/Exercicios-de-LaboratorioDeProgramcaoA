#include <stdio.h>

int main(void){
	
	int vet[100];
	
	int tam;
	
	scanf("%d", &tam);
	
	for(int cont = 0; cont < tam; cont++){
		scanf("%d", &vet[cont]);
	}
	
	double media = 0;
	
	for(int cont2 = 0; cont2 < tam; cont2++){
		media += vet[cont2];
	}
	
	media = media / tam;
	
	int maiores = 0;
	int menores = 0;
	
	for(int cont3 = 0; cont3 < tam; cont3++){
		if(media < vet[cont3]){
			maiores += 1;
		}
		if(media > vet[cont3]){
			menores += 1;
		}
	}
	
	printf("%d %d\n", menores, maiores);
}
