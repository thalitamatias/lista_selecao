#include <stdio.h>
int main(){
 
    /*Faça um programa que receba a idade de uma pessoa e classifique-a seguindo o critério
a seguir:
idade Classificação
0 a 2 anos Recém-nascido
3 a 11 anos criança
12 a 19 anos adolescente
20 a 55 anos adulto
Acima de 55 anos idoso*/

//declaração de variaveis
float idade;

//entrada de dados
printf("Digite sua idade: ");
scanf("%f", &idade);

//processamento e saida
if( idade <= 2){
 printf("Classificacao: Recem-Nascido");

} else if( idade >= 3 &&  idade <= 10){
    printf("Classificacao: Crianca");

} else if( idade >= 12 &&  idade <= 19){
    printf("Classificacao: Adolescente");

} else if( idade >= 20 && idade <= 55){
    printf("Classifcacao: Adulto");
    
} else {
    printf("Classificacao: Idoso");


    
}
return 0;

}
