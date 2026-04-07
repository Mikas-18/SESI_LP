#include <stdio.h>

int main() {

	int op;
	do {
		printf("1: Ola\n2: Tudo bem?\n3: Sair\n");
		scanf("%d", &op);

		if(op == 1) printf("Ola\n");
		else if(op == 2) printf("Tudo bem?\n");

	} while(op != 3);
}