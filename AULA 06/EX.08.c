#include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2];

    // leitura da matriz A
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // leitura da matriz B
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &b[i][j]);
        }
    }

    // multiplicação
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            c[i][j] = 0;
            for(int k = 0; k < 2; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // exibição do resultado
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}