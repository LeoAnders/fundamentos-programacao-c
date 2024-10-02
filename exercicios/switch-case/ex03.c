// 12) Faça um programa que implemente uma calculadora simples. O programa deve solicitar
// os operandos e o operador e mostrar a entrada e o resultado. Inclua verificadores de erro
// para operadores inválidos e tentativa de divisão por zero.
// O menu será como segue:
// [ A ]– Adição
// [ S ]– Subtração
// [ M ]– Multiplicação
// [ D ]– Divisão
// [ F ]– Fim

#include <stdio.h>
#include <ctype.h>

int main()
{
  char operando;
  int primeiroValor, segundoValor;
  int continuar = 1;

  while (continuar)
  {
    printf("===============================\n");
    printf("        CALCULADORA            \n");
    printf("===============================\n");
    printf("\nEscolha uma operação:\n");
    printf("[ A ] - Adição\n");
    printf("[ S ] - Subtração\n");
    printf("[ M ] - Multiplicação\n");
    printf("[ D ] - Divisão\n");
    printf("[ F ] - Fim\n");
    printf("\nDigite a opção desejada: ");
    scanf(" %c", &operando);

    if (operando == 'F' || operando == 'f')
    {
      printf("Fim da calculadora.\n");
      break;
    }

    printf("\nInforme o primeiro valor: ");
    scanf("%d", &primeiroValor);

    printf("\nInforme o segundo valor: ");
    scanf("%d", &segundoValor);

    switch (toupper(operando))
    {
    case 'A':
      printf("A soma de %d + %d é %d\n", primeiroValor, segundoValor, primeiroValor + segundoValor);
      break;
    case 'S':
      printf("A subtração de %d - %d é %d\n", primeiroValor, segundoValor, primeiroValor - segundoValor);
      break;
    case 'M':
      printf("A multiplicação de %d * %d é %d\n", primeiroValor, segundoValor, primeiroValor * segundoValor);
      break;
    case 'D':
      if (segundoValor == 0)
      {
        printf("Erro: Divisão por zero não é permitida.\n");
      }
      else
      {
        printf("A divisão de %d / %d é %.2f\n", primeiroValor, segundoValor, (float)primeiroValor / segundoValor);
      }
      break;
    default:
      printf("Operador inválido. Por favor, tente novamente.\n");
      break;
    }

    printf("\nDeseja continuar? [1] Sim / [0] Não: ");
    scanf("%d", &continuar);
  }

  return 0;
}
