#include <stdio.h>
#include <string.h>

int main(){

   char senha[20];

   printf("Insira sua senha: ");
   scanf("%s", senha);

   if (strcmp(senha, "ASDFG") == 0){
      printf("Acesso Liberado\n");
   } else {
      printf("Acesso Negado! Tente outra vez.");
   }
   return 0;
   }

