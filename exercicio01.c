#include <stdio.h>
int main(){
      
    /*Faça um programa que receba quatro notas de um aluno, calcule e imprima a média aritmética
das notas e a mensagem de aprovado para média superior ou igual a 7.0 ou a mensagem de
reprovado para média inferior a 7.0.*/

 //declaaração de variaveis
float n1, n2, n3, n4, media;

//entrada de dados
printf("Digite sua primeira nota: ");
scanf("%f", &n1);
printf("Digite sua segunda nota: ");
scanf("%f", &n2);
printf("Digite sua terceira nota: ");
scanf("%f", &n3);
printf("Digite sua quarta nota: ");
scanf("%f", &n4);

//processamento
media = (n1 + n2 + n3 + n4) / 4.0;

//saida
printf("\nMedia: %.2f\n", media);
 
if ( media >= 7) {
    printf("Aluno Aprovado");
} else {  
    printf("Aluno Reprovado");
}
  return 0;
}

