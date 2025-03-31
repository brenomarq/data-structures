#include <stdio.h>

void insertion_sort(int arr[], int size);

int main() {
  int num[6];

  printf("Insert 6 random numbers:\n");
  for (int i = 0; i < 6; ++i) {
    scanf("%d", &num[i]);
  }

  insertion_sort(num, 6);

  for (int i = 0; i < 6; ++i) {
    printf("%d ", num[i]);
  }

  printf("\n");

  return 0;
}

void insertion_sort(int arr[], int size) {
  int temp;

  for (int i = 1; i < size; ++ i) {
    for (int j = i; j > 0; --j) {
      if (arr[j] < arr[j - 1]) {
        temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      }
    }
  }
}
