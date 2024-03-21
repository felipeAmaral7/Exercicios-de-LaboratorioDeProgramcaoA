#include <math.h>
#include <stdio.h>

int main(void){
	double ladoA, ladoB, ladoC;
	
	scanf("%lf %lf %lf", &ladoA, &ladoB, &ladoC);
	
	if((fabs(ladoB - ladoC) < ladoA && ladoA < (ladoB + ladoC)) &&
		(fabs(ladoA - ladoC) < ladoB && ladoB < (ladoA + ladoC)) &&
		(fabs(ladoA - ladoB) < ladoC && ladoC < (ladoA + ladoB))){
		
		if((ladoA != ladoB) && (ladoA != ladoC) && (ladoB != ladoC)){
			printf("triangulo escaleno");
		}
		else if((ladoA == ladoB && ladoA != ladoC) ||
				  (ladoA == ladoC && ladoA != ladoB) ||
				  (ladoB == ladoC && ladoB != ladoA)){
			printf("triangulo isosceles");
		}
		else if(ladoA == ladoB && ladoA == ladoC){
			printf("triangulo equilatero");
		}
	}
	else{
		printf("nao forma triangulo");
	}
}
