#include <stdio.h>
int main(){

/*Faça um programa que receba a altura e o sexo de uma pessoa, calcule e imprima o seu
peso ideal, utilizando as seguintes fórmulas:
• para homens: (72.7 * H) - 58;
• para mulheres: (62.1 * H) – 44.7.*/

//declaração de variaveis
float altura, peso;
char  sexo;

//entrada de dados
printf("Digite sua altura: ");
scanf("%f", &altura);

printf("Digite seu sexo: ");
scanf(" %c", &sexo);

//processamento
if (sexo == 'f' || sexo == 'F') {
 peso = (62.1 * altura) - 44.7;

} else if  (sexo == 'm' || sexo == 'M') {
 peso = (72.7 * altura) - 58;
 } 

//saida
 printf("Seu peso ideal: %.2f\n", peso );

  return 0;
}




