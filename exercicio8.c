#include <stdio.h>
int main(){

   
/*No curso de Desenvolvimento de Software, a nota final do estudante é calculada a partir de
3 notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral
e a um exame final. As notas variam de 0 a 10 e a nota final é média ponderada das 3 notas
mencionadas. A tabela a seguir fornece os pesos das notas:
Laboratório - peso 2
Av. Semestral - peso 3
Exame final - peso 5
Faça um programa que receba as 3 notas do estudante, calcule e imprima a
média final e o conceito desse estudante.
O conceito segue a tabela abaixo:
média final conceito
8.0 |__| 10.0 A
7.0 |__ 8.0 B
6.0 |__ 7.0 C
5.0 |__ 6.0 D
< 5.0 E*/


//declaração de variaveis
float n1, n2, n3, media;

//entrada de dados  
printf("Digite sua primeira nota: ");
scanf("%f", &n1);
printf("Digite sua segunda nota: ");
scanf("%f", &n2);
printf("Digite sua terceira nota: ");
scanf("%f", &n3);

//processamento
media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

//saida
if ( media >= 8.0 ){
    printf("Conceito: A");

} else if( media >= 7.0){
    printf("Conceito: B");

} else if( media >= 6.0){
    printf("Conceito: C");

} else if( media >= 5.0){
    printf("Conceito: D");

}  else {
    printf("Conceito: E");
    }
                                   

return 0;     
       
}