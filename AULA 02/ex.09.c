// 9) Número Positivo, Negativo ou Zero
// Leia um número e informe se ele é:
// Positivo
// Negativo
// Zero

#include <stdio.h>

#include <stdio.h>

int main() {
    int n1;

    printf("Digite um número: ");
    scanf("%d", &n1);

    if (n1 > 0) {
        printf("%d É POSITIVO\n", n1);
    } else if (n1 < 0) {
        printf("%d É NEGATIVO\n", n1);
    } else { 
        printf("%d É IGUAL A ZERO\n", n1);
    }


}