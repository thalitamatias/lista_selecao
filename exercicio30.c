#include <stdio.h>
int main(){

    /*Construa um programa que seja capaz de concluir qual dentre os seguintes animais foi
escolhido, através de perguntas e respostas. Animais possíveis: leão, cavalo, homem,
macaco, morcego, baleia, avestruz, pinguim, pato, águia, tartaruga, crocodilo e cobra.*/

//declaração de variaveis
char resposta;

//entrada de dados

printf("O animal e mamifero? (s/n): ");
scanf(" %c", &resposta);


if (resposta == 's') {

    printf("O animal e quadrupede? (s/n): ");
    scanf(" %c", &resposta);

if (resposta == 's') {
printf("O animal e carnivoro? (s/n): ");
scanf(" %c", &resposta);

if (resposta == 's') {
printf("O animal escolhido foi o leao.\n");

} else {
printf("O animal escolhido foi o cavalo.\n");
}

} else {
printf("O animal e bipede? (s/n): ");
scanf(" %c", &resposta);


if (resposta == 's') {
printf("O animal e onivoro? (s/n): ");
scanf(" %c", &resposta);


if (resposta == 's') {
printf("O animal escolhido foi o homem.\n");

} else {

printf("O animal escolhido foi o macaco.\n");
}

} else {
printf("O animal e voador? (s/n): ");
scanf(" %c", &resposta);

if (resposta == 's') {
printf("O animal escolhido foi o morcego.\n");

} else {
printf("O animal escolhido foi a baleia.\n");
}
}
}

} else {
printf("O animal e ave? (s/n): ");
scanf(" %c", &resposta);

        
if (resposta == 's') {
printf("O animal e nao-voador? (s/n): ");
scanf(" %c", &resposta);


if (resposta == 's') {
printf("O animal e tropical? (s/n): ");
scanf(" %c", &resposta);

if (resposta == 's') {
printf("O animal escolhido foi o avestruz.\n");


} else {
printf("O animal escolhido foi o pinguim.\n");
}


} else {
printf("O animal e nadador? (s/n): ");
scanf(" %c", &resposta);


if (resposta == 's') {
printf("O animal escolhido foi o pato.\n");
                
} else {
printf("O animal escolhido foi a aguia.\n");
}
}


} else {
printf("O animal e reptil? (s/n): ");
scanf(" %c", &resposta);


if (resposta == 's') {
printf("O animal tem casco? (s/n): ");
scanf(" %c", &resposta);


if (resposta == 's') {
printf("O animal escolhido foi a tartaruga.\n");


} else {
printf("O animal e carnivoro? (s/n): ");
scanf(" %c", &resposta);


if (resposta == 's') {
printf("O animal escolhido foi o crocodilo.\n");

} else {
printf("O animal escolhido foi a cobra.\n");
            }
        }

} else {
printf("Animal nao encontrado.\n");
        }
    }
}

    return 0;


}