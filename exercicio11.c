#include <stdio.h>
int main(){

/*Faça um programa que receba dois números e imprima o menor dos dois.*/

//declaração de variaveis
float numero1, numero2;


//entrada de dados
printf("Digite o primeiro numero: ");
scanf("%f", &numero1);
printf("Digite o segundo numero: ");
scanf("%f", &numero2);

//processamento e saida
if(numero1 < numero2){
printf("Menor numero: %.1f\n", numero1);

 } else if(numero2 < numero1){
printf("Menor numero: %.1f\n", numero2);

} else {
printf("Os dois numeros sao iguais");
}
      
return 0;

}