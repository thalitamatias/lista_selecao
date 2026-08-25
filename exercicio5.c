#include <stdio.h>

int main(){

    //ENTRADA DE DADOS
float salario;

printf("Digite aqui seu salario: ");
scanf("%f", &salario);
   
    //PROCESSAMENTO
if(salario <= 300){
    salario = salario * 1.50;
} else {
    salario = salario * 1.30;
    }
    
     //SAIDA DE DADOS
printf("Seu salario com o reajuste e: %.2f\n", salario);
 
  return 0;
  
}





