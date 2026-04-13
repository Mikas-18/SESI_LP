#include <stdio.h>

int main() {
	float saques[10] = {200, 600, 450, 800, 1000, 300, 700, 150, 550, 400};
	float total=0, maior=saques[0];
	int acima500=0, i;

	for(i=0; i<10; i++) {
		total += saques[i];
		if(saques[i] > maior) maior = saques[i];
		if(saques[i] > 500) acima500++;
	}

	printf("Total sacado: %.2f\n", total);
	printf("Maior saque: %.2f\n", maior);
	printf("Saques acima de 500: %d\n", acima500);
}