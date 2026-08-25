#include <stdio.h>

int main(){

    float n1, n2, n3, media;

   
     printf("Digite sua primeira nota: ");
    scanf("%f", &n1);
     printf("Digite sua segunda nota: ");
    scanf("%f", &n2);
      printf("Digite sua terceira nota: ");
    scanf("%f", &n3);


    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

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