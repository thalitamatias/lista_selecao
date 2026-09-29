#include <stdio.h>
int main(){

   /*Faça um programa que receba o código correspondente ao cargo de um funcionário e
imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito seguindo
a tabela:
Código Cargo Percentual
1 Escriturário 50,00%
2 Secretário 35,00%
3 Caixa 20,00%
4 Gerente 10,00%
5 Diretor Não tem aumento*/
 
//declaração de variaveis
int codigo;

//entrada de dados

printf("Digite o seu codigo: ");
scanf("%d", &codigo);

//processamento e saida

 if( codigo == 1 ){
    printf("Cargo: Escriturario - Percentual: 50.00%%\n");

 } else if( codigo == 2){
   printf("Cargo: Secretario - Percentual: 35.00%%\n");

 } else if( codigo == 3){
    printf("Cargo: Caixa - Percentual: 20.00%%\n");

 } else if( codigo == 4){
    printf("Cargo: Gerente - Percentual: 10.00%%\n");

 } else if ( codigo == 5){
    printf("Cargo: Diretor - Percentual: Nao tem aumento\n");
 } else {
    printf("Codigo invalido\n");
 }

  return 0;

 
}


