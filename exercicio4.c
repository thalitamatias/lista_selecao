#include <stdio.h>

int main(){
      
//ENTRADA DE DADOS
    int idade;

printf("Digte sua idade: ");
  scanf("%d", &idade);
  
//PROCESSAMENTO
  if(idade >= 18) {

//SAIDA DE DADOS
    printf("Maior de idade");
  } else {
    printf("Menor de idade");
  }

  return 0;
}