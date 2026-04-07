#include <stdio.h>

int main() {
	int n, maior = -999999;
	do {
		scanf("%d", &n);
		if(n != 999 && n > maior) {
			maior = n;
		}
	} while(n != 999);

	printf("Maior: %d\n", maior);
}