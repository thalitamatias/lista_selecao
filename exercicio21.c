#include <stdio.h>
int main(){

/*Faça um programa que receba uma frase, conte e imprima o número de vogais desta
frase.*/

//declaração de variaveis
char frase[100];
int i, vogais = 0;

//entrada de dados
printf("Digite uma frase: ");
fgets(frase, 100, stdin);

//processamento
for (i = 0; frase[i] != '\0'; i++) {

if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
vogais++;
}
}

//saida
printf("Numero de vogais: %d\n", vogais);

return 0;

}