#include <stdio.h>

int main () {
  char opcao;

  printf ("MENU PRINCIPAL\n");
  printf ("1 - consultar saldo\n");
  printf ("2 - fazer recarga\n");
  printf ("3 - listar recados\n");
  printf ("4 - ligações feitas\n");
  printf ("0 - sair\n");
  printf ("Entre com uma opção => ");
  int deu_certo = scanf ("%c", &opcao);

  switch (opcao) {
    case '1': printf ("Seu saldo é R$10.00zn"); break; 
    case '2': {
      float valor;
      printf ("Entre com o valor da recarga: ");
      deu_certo = scanf ("%f", &valor);
      break;
    }
    case '3': printf ("Você não tem recados"); break;
    case '4': 
      printf ("61999999999\n");
      printf ("61999999998\n");
      printf ("61999999988\n"); 
      printf ("61999999888\n");
    case '0': printf ("Até logo!\n"); break;
    default: printf ("Opção invalida. Tente novamente\n");
  }

  
  return 0;
}