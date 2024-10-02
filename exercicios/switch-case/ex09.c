// Faça um programa que exiba um menu e possa realizar as seguintes operações: 	a) Divisão de 2 números
// 	b) Leia seu primeiro nome e imprima na tela
// 	c) Conversão de moeda (Dólar para Real)
// 	d) Sair

#include <stdio.h>

int main()
{
  int opcao;
  float num1, num2, resultado;

  do
  {
    printf("\nMenu:\n");
    printf("1. Divisão de 2 números\n");
    printf("2. Leia seu primeiro nome e imprima na tela\n");
    printf("3. Conversão de moeda (Dólar para Real)\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("Digite o primeiro número: ");
      scanf("%f", &num1);
      printf("Digite o segundo número: ");
      scanf("%f", &num2);
      if (num2 != 0)
      {
        resultado = num1 / num2;
        printf("Resultado da divisão: %.2f\n", resultado);
      }
      else
      {
        printf("Divisão por zero não é permitida!\n");
      }
      break;
    case 2:
    {
      char nome[50];
      printf("Digite seu primeiro nome: ");
      scanf("%s", nome);
      printf("Seu nome é: %s\n", nome);
    }
    break;
    case 3:
    {
      float dolar, real;
      printf("Digite o valor em Dólares: ");
      scanf("%f", &dolar);
      printf("Digite a cotação do Dólar: ");
      scanf("%f", &real);
      printf("Valor em Reais: %.2f\n", dolar * real);
    }
    break;
    case 4:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida!\n");
    }
  } while (opcao != 4);

  return 0;
}
