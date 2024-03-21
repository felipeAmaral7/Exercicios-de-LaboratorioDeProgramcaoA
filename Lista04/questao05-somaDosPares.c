#include <stdio.h>
#include <stdbool.h>

int main(void){
	int soma;
	
	int N;
	int M;
	bool saiu;
	
	saiu = false;
	do{
		scanf("%d", &N);
		scanf("%d", &M);
	
		if(M == 0 && N == 0){
			saiu = true;
		}
		else{
			soma = 0;
			for(int cont = N; cont <= M; cont++){
				if(cont % 2 == 0){
					soma += cont;
				}
			}
			printf("%d\n", soma);
		}
	}while(saiu == false);
}
