#include <stdio.h>

int main(){

      //ENTRADA DE DADOS
float salario;

printf("Digite seu salario: ");
scanf("%f", &salario);
 
      //PROCESSAMENTO
if ( salario < 500 ) {
 salario = salario * 1.30;
 
      //SAIDA DE DADOS 
 printf("\nSeu salario agora e: %.2f\n", salario);
} else {
    printf("Voce nao em direitro de receber os 30%%");

}
  return 0;
}