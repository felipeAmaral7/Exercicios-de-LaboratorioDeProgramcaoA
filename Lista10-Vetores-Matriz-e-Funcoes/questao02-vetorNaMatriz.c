#include <stdio.h>

int maior_elemento(int vetor[], int tamanho){
	
	int maior = vetor[0];
	
	for(int cont = 1; cont < tamanho; cont++){
		if(vetor[cont] > maior){
			maior = vetor[cont];
		}
	}
	
	return maior;
}


int main(void)
{
	int linhas, colunas;
	scanf("%d %d", &linhas, &colunas);
	int matriz[linhas][colunas];
	
	for (int i = 0; i < linhas; i++){
		for (int j = 0; j < colunas; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for (int i = 0; i < linhas; i++){
		printf("%d\n", maior_elemento(matriz[i], colunas));
	}
}
