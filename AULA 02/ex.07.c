// 7) Verificação de Triângulo
// Leia três valores e verifique se podem formar um triângulo.
// Caso formem, classifique como:
// Equilátero
// Isósceles
// Escaleno



#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        // É triângulo
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || b == c || a == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Os valores não formam um triângulo.\n");
    }

    
}