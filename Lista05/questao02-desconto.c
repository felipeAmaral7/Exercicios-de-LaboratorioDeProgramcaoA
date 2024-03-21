#include <stdio.h>

int main(void){
	double pDesconto, custoMinimo, preco, valorFinal, porc;
	int quantProdutos;
	
	scanf("%lf", &pDesconto);
	scanf("%lf", &custoMinimo);
	scanf("%d", &quantProdutos);
	
	valorFinal = 0;
	for(int cont = 0; cont < quantProdutos; cont++){
		scanf("%lf", &preco);
		
		if(preco >= custoMinimo){
			porc = (pDesconto/100) * preco;
			valorFinal += (preco - porc);
		}
		else{
			valorFinal += preco;
		}
	}
	
	printf("%.2lf", valorFinal);
}
