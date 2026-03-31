// 5) Cálculo de Desconto
// Leia o valor de uma compra:
// Se for maior que R$100 → desconto de 10%
// Caso contrário → desconto de 5%
// Exiba o valor final.


#include <stdio.h>

int main() {
    float valor, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    if (valor > 100.0) {
        valorFinal = valor * 0.90; // desconto de 10%
    } else {
        valorFinal = valor * 0.95; // desconto de 5%
    }

    printf("Valor final com desconto: R$ %.2f\n", valorFinal);

   







    
    
    
    
    
    
    
    
    
}