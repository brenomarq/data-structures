#include <stdio.h>
#include <stdlib.h>

// Inicializa todas as posições com 0
void init_table(int table[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      table[i][j] = 0;
    }
  }
}

// Mostra a situação atual do tabuleiro
void show_table(int table[3][3]) {
  printf("\n");
  printf("Tabuleiro atual:\n");
  printf("  1 2 3\n");
  for (int i = 0; i < 3; i++) {
    printf("%d ", i + 1);
    for (int j = 0; j < 3; j++) {
      if (table[i][j] == 0) {
        printf(". ");
      } else if (table[i][j] == 1) {
        printf("X ");
      } else {
        printf("O ");
      }
    }
    printf("\n");
  }
}

int check_game(int table[3][3]) {
  // Verifica se houve vencedor
  for (int i = 0; i < 3; i++) {
    // Primeiro verifica as linhas
    if (table[i][0] == table[i][1] && table[i][1] == table[i][2] && table[i][0] != 0) {
      return table[i][0];
    }
    // Depois verifica as colunas
    if (table[0][i] == table[1][i] && table[1][i] == table[2][i] && table[0][i] != 0) {
      return table[0][i];
    }
  }
  // Verifica a diagonal principal
  if (table[0][0] == table[1][1] && table[1][1] == table[2][2] && table[0][0] != 0) {
    return table[0][0];
  }

  // Verifica a diagonal secundária
  if (table[0][2] == table[1][1] && table[1][1] == table[2][0] && table[0][2] != 0) {
    return table[0][2];
  }

  // Verifica se o jogo empatou
  int count = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (table[i][j] != 0) {
        count++;
      }
    }
  }
  if (count == 9) {
    return 3;
  }

  return 0;
}

int main() {
  int table[3][3];
  int player = 1, continue_game = 1;

  init_table(table);

  while (continue_game) {
    show_table(table);
    printf("\nJogador %d, informe a linha e a coluna [1 1]: ", player);
    int row, col;
    scanf("%d %d", &row, &col);

    // Verifica se a posição é válida
    if (row < 1 || row > 3 || col < 1 || col > 3) {
      printf("Posição inválida!\n");
      continue;
    }

    // Atualiza o tabuleiro
    if (table[--row][--col] == 0) {
      table[row][col] = player;
      player = (player == 1) ? 2 : 1;
    } else {
      printf("Posição já ocupada!\n");
    }

    int result = check_game(table);

    if (result == 1) {
      system("clear");
      show_table(table);
      printf("\nParabéns, o jogador 1 venceu!\n");
      continue_game = 0;
    } else if (result == 2) {
      system("clear");
      show_table(table);
      printf("\nParabéns, o jogador 2 venceu!\n");
      continue_game = 0;
    } else if (result == 3) {
      system("clear");
      show_table(table);
      printf("\nDeu velha! :P\n");
      continue_game = 0;
    }
  }

  return 0;
}
