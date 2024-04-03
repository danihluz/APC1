// 4. Faça um programa em C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.

#include <stdio.h>

int main () {
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165;

  float preco_inicial = 100.0f;
  float preco_final = 0.0f;

  float valor_imposto_ICMS = ICMS * preco_inicial;
  float valor_imposto_COFINS = COFINS * preco_inicial;
  float valor_imposto_PIS_PASEP = PIS_PASEP * preco_inicial;

  preco_final = (1 + ICMS + COFINS + PIS_PASEP);

  printf ("Preço inicial = %f\n", preco_inicial);
  printf ("Preço final = %f\n", preco_final);
  printf ("Preço final = %f\n", valor_imposto_ICMS);
  printf ("Preço final = %f\n", valor_imposto_COFINS);
  printf ("Preço final = %f\n", valor_imposto_PIS_PASEP = PIS_PASEP);

  return 0;
}