// 2. Construa um programa que mostre em tela um cartão de visita, use | e – para fazer o cartão. R.:

#include <stdio.h>
#include <stdlib.h>

int dadosInformativos(void){
  printf("Nome: Leonardo Anders\n");
  printf("Endereço: Springfield, 742, Evergreen Terrace\n");
  printf("Telefone:47 99999-9999\n");
  printf("E-mail:estouaprendendoc@gmail.com\n");
  printf("CPF:999.999.999-99\n");
  printf("RG:9.999.999\n");

  return 0;
}

int cartaoVisitas(void){
   printf("-------------------------------\n");

   return 0;
}


int main(void) {
  cartaoVisitas();
  dadosInformativos();

  return 0;
}