#include <stdio.h>
int main(){

  /*Faça um programa que receba a idade de uma pessoa e imprima mensagem de maioridade
ou não.*/
      
//declação de variaveis
int idade;

//entrada de dados
printf("Digte sua idade: ");
scanf("%d", &idade);
  
//processamento
  if(idade >= 18) {

//saida
    printf("Maior de idade");
  } else {
    printf("Menor de idade");
  }

  return 0;
}