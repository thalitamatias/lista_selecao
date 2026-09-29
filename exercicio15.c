#include <stdio.h>
#include <math.h>
int main(){

/*Faça um programa que mostre um menu com as seguintes opções:
• soma
• raiz quadrada
• finalizar
O programa deve receber a opção desejada, receber os dados necessários para a
operação de cada opção, realizar a operação e imprimir o resultado. Na opção
finalizar nada deve acontecer.*/

//declaração de variaveis
int opcao;
float n1, n2, resultado;

//entrada de dados
printf("\nMENU\n");
printf("1: Soma\n");
printf("2: Raiz Quadrada\n");
printf("3: Finalizar\n");
printf("Escolha uma opcao: ");
scanf("%d", &opcao);

//processamento e saida
if ( opcao == 1 ){
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    resultado = n1 + n2;
    printf("Resultado da soma: %.2f\n", resultado);


} else if ( opcao == 2 ){
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    if (n1 >= 0){
        resultado = sqrt(n1);
        printf("Raiz Quadrada do numero: %.2f\n", resultado);

    } else {
        printf("Erro! Nao existe raiz quadrada de numero negatvo\n");

    }

    } else if ( opcao == 3 ){
        printf("Programa finalizado\n");

    } else {
        printf("Opcao Invalida\n");
    }

return 0;

}
 