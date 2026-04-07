#include <stdio.h>

int main() {
	int senha;
	do {
		scanf("%d", &senha);
	} while(senha != 1234);
	printf("Acesso permitido\n");
}