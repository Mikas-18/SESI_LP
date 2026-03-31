//2) Leia um número inteiro e informe se ele é par ou ímpar.

#include <stdio.h>

int main(){
 
  int NI;
 
 
 printf("Digite um número inteiro:");
 scanf("%i", &NI );
 
 if (NI % 2 == 0) 
 printf("É PAR");
 else 
 printf("É IMPAR");
 
 
 
 
}