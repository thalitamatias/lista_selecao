#include <stdio.h>
int main(){

    /*Escreva um programa que leia o valor de dois números inteiros e a operação aritmética
desejada: calcule, então, a reposta adequada. Utilize os símbolos da tabela a seguir para ler
qual a operação aritmética escolhida:
Símbolo   Operação aritmética
+         adição
-         subtração
*         multiplicação
/         divisão*/

//declaração de variaveis
int n1, n2;
char simbolo;
float resultado;

//entrada de dados
printf("Digite o simbolo aritimetico desejado: ");
scanf(" %c", &simbolo);

printf("Digite o primeiro numero: ");
scanf("%d", &n1);

printf("Digite o segundo numero: ");
scanf("%d", &n2);

//processamento

if (simbolo == '+'){
    resultado = n1 + n2;

} else if (simbolo == '-'){
    resultado = n1 - n2;

} else if (simbolo == '*'){
    resultado = n1 * n2;

} else if (simbolo == '/'){
    resultado = n1 / n2;

} else {
    printf("Simbolo Invalido.");

return 0;

}

//saida
printf("Resultado: %.2f\n", resultado);

return 0;

}