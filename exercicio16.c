#include <stdio.h>
int main(){

/*Uma companhia de seguros tem três categorias de seguros baseadas na idade e na
ocupação do segurado. Somente pessoas com pelo menos 18 anos e não mais de 70 anos
podem adquirir apólices de seguros. Quanto às classes de ocupações foram definidos três
grupos de risco. A tabela a seguir fornece as categorias em função da caixa de idade e do
grupo de risco:
idade

Grupo de risco
Baixo Médio Alto
18 a 24 7 8 9
25 a 40 4 5 6
41 a 70 1 2 3
Faça um programa que receba a idade e o grupo*/

//declaração de variaveis
int idade;
char grupoRisco;

//entrada de dados
printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Digite seu grupo de risco(b, m ou a): ");
scanf(" %c", &grupoRisco);

//processamento e saida

//primeira parte
if(idade >= 18 && idade <= 24){ 

if(grupoRisco == 'b'){
printf("Codigo seguro: 7");
    
} else if(grupoRisco == 'm'){
printf("Codigo seguro: 8");

} else if(grupoRisco == 'a') {
printf("Codigo seguro: 9");

} else {
printf("Grupo de risco invalido");
}

//segunda parte
} else if(idade >= 25 && idade <= 40){

if(grupoRisco == 'b'){
printf("Codigo seguro: 4");

} else if(grupoRisco == 'm'){
printf("Codigo seguro: 5"); 

} else if(grupoRisco == 'a') {
printf("Codigo seguro: 6");

} else {
printf("Grupo de risco invalido");

}


//terceira parte
} else if(idade >= 41 && idade <= 70){

if(grupoRisco == 'b'){
printf("Codigo seguro: 1");

} else if(grupoRisco == 'm'){
printf("Codigo seguro: 2");

} else if(grupoRisco == 'a'){
printf("Codigo seguro: 3");

} else {
printf("Grupo de risco invalido");
}

return 0;
}
}



