
#include <stdio.h>
int subtraçãodeDOISVALORES(int a,int b){
    return a - b;
}

int DivisãodeDOISVALORES(int a,int b){
    return a / b;
}
int MultiplicaçãodeDOISVALORES(int a,int b){
    return a * b;
}

int somadeDOISVALORES(int a,int b){
    return a + b;
}
int main(){
 int n1, n2;
 int soma=0;
 int subtraçao=0;
 int multiplicação=0;
 int Divisão=0;
 
 
 printf("Digite primeiro valor:");
 scanf("%i", &n1);
 
  printf("Digite segundo valor:");
 scanf("%i", &n2);
 
//  soma= n1 + n2
 soma= somadeDOISVALORES(n1,n2);
 printf("\n\nA soma dos dois valores: %i", soma);

//  subtração= n1 - n2
 subtraçao=subtraçãodeDOISVALORES(n1,n2);
 
 printf("\n\nA subtraçao dos dois valores: %i", subtraçao);
//  multiplicação= n1 x n2
 multiplicação=MultiplicaçãodeDOISVALORES(n1,n2);
 
 printf("\n\nA multiplicação dos dois valores: %i", multiplicação);
// divisão= n1 / n2 
 Divisão=DivisãodeDOISVALORES(n1,n2);
 
 printf("\n\nA Divisão dos dois valores: %i", Divisão);
 if(Divisão<=0){
 printf("\n\nA Divisão dos dois valores: indefinida");
 
 return 0;
}

}