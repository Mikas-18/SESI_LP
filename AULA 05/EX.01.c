#include <stdio.h>

int main() {
    int v[5];
    for(int i=0; i<5; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("Valores digitados: ");
    for(int i=0; i<5; i++) {
        printf("%d ", v[i]);
    }

    
}