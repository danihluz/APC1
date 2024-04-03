// 2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

#include <stdio.h>

int main () {
  int base;
  int altura;
  
  printf ("Insira o valor da base\n");
  int deu_certo = scanf ("%i", &base);

  printf ("Insira o valor da altura\n");
  deu_certo = scanf ("%i", &altura);

  float area = (base * altura) / 2;

  printf ("A área do triângulo é %.2f\n", area);

  return 0;
}