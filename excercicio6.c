#include <stdio.h>

int main(){

      //ENTRADA DE DADOS
float altura, peso;
char  sexo;

printf("Digite sua altura: ");
scanf("%f", &altura);

printf("Digite seu sexo: ");
scanf(" %c", &sexo);

      //PROCESSAMENTO
if (sexo == 'f' || sexo == 'F') {
 peso = (62.1 * altura) - 44.7;

} else if  (sexo == 'm' || sexo == 'M') {
 peso = (72.7 * altura) - 58;
 } 

     //SAIDA DE DADOS
 printf("Seu peso ideal e: %.2f\n", peso );

  return 0;
}




