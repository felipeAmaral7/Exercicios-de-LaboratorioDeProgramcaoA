#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int atual, anterior, diferenca;
	int i;
	scanf("%d", &anterior);
	
	for(i = 1; i < 10; i++){
		scanf("%d", &atual);
		diferenca = abs(atual - anterior);
		anterior = atual;
		printf("%d\n", diferenca);
	}
	
	return 0;
	
}
