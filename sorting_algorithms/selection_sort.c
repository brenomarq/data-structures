#include <stdio.h>

void selection_sort(int arr[], int size);

int main() {
  int num[6];

  printf("Insert 6 random numbers:\n");
  for (int i = 0; i < 6; ++i) {
    scanf("%d", &num[i]);
  }

  selection_sort(num, 6);

  for (int i = 0; i < 6; ++i) {
    printf("%d ", num[i]);
  }

  printf("\n");
  return 0;
}

void selection_sort(int arr[], int size) {
  int min_index, temp;

  for (int i = 0; i < size - 1; ++i) {
    min_index = i;

    // Encontra o índice do menor elemento
    for (int j = i; j < size; ++j) {
      if (arr[j] < arr[min_index]) {
        min_index = j;
      }
    }

    // Realiza a troca dos elementos
    if (min_index != i) {
      temp = arr[i];
      arr[i] = arr[min_index];
      arr[min_index] = temp;
    }
  }
}
