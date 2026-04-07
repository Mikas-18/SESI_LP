#include <stdio.h>

int main() {

	int cont = 0;
	for(int i = 1; i <= 50; i++) {
		if(i % 2 == 0) cont++;
	}
	printf("%d\n", cont);
}