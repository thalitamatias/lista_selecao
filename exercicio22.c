#include <stdio.h>
int main(){

/*Faça um programa que receba uma frase, conte e imprima o número de palavras desta
frase.*/

//declaração de variaveis
char frase[100];
int i, palavras = 0;

//entrada de dados
printf("Digite uma frase: ");
fgets(frase, 100, stdin);


//processamento
if (frase[0] != ' ' && frase[0] != '\n') {
palavras = 1;
}

for (i = 0; frase[i] != '\0'; i++) {
if (frase[i] == ' ' && frase[i + 1] != ' ' && frase[i + 1] != '\n' && frase[i + 1] != '\0') {
palavras++;
}
}

//saida
printf("Numero de palavras: %d\n", palavras);

return 0;

}