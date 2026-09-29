#include <stdio.h>
int main(){
 
    /*Faça um programa que receba um número, verifique se este número é par ou ímpar e
imprima a mensagem.*/

//declaração de variaveis
int numero;

printf("Digite o numero: ");
scanf("%d", &numero);


//processamento e saida
if (numero % 2 == 0){
printf("O numero %d e PAR\n", numero);

} else {
printf("O numero %d e PAR\n", numero);
 
}

return 0;

}