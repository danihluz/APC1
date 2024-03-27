// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a)

#include <stdio.h>

int main () {
  float a;
  float b;
  float c;
  
  printf ("Insira o a");
  int deu_certo = scanf ("%f", &a);

  printf ("Insira o b");
  deu_certo = scanf ("%f", &b);

  printf ("Insira o c");
  deu_certo = scanf ("%f", &c);
  
  return 0;
}