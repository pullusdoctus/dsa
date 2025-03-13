#include <stdio.h>

void insertion_sort(int* array, int size) {
  for (int i = 1; i < size; ++i) {
    int key = array[i];
    int j = i - 1;
    while (j >= 0 && array[j] > key) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

void print_array(int* array, int size, char* array_name) {
  printf("Array '%s':", array_name);
  for (int i = 0; i < size; ++i) {
    printf(" %i", array[i]);
  }
  printf("\n");
}

int main(int argc, char** argv) {
  int size = 6;
  int array[] = {5, 2, 4, 6, 1, 3};
  int insertion_sorted[size];
  for (int i = 0; i < size; ++i) {
    insertion_sorted[i] = array [i];
  }
  insertion_sort(insertion_sorted, size);

  print_array(array, size, "array");
  print_array(insertion_sorted, size, "insertion_sorted");
}
