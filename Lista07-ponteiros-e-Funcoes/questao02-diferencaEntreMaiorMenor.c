#include <stdio.h>

int diferencaMaiorMenor(int *num1, int *num2, int *num3, int *maior, int *menor);

int main(void)
{
	/* Não use estas variáveis no seu código.
	 */
	int nao_me_use_1, nao_me_use_2, nao_me_use_3;

	/* Use apenas os ponteiros.
	 */
	int *num1 = &nao_me_use_1;
	int *num2 = &nao_me_use_2;
	int *num3 = &nao_me_use_3;
	int *maior, *menor;

	/* Leia três números inteiros e imprima o maior e o menor
	 * deles, usando apenas ponteiros.
	 */
	
	scanf("%d %d %d", num1, num2, num3);
	
	maior = num1; 
	menor = num1;
	
	if(*num2 > *maior){
		maior = num2;
	}
	if(*num2 < *menor){
		menor = num2;
	}
	
	if(*num3 > *maior){
		maior = num3;
	}
	if(*num3 < *menor){
		menor = num3;
	}
	
	printf("%d", *maior - *menor);

}
