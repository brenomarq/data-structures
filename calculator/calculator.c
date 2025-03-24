#include "calculator.h"
#include <stdio.h>

void show_menu(int *operacao) {
  printf("\nCALCULADORA INTELIGENTE\n");
  printf("---------------------------------------------------\n");
  printf("Qual operação você deseja fazer?\n");
  printf("[1] soma\n[2] subtração\n[3] multiplicar\n[4] dividir\n[0] sair\n");
  printf("Digite sua opção: ");
  scanf("%d", operacao);
}

float sum(float num1, float num2) {
  return num1 + num2;
}

float subtract(float num1, float num2) {
  return num1 - num2;
}

float multiply(float num1, float num2) {
  return num1 * num2;
}

float divide(float num1, float num2) {
  return num1 / num2;
}
