#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argv, char *argc[])
{
  setlocale(LC_ALL, "portugues");
  int base, key, divider, mod;

  printf("Digite um número inteiro para ser a base: ");
  scanf("%d", &base);
  printf("Digite sua chave: ");
  scanf("%d", &key);

  printf("Digite o valor que vamos dividir o valor da potência, %d ^ %d: ", base, key);
  scanf("%d", &divider);  
  
  mod = pow(base, key);
  mod %= divider;

  printf("Envie o número %d", mod);
  
  return 0;
}
