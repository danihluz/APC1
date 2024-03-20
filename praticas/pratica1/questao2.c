// 2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

#include <stdio.h>

int main () {
  printf ("-------------------------------\n");
  printf ("CÁLCULO DA ÁREA DE UM TRIÂNGULO\n");
  printf ("-------------------------------\n");

  int base > 0;
  int altura > 0;
  
  printf ("Insira o valor da base\n");
  scanf ("%d" , base);

  printf ("Insira o valor da altura\n");
  scanf ("%d" , altura);

  int calculo = (base * altura / 2);
  printf ("A área do triângulo é %d\n" , calculo);
}