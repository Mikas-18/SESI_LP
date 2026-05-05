
#include <stdio.h>
int subtraçãodeDOISVALORES(int a,int b) {
	return a - b;
}

int DivisãodeDOISVALORES(int a,int b) {
	return a / b;
}
int MultiplicaçãodeDOISVALORES(int a,int b) {
	return a * b;
}

int somadeDOISVALORES(int a,int b) {
	return a + b;
}
int main() {
	int n1, n2;
	int soma=0;
	int subtraçao=0;
	int multiplicação=0;
	int Divisão=0;
	int OPÇÃO;

	printf("\n===========MENU===========""\n1-SOMA""\n2-SUBTRAÇÃO""\n3-MULTIPLICAÇÃO""\n4-DIVISÃO""\n0-SAIR");

	printf("\n\nDigite uma Opção:");
	scanf("%i", &OPÇÃO);
	if (OPÇÃO > 0 && OPÇÃO <= 5) {
		printf("\n\nDigite primeiro valor:");
		scanf("%i", &n1);

		printf("\nDigite segundo valor:");
		scanf("%i", &n2);

	} else if (OPÇÃO > 5) {
		printf("Opção Invalida!");
	}
	//  soma= n1 + n2
	if(OPÇÃO==1) {


		soma= somadeDOISVALORES(n1,n2);
		printf("\n\nA soma dos dois valores: %i", soma);
	}
	//  subtração= n1 - n2
	if(OPÇÃO==2) {

		subtraçao=subtraçãodeDOISVALORES(n1,n2);
		printf("\n\nA subtração dos dois valores: %i", subtraçao);
	}
	//  multiplicação= n1 x n2
	if(OPÇÃO==3) {

		multiplicação=MultiplicaçãodeDOISVALORES(n1,n2);

		printf("\n\nA multiplicação dos dois valores: %i", multiplicação);
	}
	// divisão= n1 / n2
	if(OPÇÃO==4) {
		Divisão=DivisãodeDOISVALORES(n1,n2);
		if(Divisão>=0) {
			printf("\n\nA Divisão dos dois valores: indefinido");
		}
		if(Divisão<0) {
			printf("\n\nA Divisão dos dois valores: %i", Divisão);
			return 0;
		}
	}

	if(OPÇÃO==0) {
	}

}
