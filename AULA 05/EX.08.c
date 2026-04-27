#include <stdio.h>

int main() {
    int n[10], soma=0;
    for(int i=0; i<10; i++) {
        scanf("%d", &n[i]);
        soma += n[i];
    }
    float media = soma / 10.0;
    printf("Valores maiores que a media (%.2f): ", media);
    for(int i=0; i<10; i++) {
        if(n[i] > media) printf("%d ", n[i]);
    }
    return 0;
}