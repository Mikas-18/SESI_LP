#include <stdio.h>

int main() {
	int idades[15] = {12, 18, 25, 60, 45, 16, 70, 30, 55, 62, 14, 19, 40, 80, 22};
	int jovem=0, adulto=0, idoso=0, i;

	for(i=0; i<15; i++) {
		if(idades[i] <= 17) jovem++;
		else if(idades[i] <= 59) adulto++;
		else idoso++;
	}

	printf("Jovens: %d, Adultos: %d, Idosos: %d\n", jovem, adulto, idoso);

	if(jovem>adulto && jovem>idoso) printf("Grupo maior: Jovens\n");
	else if(adulto>jovem && adulto>idoso) printf("Grupo maior: Adultos\n");
	else printf("Grupo maior: Idosos\n");
}