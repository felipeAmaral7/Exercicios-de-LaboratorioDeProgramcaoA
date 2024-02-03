// copiei um pouco da questão anterior

#include <stdio.h>
#include <stdbool.h>

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
	long long int num1, num2;

	while (scanf("%lld", &num1), scanf("%lld", &num2), num1 != 0 && num2 != 0) {
		if (primo(num1) && primo(num2)){
			if((num1 + 2) == num2 || (num2 + 2) == num1){
				printf("%lld e %lld sao gemeos\n", num1, num2);
			}
			else{
				printf("%lld e %lld nao sao gemeos\n", num1, num2);
			}
		}
		else{
			printf("%lld e %lld nao sao gemeos\n", num1, num2);
		}
	}
}
