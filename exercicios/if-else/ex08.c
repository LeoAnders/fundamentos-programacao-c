// Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente.

int main()
{
  int a, b, c;

  printf("Digite três valores inteiros: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a > b)
  {
    int temp = a;
    a = b;
    b = temp;
  }
  if (a > c)
  {
    int temp = a;
    a = c;
    c = temp;
  }
  if (b > c)
  {
    int temp = b;
    b = c;
    c = temp;
  }

  printf("Ordem crescente: %d, %d, %d\n", a, b, c);

  return 0;
}