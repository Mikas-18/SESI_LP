#include <stdio.h>

int main() {


	int n, primo = 1;
	scanf("%d", &n);

	for(int i = 2; i < n; i++) {
		if(n % i == 0) {
			primo = 0;
			break;
		}
	}

	if(primo && n > 1) printf("Primo\n");
	else printf("Nao primo\n");
}