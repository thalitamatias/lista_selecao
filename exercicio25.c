#include <stdio.h>
int main(){

/*Escreva um programa que calcule o que deve ser pago por um produto, considerando o
preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela
a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado:

Código  Condição de pagamento
1       Á vista em dinheiro ou cheque, recebe 10% de desconto.
2       À vista no cartão de crédito, recebe 5% de desconto.
3       Em 2 vezes, preço normal de etiqueta sem juros.
4       Em 3 vezes, preço normal de etiqueta mais juros de 10%.*/

//declaração de entrada 
int codigo;
float preco, valorTotal;

//entrada de dados
printf("Digite o preco do produto: ");
scanf("%f", &preco);

printf("Digite o codigo: ");
scanf("%d", &codigo);

//processamento
if(codigo == 1){
    valorTotal = preco * 0.90;
    
} else if(codigo == 2){
    valorTotal = preco * 0.95;

} else if(codigo == 3){
    valorTotal = preco;

} else if(codigo == 4){
    valorTotal = preco * 1.10;

} else {
    printf("Codigo Invalido.\n");
    
return 0;

}

//saida
printf("Preco a pagar: %.2f\n", valorTotal);

}