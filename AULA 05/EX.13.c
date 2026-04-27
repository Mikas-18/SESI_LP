#include <stdio.h>

int main() {
    int n[10], cont, maxCont=0, maisRepete;
    for(int i=0; i<10; i++) {
        scanf("%d", &n[i]);
    }

    for(int i=0; i<10; i++) {
        cont = 0;
        for(int j=0; j<10; j++) {
            if(n[i] == n[j]) cont++;
        }
        if(cont > maxCont) {
            maxCont = cont;
            maisRepete = n[i];
        }
    }

    printf("Numero que mais se repete = %d (aparece %d vezes)\n", maisRepete, maxCont);
    return 0;
}