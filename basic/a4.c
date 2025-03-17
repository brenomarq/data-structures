#include <stdio.h>
#include <stdlib.h>

#define MAX_LIVROS 5

typedef struct {
  char titulo[50];
  char autor[25];
  int ano;
} Livro;

void show_options() {
  printf("\nOpções:\n");
  printf("[1] cadastrar livro [2] listar livros [0] sair\n");
  printf("Digite o que deseja fazer: ");
}

void show_books(Livro livros[], int qtd) {
  printf("Livros disponíveis: ");
  for (int i = 0; i < qtd; ++i) {
    printf("\nId: %d\n", i + 1);
    printf("Título: %s", livros[i].titulo);
    printf("Autor: %s", livros[i].autor);
    printf("Ano de publicação: %d\n", livros[i].ano);
  }
}

int main() {
  Livro livros[MAX_LIVROS];
  int continuar = 1, choice;
  int qtd_livros = 0;

  printf("SISTEMA DE ARMAZENAMENTO DE LIVROS\n");
  printf("----------------------------------");

  while (continuar) {
    show_options();
    scanf("%d", &choice);
    getchar();

    if (choice == 0) {
      printf("Finalizando programa...\n");
      continuar = 0;
    } else if (choice == 1) {
      if (qtd_livros < MAX_LIVROS) {
        printf("Título: ");
        fgets(livros[qtd_livros].titulo, sizeof(livros[qtd_livros].titulo), stdin);
        printf("Autor: ");
        fgets(livros[qtd_livros].autor, sizeof(livros[qtd_livros].autor), stdin);
        printf("Ano de publicação: ");
        scanf("%d", &livros[qtd_livros].ano);
        getchar();

        qtd_livros++;
        system("clear");
      } else {
        printf("Número máximo de livros alcançado!\n");
      }
    } else if (choice == 2) {
      show_books(livros, qtd_livros);
    } else {
      printf("Opção inválida!");
    }
  }

  printf("Programa finalizado!\n");

  return 0;
}
