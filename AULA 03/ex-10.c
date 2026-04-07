#include <stdio.h>

int main() {

	int a, b;
	printf("digite um number:");
	scanf("%d", &a);
	printf("digite outro number:");
	scanf("%d", &b);
	for(int i = a; i <= b; i++) {
		printf("%d\n", i);
	}
}