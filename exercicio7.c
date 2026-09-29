#include <stdio.h>
int main(){

    /*Faça um programa que receba a idade de um nadador e imprima a sua categoria seguindo
as regras:
categoria idade
infantil A 5 – 7 anos
infantil B 8 – 10 anos
juvenil A 11 – 13 anos
juvenil B 14 – 17 anos
sênior maiores de 18 anos*/

//declaração de variaveis
int idade;

//entrada de dados
printf("Digite sua idade: ");
scanf("%d",  &idade);


//processamento e saida
if( idade >= 5 && idade <= 7) {
    printf("Categoria: Infantil A");

} else if( idade >= 8 && idade <= 10){
    printf("Categoria: Infantil B");

} else if( idade >= 11 && idade <= 13){
    printf("Categoria: Juvenil A");

} else if( idade >= 14 && idade <= 17){
    printf("Categoria: Juvenil B");

}  else  if ( idade >= 18) {
    printf("Categoria: Senior");
} 

 return 0;
}