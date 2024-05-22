#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;

  do {
    int deu_certo = system ("clear");

    printf("MEU JOGO\n");
    printf("1 - iniciar\n");
    printf("2 - resultado\n");
    printf("3 - ajuda\n");
    printf("4 - sair\n");
    printf("Escolha uma opção => \n");
    deu_certo = scanf("%i", &opcao);
    if (!deu_certo) opcao = 0;
    while (getchar() != '\n'); // limpar buffer do teclado

    switch (opcao) {
    case 1: {
      deu_certo = system("clear");
      char nome[31];
      printf ("Nome do jogador: \n");
      deu_certo = scanf ("%[^\n]s", nome);
      printf ("Olá %s\n", nome);
      printf ("Pressione ENTER para iniciar ");
      getchar ();
      break; }
      
    case 2: {
      deu_certo = system ("clear");
      printf ("Resultado\n");
      printf ("1o lugar - Jose - 1000\n");
      printf ("2o lugar - Maria - 700\n");
      printf ("3o lugar - Pedro - 600\n");
      printf ("4o lugar - Ana - 500\n");
      printf ("5o lugar - Mateus - 100\n");
      printf ("Pressione ENTER para voltar ");
      getchar ();
      break;
    }
    case 3:
      break;
    case 4:
      break;
    default:
      opcao = 0;
      printf("Opção inválida! Pressione ENTER para continuar ");
      getchar();
    }
  } while (opcao != 4);
  return 0;
}