# -*- encoding:utf-8 -*-
def power(base, high):
  if(high <= 0):
    return 1
  return (base * power( base, high - 1))

def mod(dividend, divider):
  return dividend % divider



base = int(input("Digite a base: "))
high = int(input("Digite o valor elevado: "))
divider = int(input("Digite o valor para dividir: "))

my_mod = mod(power(base, high),divider)

print("O resto da é %i, compatilhe esse valor com o seu amigo\n" % my_mod)

mod_friend = int(input("Digite o resto da soma do seu amigo: "))

key_private = mod(power(mod_friend, high), divider)

print("O valor da chave privada é %i\n" % key_private)