#include <stdio.h>

typedef struct {
  char nome[50];
  float notas[4];
} Aluno;

int main() {
  Aluno aluno;
  float soma = 0, media;

  printf("Calculadora de média\n");
  printf("--------------------\n");
  printf("\nDigite o nome do aluno: ");
  fgets(aluno.nome, sizeof(aluno.nome), stdin);

  printf("Digite as notas do aluno: \n");
  for (int i = 0; i < 4; ++i) {
    printf("Nota [%d]: ", i + 1);
    scanf("%f", &aluno.notas[i]);
    soma += aluno.notas[i];
  }

  media = soma / 4;

  printf("\nDados do aluno:\n");
  printf("Nome: %s", aluno.nome);
  printf("Média: %.2f\n", media);
}
