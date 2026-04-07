#include <stdio.h>

int main() {
	int n, cont = 0;
	do {
		scanf("%d", &n);
		if(n >= 0) cont++;
	} while(n >= 0);
	printf("Quantidade: %d\n", cont);
}