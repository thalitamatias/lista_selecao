#include <stdio.h>
#include <math.h>
int main(){

/*Faça um programa para resolver equações do 2 grau.*/

//declaração de variaveis
 float a, b, c, delta, x1, x2;

 //declaração de variaveis
printf("Digite o valor de a: ");
scanf("%f", &a);

printf("Digite o valor de b: ");
scanf("%f", &b);

printf("Digite o valor de c: ");
scanf("%f", &c);


//processamento
delta = b * b - 4 * a * c;

if (delta > 0) {

x1 = (-b + sqrt(delta)) / (2 * a);
x2 = (-b - sqrt(delta)) / (2 * a);


//saida
printf("x1 = %.2f\n", x1);
printf("x2 = %.2f\n", x2);

} else if (delta == 0) {

    x1 = -b / (2 * a);

printf("x = %.2f\n", x1);

} else {

printf("Nao existem raizes reais.\n");

}

return 0;

}

