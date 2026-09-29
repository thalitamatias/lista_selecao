#include <stdio.h>
int main(){

/*Faça um programa que receba uma frase, conte e imprima a quantidade de vezes em
que aparece a palavra “aula”.*/


//declaraçõa de variaveis
char frase[200];
int i, quantidade = 0;

//entrada de dados
printf("Digite uma frase: ");
fgets(frase, 200, stdin);

//processamento
for (i = 0; frase[i] != '\0'; i++) {

if (frase[i] == 'a' &&
frase[i + 1] == 'u' &&
frase[i + 2] == 'l' &&
frase[i + 3] == 'a') {
quantidade++;
}
}

//saida
printf("A palavra \"aula\" aparece %d vez(es).\n", quantidade);

return 0;

}