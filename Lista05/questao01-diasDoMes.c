#include <stdio.h>

int main(void){
		
	const int M = 1;
	const int Y = 1;
	
	while(M != 0 && Y !=0){
	scanf("%d", &M);
	scanf("%d", &Y);
		
		switch(M){
			case 1:
			printf("31\n");
			break;

			case 2:
				if( (Y % 400) == 0 || (Y % 4) == 0 && (Y % 100) != 0){
				printf("29\n");
				break;
				}
				
				else{
					printf("28\n");
					break;
				}

			case 3:
					printf("31\n");
				break;

			case 4:
					printf("30\n");
				break;

			case 5:
					printf("31\n");
				break;

			case 6:
					printf("30\n");
				break;

			case 7:
					printf("31\n");
				break;

			case 8:
					printf("31\n");
				break;

			case 9:
					printf("30\n");
				break;

			case 10:
					printf("31\n");
				break;

			case 11:
					printf("30\n");
				break;

			case 12:
					printf("31\n");
				break;
				
			default:
				break;
		}
	}
}
