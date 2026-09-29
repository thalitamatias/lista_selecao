#include <stdio.h>
int main(){

/*Faça um programa que receba três notas de um aluno, calcule e imprima a média
aritmética entre essas três notas e uma mensagem que segue a tabela abaixo:
Média Mensagem
0.0 |__ 5.0 reprovado
5.0 |__ 7.0 exame
7.0 |__| 10.0 aprovado*/

//declaração de variaveis
float n1, n2, n3, media;

//entrada de dados
printf("Digite sua primeira nota: ");
scanf("%f", &n1);
printf("Digite sua segunda nota: ");
scanf("%f", &n2);
printf("Digite sua terceira nota: ");
scanf("%f", &n3);

//processamento
media = (n1 + n2 + n3) / 3;

//saida
if( media >= 7 ){
    printf("Media: %.2f - Aluno Aprovado\n", media);
} else if( media >= 5 ){
    printf("Media: %.2f -Exame\n", media);
} else {
   printf("Media: %.2f - Aluno Reprovado\n", media);
}
return 0;
}