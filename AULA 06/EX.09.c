#include <stdio.h>

int main() {
    int m[5][5];

    // leitura da matriz
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &m[i][j]);

            if(m[i][j] < 0){
                m[i][j] = 0;
            }
        }
    }

    // exibição da matriz
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}