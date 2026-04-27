#include <stdio.h>

int main() {
    int n[6], maior, segundo;
    for(int i=0; i<6; i++) {
        scanf("%d", &n[i]);
    }

    // Inicializa maior e segundo
    if(n[0] > n[1]) {
        maior = n[0];
        segundo = n[1];
    } else {
        maior = n[1];
        segundo = n[0];
    }

    for(int i=2; i<6; i++) {
        if(n[i] > maior) {
            segundo = maior;
            maior = n[i];
        } else if(n[i] > segundo && n[i] != maior) {
            segundo = n[i];
        }
    }

    printf("Segundo maior valor = %d\n", segundo);
    return 0;
}