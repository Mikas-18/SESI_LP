#include <stdio.h>

int main() {


	int valor;
	scanf("%d", &valor);

	printf("100: %d\n", valor/100);
	valor %= 100;

	printf("50: %d\n", valor/50);
	valor %= 50;

	printf("20: %d\n", valor/20);
	valor %= 20;

	printf("10: %d\n", valor/10);
	valor %= 10;

	printf("5: %d\n", valor/5);
	valor %= 5;

	printf("1: %d\n", valor);
}