#include <stdio.h>

int main() {
    int m[2][2], soma = 0;

    // leitura da matriz
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &m[i][j]);
            soma += m[i][j];
        }
    }

    printf("Soma = %d\n", soma);

    return 0;
}