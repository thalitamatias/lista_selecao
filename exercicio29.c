#include <stdio.h>
int main(){

/*Efetuar a leitura de quatro número e apresentar os números que são divisíveis por 2 e
3.*/

//declaração de variaveis
int n1, n2, n3, n4;
int encontrou = 0;

//entrada de dados
printf("Digite o primeiro numero: ");
scanf("%d", &n1);

printf("Digite o segundo numero: ");
scanf("%d", &n2);

printf("Digite o terceiro numero: ");
scanf("%d", &n3);

printf("Digite o quarto numero: ");
scanf("%d", &n4);

//processamento

if (n1 % 2 == 0 && n1 % 3 == 0) {
printf("%d e divisivel por 2 e 3\n", n1);
encontrou = 1;
}

if (n2 % 2 == 0 && n2 % 3 == 0) {
printf("%d e divisivel por 2 e 3\n", n2);
encontrou = 1;
}

if (n3 % 2 == 0 && n3 % 3 == 0) {
printf("%d e divisivel por 2 e 3\n", n3);
encontrou = 1;
}

if (n4 % 2 == 0 && n4 % 3 == 0) {
printf("%d e divisivel por 2 e 3\n", n4);
encontrou = 1;
}

if (encontrou == 0) {
printf("Nenhum dos numeros e divisivel por 2 e 3.\n");
}

return 0;

}