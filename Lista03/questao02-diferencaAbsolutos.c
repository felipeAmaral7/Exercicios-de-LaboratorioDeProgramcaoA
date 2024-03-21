#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1, num2, num3, diferenca1, diferenca2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	
	diferenca1 = abs(num2 - num1);
	diferenca2 = abs(num3 - num2);
	printf("%d\n", diferenca1);
	printf("%d\n", diferenca2);
}
