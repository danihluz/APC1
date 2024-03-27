// Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes)

#include <stdio.h>
#include <math.h>

int main () {

  float gigabytes;
  printf ("Insira o valor em Gigabytes: \n");
  int deu_certo = scanf ("%f", &gigabytes);

 float bytes = (gigabytes * 1073741824);

  printf ("%10.0f bytes\n", bytes); // 10.0 - ficar sem casa decimal

  return 0;
}