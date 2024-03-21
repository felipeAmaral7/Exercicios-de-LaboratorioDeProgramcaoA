#include <stdio.h>
#include<stdbool.h>

int primo(long long int num)
{
	bool ehPrimo = true;
	int cont = 2;
	
	if(num <= 1){
		ehPrimo = false;
	}
	
	while(cont < num && ehPrimo){
		if(num % cont == 0){
			ehPrimo = false;
		}
		cont++;
	}
	
	return ehPrimo;
}

int main(void)
{
	long long int num;

	while (scanf("%lld", &num), num != 0) {
		if (primo(num)) {
			printf("%lld: primo\n", num);
		}
		else {
			printf("%lld: composto\n", num);
		}
	}
}

// copiei para a próxima questão
