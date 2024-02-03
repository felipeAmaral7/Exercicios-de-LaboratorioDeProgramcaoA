#include <stdio.h>

int main(void){
	int vG, vS, vN, pG, pS, pN, diferencaG, diferencaS, diferencaN, trocoG, trocoS, trocoN;
	
	scanf("%d %d %d", &vG, &vS, &vN);
	scanf("%d %d %d", &pG, &pS, &pN);
	
	diferencaG = pG - vG;
	diferencaS = pS - vS;
	diferencaN = pN - vN;
	
	trocoG = (diferencaS / 17) + diferencaG;
	trocoS = (diferencaN/29) + (diferencaS % 17);
	trocoN = diferencaN % 29;
	
	printf("Seu troco eh %d galeoes, %d sicles e %d nuques, Harry!", trocoG, trocoS, trocoN );
	
	
	
	return 0;
}
