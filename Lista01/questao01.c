#include <stdio.h>

int main(void){
	int escolha, dedosC, dedosL, soma;
	
	scanf("%d", &escolha);
	
	if(escolha == 1){
		scanf("%d", &dedosC);
		scanf("%d", &dedosL);
		soma = dedosC + dedosL;
		
		if(soma % 2 == 0){
			printf("Codibentinho venceu");
		}
		else{
			printf("Labiana venceu");
		}
	}
	else{
		scanf("%d", &dedosC);
		scanf("%d", &dedosL);
		soma = dedosC + dedosL;
		
		if(soma % 2 !=0){
			printf("Codibentinho venceu");
		}
		else{
			printf("Labiana venceu");
		}
	}
	
	return 0;
}
