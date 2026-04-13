#include <stdio.h>

int main() {
	int nums[10] = {2,2,2,2,2,3,4,5,6,7};
	int i, j, cont, dominante=-1;

	for(i=0; i<10; i++) {
		cont=0;
		for(j=0; j<10; j++) {
			if(nums[j]==nums[i]) cont++;
		}
		if(cont > 10/2) {
			dominante = nums[i];
			break;
		}
	}

	if(dominante!=-1) printf("Valor dominante: %d\n", dominante);
	else printf("Nao existe valor dominante\n");
}
