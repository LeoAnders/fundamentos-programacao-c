/* Uma determinada empresa vende uma máquina que possui seis motores. Um
de 20 CV, dois de 1 CV, e três de 5 CV, que custam 1500, 300 e 600 reais
respectivamente cada motor. Existe a necessidade de saber quantos motores
deverão ser comprados de cada modelo e quanto custará esta compra. Para
isto elabore um programa que:
  a. Pergunte quantas máquinas serão vendidas;
  b. Calcule e apresente na tela a quantidade de motores que deverão ser
comprados de cada modelo;
  c. Calcule e apresente na tela o custo total por máquina, o custo por tipo
de motor e o custo total da compra. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Definições dos motores e seus preços
  int quantidadeMotor20CV = 1;
  int quantidadeMotor1CV = 2;
  int quantidadeMotor5CV = 3;

  float precoMotor20CV = 1500.00f;
  float precoMotor1CV = 300.00f;
  float precoMotor5CV = 600.00f;

  // Número de máquinas a serem vendidas
  int maquinasVendidas;
  printf("Insira o número de máquinas a serem vendidas: ");
  scanf("%d", &maquinasVendidas);

  // Cálculo das quantidades de motores
  int totalMotores20CV = maquinasVendidas * quantidadeMotor20CV;
  int totalMotores1CV = maquinasVendidas * quantidadeMotor1CV;
  int totalMotores5CV = maquinasVendidas * quantidadeMotor5CV;

  // Cálculo dos custos
  float custoPorMaquina = precoMotor20CV + (precoMotor1CV * quantidadeMotor1CV) + (precoMotor5CV * quantidadeMotor5CV);
  float custoTotalPorTipo20CV = totalMotores20CV * precoMotor20CV;
  float custoTotalPorTipo1CV = totalMotores1CV * precoMotor1CV;
  float custoTotalPorTipo5CV = totalMotores5CV * precoMotor5CV;
  float custoTotalCompra = custoTotalPorTipo20CV + custoTotalPorTipo1CV + custoTotalPorTipo5CV;

  // Exibição dos resultados
  printf("\nQuantidade de motores a serem comprados:\n");
  printf("Motores de 20 CV: %d\n", totalMotores20CV);
  printf("Motores de 1 CV: %d\n", totalMotores1CV);
  printf("Motores de 5 CV: %d\n", totalMotores5CV);

  printf("\nCustos:\n");
  printf("Custo total por máquina: %.2f\n", custoPorMaquina);
  printf("Custo total dos motores de 20 CV: %.2f\n", custoTotalPorTipo20CV);
  printf("Custo total dos motores de 1 CV: %.2f\n", custoTotalPorTipo1CV);
  printf("Custo total dos motores de 5 CV: %.2f\n", custoTotalPorTipo5CV);
  printf("Custo total da compra: %.2f\n", custoTotalCompra);

  return 0;
}
