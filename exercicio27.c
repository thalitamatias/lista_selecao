#include <stdio.h>
int main(){

/*O que será impresso depois de executado o seguinte algoritmo:
a) num = 20
b) num = -3
c) num = 0
leia(num)
se num > 0 então
quale = 'NUMERO POSITIVO'
senão
se num < 0 então
quale = 'NUMERO NEGATIVO'
senão
quale = 'zero';
fim se;
fim se;
escreva(quale);*/


//declaração de variaveis
int num;
char quale[20];

//entrada de dados
printf("Digite um numero: ");
scanf("%d", &num);

//processamento e saida
if (num > 0) {
printf("numero positivo");


} else if (num < 0) {
printf("numero negativo");

} else {
printf("zero");
}

return 0;

}