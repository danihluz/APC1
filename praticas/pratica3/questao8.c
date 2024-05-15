// 8. Faça um programa em C que calcule o fatorial de um número inteiro. n! = n x n-1 x n-2 x ... 2 x1

#include <stdio.h>

int main () {
  int numero;
  long int fatorial = 1;

  printf ("Entre com o número: ");
  int deu_certo = scanf ("%i", &numero);
  int numero_valido = numero >=0;

  if (deu_certo && numero_valido) {
    printf ("%i! = ", numero);
    for(int i = numero; i>1; i--) {
      fatorial = fatorial * i;
      printf ("%i x", i);
    }
    printf ("1 = %li\n", fatorial);
  } else {
    printf ("Número invalido!\n");
  }
  
  return 0;
}
