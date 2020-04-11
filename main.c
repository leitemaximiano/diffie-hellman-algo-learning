#include <stdio.h>

typedef unsigned long long INT64BYTES;

INT64BYTES power(INT64BYTES base, INT64BYTES high);
INT64BYTES mod(INT64BYTES dividend, INT64BYTES divider);

int main() 
{ 
  INT64BYTES base, high, divider, my_mod, mod_friend, key_private;

  printf("Digite a base: ");
  scanf("%lld", &base);

  printf("Digite o valor elevado a %lld: ", base);
  scanf("%lld", &high);

  printf("Digite o valor para dividir a %lld ^ %lld: ", base, high);
  scanf("%lld", &divider);

  my_mod = mod(power(base, high),divider);

  printf("O resto da é %lld, compatilhe esse valor com o seu amigo\n", my_mod);


  printf("Digite o resto da soma do seu amigo: ");
  scanf("%lld", &mod_friend);

  key_private = mod(power(mod_friend, high), divider);

  printf("O valor da chave privada é %lld\n", key_private); 
  return 0; 
}

INT64BYTES power(INT64BYTES base, INT64BYTES high)
{
  if(high <= 0)
    return 1;
  return (base * power( base, --high));
  
}

INT64BYTES mod(INT64BYTES dividend, INT64BYTES divider) 
{
  return dividend % divider;
}




