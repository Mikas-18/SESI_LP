// 3) Leia dois números inteiros e informe qual é o maior ou se são iguais.

#include <stdio.h>

int main() {
    int n1, n2;

    printf("DIGITE UM NUMERO: ");
    scanf("%i", &n1);

    printf("DIGITE OUTRO NUMERO: ");
    scanf("%i", &n2);

    if (n1 > n2) {
        printf("%i é MAIOR\n", n1);
    } else if (n2 > n1) {
        printf("%i é MAIOR\n", n2);
    } else {
        printf("SÃO IGUAIS\n");
    }

    

    
    
    
    
    
    
    
    
    
}