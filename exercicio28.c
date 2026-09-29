#include <stdio.h>
int main(){

/*Verificar se dados três valores inteiros quaisquer os mesmo formam um triângulo. Se
formar informar o tipo, caso contrário, informar que os lados não formam um triângulo.*/

//declaração de variaveis
int a, b, c;

//entrada de dados
printf("Digite o primeiro lado: ");
scanf("%d", &a);
printf("Digite o segundo lado: ");
scanf("%d", &b);
printf("Digite o terceiro lado: ");
scanf("%d", &c);

//processamento e saida

if (a < b + c && b < a + c && c < a + b) {

if (a == b && b == c) {
printf("Triangulo equilatero");

} else if (a == b || a == c || b == c) {
printf("Triangulo isosceles");

} else {
printf("Triangulo escaleno");
}

} else {
printf("Os lados nao formam um triangulo");
}

return 0;

}