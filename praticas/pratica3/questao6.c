// 6. Faça um programa em C que liste todos os múltiplos de n, entre 1 e 100.

#include <stdio.h>

int main () {

  int n;
  
  printf ("Entre com o número: \n");
  int deu_certo = scanf ("%i", &n);

  if (deu_certo) {  
    for (int i=1; i<=100; i++) {
      if (i % n == 0) {
        printf ("%i ",i);
      }
    }
    printf ("\n");
  } else {
    printf ("Número invalido\n");
  }

  return 0;
}