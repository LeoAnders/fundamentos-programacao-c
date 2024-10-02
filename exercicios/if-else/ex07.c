// Faça um programa que verifique se uma letra digitada é vogal ou consoante.
// Se digitar outro caractere (número ou símbolo) informe “A entrada é inválida”

#include <stdio.h>
#include <ctype.h>

int vogal(char letra)
{
  char vogais[] = {'A', 'E', 'I', 'O', 'U'};

  for (int i = 0; i < 5; i++)
  {
    if (toupper(letra) == vogais[i])
    {
      return 1; // É uma vogal
    }
  }
  return 0;
}

int main()
{
  char letra;

  printf("Digite uma letra: ");
  scanf(" %c", &letra);

  if (isalpha(letra))
  {
    if (vogal(letra))
    {
      printf("É uma vogal\n");
    }
    else
    {
      printf("É uma consoante\n");
    }
  }
  else
  {
    printf("A entrada é inválida\n");
  }

  return 0;
}
