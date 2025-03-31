#include <stdio.h>

void insertion_sort(int arr[], int size);

int main() {
  int num[10] = {7, 5, 10, 8, 1, 2, 4, 9, 6, 3};

  insertion_sort(num, 10);


  return 0;
}

void insertion_sort(int arr[], int size) {
  int temp;

  for (int i = 1; i < size; ++i) {
    temp = arr[i];
    for (int j = i; j > 0; --j) {
      if (arr[j] < arr[j - 1]) {

      }
    }
  }
}
