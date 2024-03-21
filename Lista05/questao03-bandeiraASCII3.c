#include <stdio.h>

int main(void){
	int N;
	
	scanf("%d", &N);
	
	for(int cont = 0; cont < (5 * N) + 2; cont++){
		printf("-");
	}
	
	printf("\n");
	
	for(int cont = 0; cont < (3*N); cont++ ){
		printf("|");
		for(int cont1 = 0; cont1 < (N * 2); cont1++){
			printf("#");
		}
		for(int cont2 = 0; cont2 < (N * 3); cont2++){
			printf(".");
		}
		printf("|");
		printf("\n");
	}
	
	for(int cont = 0; cont < (5 * N) + 2; cont++){
		printf("-");
	}
}
