// 6) Ano Bissexto
// Leia um ano e informe se ele é bissexto ou não. 

#include <stdio.h>

int main (){
    
    int ano;
    
    printf("DIGITE O ANO:");
    scanf("%i", &ano );
    
    if ((ano % 4 == 0 && ano % 100 != 0) | (ano % 400 == 0)) {
    printf( "%i é um ano bissexto", ano);
    } else {
    printf("%i não é um ano bissexto", ano );
    }
    
}
    

