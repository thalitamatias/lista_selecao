#include <stdio.h>
int main(){

/*Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferiora 500
reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do
salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento.*/

//declaração de variaveis
float salario;

//entrada de dados
printf("Digite seu salario: ");
scanf("%f", &salario);

//processamento
if ( salario < 500 ) {
 salario = salario * 1.30;

//saida
printf("Novo salario e: %.2f\n", salario);
} else {
printf("Voce nao em direitro de receber os 30%%");

}
  return 0;
}