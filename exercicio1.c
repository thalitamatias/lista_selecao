#include <stdio.h>

int main(){
      

     //ENTRADA DE DAODS
float n1, n2, n3, n4, media;

printf("Digite sua primeira nota: ");
scanf("%f", &n1);
printf("Digite sua segunda nota: ");
scanf("%f", &n2);
printf("Digite sua terceira nota: ");
scanf("%f", &n3);
printf("Digite sua quarta nota: ");
scanf("%f", &n4);

       //PROCESSAMENTO
media = (n1 + n2 + n3 + n4) / 4.0;

printf("\nMedia: %.2f\n", media);
 
       //SAIDA DE DADOS
if ( media >= 7) {
    printf("Aluno Aprovado");
} else {  
    printf("Aluno Reprovado");
}
  return 0;
}

