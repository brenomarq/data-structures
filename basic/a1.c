#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char cidades[5][25];
  char cidade[25];
  int continuar = 1;

  printf("Escreva o nome de 5 cidades:\n");

  for (int i = 0; i < 5; ++i) {
    printf("Cidade [%d]: ", i + 1);
    fgets(cidades[i], sizeof(cidades[i]), stdin);
  }

  system("clear");
  printf("\nPesquise o nome de uma cidade: ");

  fgets(cidade, sizeof(cidade), stdin);

  for (int i = 0; i < 5; ++i) {
    if (strcmp(cidade, cidades[i]) == 0) {
      printf("A cidade está na lista.\n");
      break;
    }

    if (i == 4) {
      printf("A cidade não está na lista.\n");
    }
  }

  return 0;
}
