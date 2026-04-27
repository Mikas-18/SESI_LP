#include <stdio.h>

int main() {
    int n[10];
    for(int i=0; i<10; i++) {
        scanf("%d", &n[i]);
        if(n[i] < 0) n[i] = 0;
    }
    for(int i=0; i<10; i++) {
        printf("%d ", n[i]);
    }
    return 0;
}