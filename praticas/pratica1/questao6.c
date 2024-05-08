// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a)

#include <stdio.h>
#include <math.h>

int main () {
  
  float a;
  printf ("Insira o a: ");
  int deu_certo = scanf ("%f", &a);
  
  float b;
  printf ("Insira o b: ");
  deu_certo = scanf ("%f", &b);

  float c;
  printf ("Insira o c: ");
  deu_certo = scanf ("%f", &c);

  float delta = b * b - 4 * a * c;
  double raiz_quadrada = sqrt(delta);
  double calculomais = (-1) * b + raiz_quadrada / 2 * a;
  double calculomenos = (-1) * b - raiz_quadrada / 2 * a;

  if (raiz_quadrada < 0) {
      printf ("A raiz quadrada é negativa, não existe solução nos números reais\n");
      return 0;
    }
    
  if (raiz_quadrada >= 0);
  {
    printf ("As raízes da equação são %f e %f\n", calculomais, calculomenos);
  }
  
  return 0;
}