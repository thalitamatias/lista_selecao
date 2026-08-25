#include <stdio.h>

int main(){

    //ENTRADA DE DADOS
int idade;

printf("Digite sua idade: ");
scanf("%d",  &idade);

    //PROCESSAMENTO E SAIDA DE DADOS
if( idade >= 5 && idade <= 7) {
    printf("Categoria: Infantil A");

} else if( idade >= 8 && idade <= 10){
    printf("Categoria: Infantil B");

} else if( idade >= 11 && idade <= 13){
    printf("Categoria: Juvenil A");

} else if( idade >= 14 && idade <= 17){
    printf("Categoria: Juvenil B");

}  else {
    printf("Categoria: Senior");
} 

 return 0;
}