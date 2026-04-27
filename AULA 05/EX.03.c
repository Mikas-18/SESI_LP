#include <stdio.h>

int main() {
    int v[8], soma=0;
    for(int i=0; i<8; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &v[i]);
        soma += v[i];
    }
    printf("Soma dos elementos: %d\n", soma);
    return 0;
}