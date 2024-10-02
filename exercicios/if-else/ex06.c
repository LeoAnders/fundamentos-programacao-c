// Faça um programa que verifique se a letra digitada for: F ou M e imprima uma mensagem: masculino, feminino ou indefinido/outros.
#include <stdio.h>

int main()
{
  char letra;

  printf("Digite uma letra (F ou M): ");
  scanf(" %c", &letra);

  if (letra == 'F' || letra == 'f')
  {
    printf("Feminino\n");
  }
  else if (letra == 'M' || letra == 'm')
  {
    printf("Masculino\n");
  }
  else
  {
    printf("Indefinido/Outros\n");
  }

  return 0;
}
