#include <stdio.h>

int main(void){
	
	int dias, temp, casos;
	
	scanf("%d", &casos);
	
	for(int cont = 0; cont < casos; cont++){
		scanf("%d", &dias);
		scanf("%d", &temp);
		
		switch(dias){
			case 1:
				if(temp < 15){
					printf("F\n");
				}
				else if(temp >= 25){
					printf("bermuda\n");
				}
				else{
					printf("jeans\n");
				}
				break;
				
			case 2:
				if(temp < 15){
					printf("F\n");
				}
				else if(temp > 23){
					printf("bermuda\n");
				}
				else{
					printf("jeans\n");
				}
				break;
				
			case 3:
				if(temp < 15){
					printf("F\n");
				}
				else{
					printf("jeans\n");
				}
				break;
				
			case 4:
				if(temp < 15){
					printf("F\n");
				}
				else if(temp >= 25){
					printf("bermuda\n");
				}
				else{
					printf("jeans\n");
				}
				break;
				
			case 5:
				if(temp < 15){
					printf("F\n");
				}
				else{
					printf("jeans\n");
				}
				break;
				
			case 6:
				if(temp < 15){
					printf("F\n");
				}
				else if(temp >= 25){
					printf("bermuda\n");
				}
				else{
					printf("jeans\n");
				}
				break;
				
			case 7: 
				if(temp < 15){
					printf("F\n");
				}
				else if(temp >= 25){
					printf("bermuda\n");
				}
				else{
					printf("jeans\n");
				}
				break;
				
			default:
				break;
		}
	}
}
