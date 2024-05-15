#include <stdio.h>

int main() {
  int numero;

  printf("Entre com o número inteiro: \n");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo) {
    int quantidade_divisores = 0;
    for (int i = 1; i <= numero; i++) {
      if (numero % i == 0) {
        quantidade_divisores++;
      }
    }
    if (quantidade_divisores == 2) {
      printf("O número %i é primo\n", numero);
    } else {
      printf("O número %i não é primo\n", numero);
    }
  } else {
    printf("Número invalido\n");
  }

  return 0;
}