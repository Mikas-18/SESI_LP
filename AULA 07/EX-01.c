
#include <stdio.h>
int somadeDOISVALORES(int a,int b){
    return a + b;
}
int main(){
 int n1, n2;
 int soma=0;
 
 printf("Digite primeiro valor:");
 scanf("%i", &n1);
 
  printf("Digite segundo valor:");
 scanf("%i", &n2);
 
//  soma= n1 + n2
 soma= somadeDOISVALORES(n1,n2);
 
 
 printf("A soma dos dois valores: %i", soma);
 printf("\n 5 + 5=%i",somadeDOISVALORES(5, 5));     
printf("\n 3 + 15=%i",somadeDOISVALORES(3, 15));  
 
}