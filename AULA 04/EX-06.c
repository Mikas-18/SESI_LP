#include <stdio.h>

int main() {
	int nums[10] = {1,2,3,4,5,6,7,8,9,10};
	int pares[10], impares[10], cp=0, ci=0, i;

	for(i=0; i<10; i++) {
		if(nums[i]%2==0) pares[cp++]=nums[i];
		else impares[ci++]=nums[i];
	}

	printf("Pares (%d): ", cp);
	for(i=0; i<cp; i++) printf("%d ", pares[i]);

	printf("\nImpares (%d): ", ci);
	for(i=0; i<ci; i++) printf("%d ", impares[i]);
}