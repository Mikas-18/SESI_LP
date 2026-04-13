#include <stdio.h>

int main() {
	int valores[12] = {12,11,10,9,8,7,6,5,4,3,2,1}; // exemplo decrescente
	int crescente=1, decrescente=1, i;

	for(i=0; i<11; i++) {
		if(valores[i] > valores[i+1]) crescente=0;
		if(valores[i] < valores[i+1]) decrescente=0;
	}

	if(crescente) printf("Ordem crescente\n");
	else if(decrescente) printf("Ordem decrescente\n");
	else printf("Ordem desordenada\n");
}