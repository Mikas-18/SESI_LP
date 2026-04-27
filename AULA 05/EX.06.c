#include <stdio.h>

int main() {
    int n[10], positivos=0;
    for(int i=0; i<10; i++) {
        scanf("%d", &n[i]);
        if(n[i] > 0) positivos++;
    }
    printf("Positivos = %d\n", positivos);
    return 0;
}