#include <stdio.h>
#include <string.h>
int main(){

/*Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é
um conjunto de caracteres que são: 'ASDFG'. O programa deve imprimir mensagem de
permissão ou negação de acesso.*/

//declaração de variaveis
char senha[20];

//entrada de dados
printf("Insira sua senha: ");
scanf("%s", senha);

if (strcmp(senha, "ASDFG") == 0){
printf("Acesso Liberado\n");
} else {
printf("Acesso Negado! Tente outra vez.");
}

return 0;

}

