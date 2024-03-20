// 3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>

int main () {

  int raio;
  float perimetro;
  const float PI = 3.1416f;
  
  printf ("Insira o raio da pizza: ");
  int deu_certo = scanf ("%i", &raio);
  
  perimetro = 2 * PI * raio;
  
  printf ("O perímetro da pizza é: %f\n", perimetro);

  return 0;
  
}