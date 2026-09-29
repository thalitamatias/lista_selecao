#include <stdio.h>
int main(){

/*Uma empresa decidiu dar uma gratificação de Natal aos seus funcionários, baseada no
número de horas extras e no número de horas que o funcionário faltou ao trabalho. O valor
do prêmio é obtido pela consulta na tabela a seguir, em que:
H = (número de horas extras) – (2/3*(número de horas-falta))
H (minutos)  Prêmio ($)
> 240        500
1800 __|   2400 400
1200 __|  1800 300
600 __|   1200 200
<= 600    100
Faça um programa que receba o número de horas extras e o número de
horas-falta em minutos de um funcionário. Imprima o número de horas
extras em horas, o número de horas, o número de horas-falta em horas e o
valor do prêmio.*/


//declaração de variaveis
float minutosExtras, minutosFalta, horas, premio;

//entrada de dados
printf("Digite o numero de minutos extras trabalhadas: ");
scanf("%f", &minutosExtras);

printf("Digite os minutos de faltas ao trabalho: ");
scanf("%f", &minutosFalta);

//calculo

horas = ( minutosExtras) - (2/3 * (minutosFalta));

//processamento
if (horas > 600){
premio = 500;

} else if(horas > 180){
premio = 400;

} else if(horas > 120){
premio = 300;

} else if(horas > 60){
premio = 200;

} else {
premio = 100;

}

//saida
printf("Horas extras: %.2f\n", minutosExtras / 60.0);
printf("Horas-falta: %.2f\n", minutosFalta / 60.0);
printf("Premio: R$ %.2f\n", premio);


return 0;

}


