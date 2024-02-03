#include <stdio.h>

int main(void)
{
	int numcasos, maior, menor, num1, numbers2, diferenca;
	scanf("%d", &numcasos);
	
	for (int i = 0; i < numcasos; i++) {
		scanf("%d", &num1);
		maior = num1;
		menor = num1;
		for(int cont = 0; cont < 2; cont++){
			scanf("%d", &numbers2);
			if(numbers2 > maior){
				maior = numbers2;
			}
			if(numbers2 < menor){
				menor = numbers2;
			}
		}
		diferenca = maior - menor;
		printf("%d\n", diferenca);
	}
}
