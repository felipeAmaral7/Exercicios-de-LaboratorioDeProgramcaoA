#include <stdio.h>

int main(void){
	int h1, m1, s1, h2, m2, s2, segundosH1, segundosM1, segundosS1,segundosH2, segundosM2,
	segundosS2, somaEntrada1, somaEntrada2, somaDuasEntradas,sH, sM, sS;
	
	scanf("%d %d %d", &h1, &m1, &s1);
	
	segundosH1 = (h1 * 60) * 60;
	segundosM1 = m1 * 60;
	segundosS1 = s1;
	somaEntrada1 = segundosH1 + segundosM1 + segundosS1;
	
	scanf("%d %d %d", &h2, &m2, &s2);
	
	segundosH2 = (h2 * 60) * 60;
	segundosM2 = m2 * 60;
	segundosS2 = s2;
	somaEntrada2 = segundosH2 + segundosM2 + segundosS2;
	
	somaDuasEntradas = somaEntrada1 + somaEntrada2;
	
	sH = (somaDuasEntradas/3600) % 24;
	sM = (somaDuasEntradas % 3600) / 60;
	sS = somaDuasEntradas % 60;
	
	printf("%02d:%02d:%02d", sH, sM, sS);
	
	return 0;
}
