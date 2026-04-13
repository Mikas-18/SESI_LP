#include <stdio.h>

int main() {
	int notas[10] = {7, 8, 5, 9, 6, 10, 4, 7, 8, 9};
	int soma = 0, acima = 0, i;
	float media;

	for(i=0; i<10; i++) soma += notas[i];
	media = soma / 10.0;

	printf("Media da turma: %.2f\n", media);
	printf("Notas acima da media: ");
	for(i=0; i<10; i++) {
		if(notas[i] > media) {
			acima++;
			printf("%d ", notas[i]);
		}
	}
	printf("\nTotal acima da media: %d\n", acima);
}