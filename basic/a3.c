#include <stdio.h>

typedef struct {
  char rua[25];
  int numero;
} Endereco;

typedef struct {
  char nome[50];
  int idade;
  Endereco endereco;
} Pessoa;

int main() {
  Pessoa pessoa;

  printf("Digite os dados da pessoa:\n");
  printf("Nome: ");
  fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

  printf("Idade: ");
  scanf("%d", &pessoa.idade);
  getchar();

  printf("Digite o endereço:\n");
  printf("Rua: ");
  fgets(pessoa.endereco.rua, sizeof(pessoa.endereco.rua), stdin);

  printf("Digite o número da casa: ");
  scanf("%d", &pessoa.endereco.numero);

  printf("\nDados da pessoa:\n");
  printf("Nome: %s", pessoa.nome);
  printf("Idade: %d\n", pessoa.idade);
  printf("Endereço:\n");
  printf("Rua: %s", pessoa.endereco.rua);
  printf("Número: %d\n", pessoa.endereco.numero);

  return 0;
}
