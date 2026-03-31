// 1) Classificação de Idade
// Leia a idade de uma pessoa e informe:
// Criança (0–12), Adolescente (13–17), Adulto (18–59), Idoso (60+)

#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if(idade >= 0 & idade <= 12)
    printf(" Voce é uma Criança\n");

    if(idade >= 13 & idade <= 17)
    printf("Voce é um Adolescente\n");

    if(idade >= 18 & idade <= 59)
    printf("Voce é um Adulto\n");

    if(idade >= 60 & idade <= 120)
    printf("Voce é um Idoso\n");
    
    if(idade >= 120)
    printf("Você é uma Múmia\n");
   
}