// Construa um algoritmo que leia um vetor de 5 caracteres, e diga quantas
// consoantes foram lidas. Imprima as consoantes.

#include <stdio.h>
#include <ctype.h>

int main()
{
  char vetor[5];
  int contadorConsoantes = 0;

  printf("Digite 5 caracteres:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Caractere %d: ", i + 1);
    scanf(" %c", &vetor[i]);
  }

  printf("\nConsoantes lidas: ");
  for (int i = 0; i < 5; i++)
  {
    char letra = tolower(vetor[i]);
    if (isalpha(letra) && letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u')
    {
      printf("%c ", vetor[i]);
      contadorConsoantes++;
    }
  }

  printf("\nTotal de consoantes: %d\n", contadorConsoantes);

  return 0;
}
