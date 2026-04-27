#include <stdio.h>

int main() {
	int n[6], menor;
	for(int i=0; i<6; i++) {
		scanf("%d", &n[i]);
	}
	menor = n[0];
	for(int i=1; i<6; i++) {
		if(n[i] < menor) menor = n[i];
	}
	printf("Menor = %d\n", menor);
	return 0;
}