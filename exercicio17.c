#include <stdio.h>
int main(){

    /*Faça um programa que receba a medida de um ângulo em graus, um número inteiro.
Determine e imprima o quadrante em que se localiza este ângulo. Considere os quadrantes
abaixo:
Ângulo Quadrante
0 |__ 90 1 quadrante
90 |__ 180 2 quadrante
180 |__ 270 o quadrante
270 |__ 360 4 quadrante
0 __ -90 1quadrante
-90 |__ -180 2 quadrante
-180 |__ -270 3quadrante
-270 |__| -360 4 quadrante
para ângulos maiores que 360 graus, reduza ao intervalo de 0 a 360.*/

//declaração de variaveis
int angulo;

//entrada de dados
printf("Digite o angulo: ");
scanf("%d", &angulo);

//processamento e saida

if (angulo > 360) {
angulo = angulo - 360;
}

//numeros positivos
if( angulo >= 0 && angulo <= 90){
    printf("1 Quadrante");

} else if(angulo >= 90 && angulo <= 180){
    printf("2 Quadrante");

} else if(angulo >= 180 && angulo <= 270){
    printf("3 Quadrante");

} else if(angulo >= 270 && angulo <= 360){
    printf("4 Quandrante");
}

//numeros negativos
else if (angulo < 0 && angulo > -90){
    printf("1 quadrante");
}
else if (angulo <= -90 && angulo > -180){
    printf("2 quadrante");
}
else if (angulo <= -180 && angulo > -270){
    printf("3 quadrante");
}
else if (angulo <= -270 && angulo >= -360){
    printf("4 quadrante");

} else {
    printf("Angulo invalido.");
}

return 0;

}