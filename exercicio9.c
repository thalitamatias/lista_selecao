#include <stdio.h>
int main(){

   /*Faça um programa que receba o preço de um produto e o seu código de orígem e imprima
a sua procedência. A procedência obedece a seguinte tabela:
Código Procedência
1 Sul
2 Norte
3 Leste
4 Oeste
5 ou 6 Nordeste
7.8 ou 9 Sudeste
10 até 20 Centro-Oeste
21 até 30 Nordeste*/

//declaração de variaveis
    int codigo;
    float preco;


//entrada de dados 
    printf("Digite o peco do produto: ");
    scanf("%f", &preco);

    printf("Digite o codigo: ");
    scanf("%d", &codigo);


 //processamento e saida   
 if(codigo == 1){
    printf("Procedencia: Sul\n");

 } else if(codigo == 2){
    printf("Procedencia: Norte\n");

 }  else if(codigo == 3){
    printf("Procedencia: Leste\n");

 } else if(codigo == 4){
    printf("Procedencia: Oeste\n");

 } else if(codigo == 5 || codigo == 6){
    printf("Procedencia: Nordeste\n");

 } else if(codigo >= 7 && codigo <= 9){
    printf("Procedencia: Sudeste\n");

 } else if(codigo >= 10 && codigo <= 20){
    printf("Procedencia: Centro-Oeste\n");

 } else if(codigo >=21 && codigo <=30){
    printf("Procedencia: Nordeste\n");
 } else {
     printf("Codigo invalido\n");
 }

 return 0;
}