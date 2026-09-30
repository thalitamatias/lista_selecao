#include <stdio.h>
int main(){

    /*Faça um programa que calcule e imprima o salário reajustado de um funcionário de acordo
com a seguinte regra:
• salários até 300, reajuste de 50%;
• salários maiores que 300, reajuste de 30%.*/

//declaração de variaveis
float salario;

//entrada de dados
printf("Digite seu salario: ");
scanf("%f", &salario);

//processamento
if(salario <= 300){
salario = salario * 1.50;
} else {
salario = salario * 1.30;
}
    
//saida
printf("Seu salario com o reajuste e: %.2f\n", salario);
 
return 0;
  
}





