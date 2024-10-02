// Faça um programa que verifique se uma letra digitada é vogal ou consoante. Se digitar
// outro caractere (número ou símbolo) informe “A entrada é inválida”

#include <stdio.h>
#include <ctype.h>

int main()
{
  char letra;
  printf("Digite uma letra: ");
  scanf("%c", &letra);

  letra = tolower(letra);

  if (isalpha(letra))
  {
    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("A letra '%c' é uma vogal.\n", letra);
      break;
    default:
      printf("A letra '%c' é uma consoante.\n", letra);
      break;
    }
  }
  else
  {
    printf("A entrada é inválida.\n");
  }
  return 0;
}
