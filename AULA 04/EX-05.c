#include <stdio.h>

int main() {
	float temp[7] = {22.5, 25.0, 20.0, 30.0, 28.5, 18.0, 26.0};
	float soma=0, media;
	int i, acima=0, diaQuente=0, diaFrio=0;

	for(i=0; i<7; i++) soma += temp[i];
	media = soma/7.0;

	for(i=1; i<7; i++) {
		if(temp[i] > temp[diaQuente]) diaQuente=i;
		if(temp[i] < temp[diaFrio]) diaFrio=i;
	}

	for(i=0; i<7; i++) if(temp[i] > media) acima++;

	printf("Media: %.2f\n", media);
	printf("Dia mais quente: %d (%.2f)\n", diaQuente+1, temp[diaQuente]);
	printf("Dia mais frio: %d (%.2f)\n", diaFrio+1, temp[diaFrio]);
	printf("Dias acima da media: %d\n", acima);
}