#include <stdio.h>
int main(){

/*Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas,
o número de dependentes do funcionário e a quantidade de horas extras trabalhadas. Calcule
e imprima o salário a receber do funcionário seguindo as regras abaixo:
• o valor da hora trabalhada é igual a 1/5 do salário mínimo;
• o salário do mês é igual ao número de horas trabalhadas vezes o valor da hora
trabalhada;
• para cada dependente acréscimo de 32 reais;
• para cada hora extra trabalhada o cálculo do valor da hora trabalhada acrescida de
50%;
• o salário bruto é igual ao salário do mês mais os valores dos dependentes mais os
valores das horas extras;
• o cálculo do valor do imposto de renda retido na fonte segue a tabela abaixo:
IRRF Salário bruto
isento Inferior a 200
10,00% de 200 até 500
20,00% superior a 500
• o salário líquido é igual ao salário bruto menos IRRF;
• a gratificação segue a próxima tabela:
Salário líquido Gratificação
Até 350 100 reais
Superior a 350 50 reais
• o salário a receber do funcionário é igual ao salário líquido mais a gratificação.*/

//declaração de variaveis
float salarioMinimo, valorHora, salarioMes, dependentes, valorDependentes, horasTrabalhadas; 
float horasExtras, valorHorasExtras, salarioBruto, irrf, salarioLiquido, gratificacao, salarioReceber;


//entrada de dados
printf("Digite o valor do salario minimo: ");
scanf("%f", &salarioMinimo);

printf("Digite o numero de horas trabalhadas: ");
scanf("%f", &horasTrabalhadas);

printf("Digite o numero de dependentes: ");
scanf("%f", &dependentes);

printf("Digite a quantidade de horas extras: ");
scanf("%f", &horasExtras);

//processamento

valorHora = salarioMinimo / 5;

salarioMes = horasTrabalhadas * valorHora;

valorDependentes = dependentes * 32;

valorHorasExtras = horasExtras * (valorHora * 1.5);

salarioBruto = salarioMes + valorDependentes + valorHorasExtras;

if (salarioBruto < 200) {
    irrf = 0;
} else if (salarioBruto <= 500) {
    irrf = salarioBruto * 0.10;
} else {
    irrf = salarioBruto * 0.20;
}

salarioLiquido = salarioBruto - irrf;

 if (salarioLiquido <= 350) {
    gratificacao = 100;
} else {
    gratificacao = 50;
}

salarioReceber = salarioLiquido + gratificacao;

//saida
printf("\nSalario a receber: R$ %.2f\n", salarioReceber);

return 0;

}

