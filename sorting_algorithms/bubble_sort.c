#include <stdio.h>

void bubble_sort(int arr[], int size);

int main() {
  int num[10] = {7, 5, 10, 8, 1, 2, 4, 9, 6, 3};

  bubble_sort(num, 10);

  for (int i = 0; i < 10; ++i) {
    printf("%d ", num[i]);
  }

  printf("\n");

  return 0;
}

void bubble_sort(int arr[], int size) {
  int temp;

  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
