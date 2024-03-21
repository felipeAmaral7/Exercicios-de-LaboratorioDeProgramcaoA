#include <stdio.h>

int main(void){
	int h1, m1, s1, h2, m2, s2, segH1,segM1, segS1, segH2, segM2, segS2, soma1, soma2, diferenca;
	
	scanf("%d:%d:%d", &h1, &m1, &s1);
	scanf("%d:%d:%d", &h2, &m2, &s2);

	segH1 = (h1 * 60) * 60;
	segM1 = (m1 * 60);
	segS1 = s1;
	
	segH2 = (h2 * 60) * 60;
	segM2 = (m2 * 60);
	segS2 = s2;
	
	
	soma1 = segH1 + segM1 + segS1;
	soma2 = segH2 + segM2 + segS2;
	diferenca = soma2 - soma1;
	printf("%d", diferenca);
}
