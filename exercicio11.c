#include <stdio.h>

int main(){

    float numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    if(numero1 < numero2){
        printf("O menor numero e: %.1f\n", numero1);

    } else if(numero2 < numero1){
        printf("O menor numero e: %.1f\n", numero2);

    } else {
        printf("Os dois numeros sao iguais");
    }
      return 0;

}