#include <stdio.h>

// UTILITY FUNCTIONS

void print_array(int* array, int size, char* array_name) {
  printf("Array '%s':", array_name);
  for (int i = 0; i < size; ++i) {
    printf(" %i", array[i]);
  }
  printf("\n");
}

void swap(int* x, int* y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

// SORTING ALGORITHMS

void bubble_sort(int* array, int size) {
  for (int i = 0; i < size; ++i) {
    for (int j = size; j > i; --j) {
      if (array[j] < array[j - 1]) swap(&(array[j]), &(array[j - 1]));
    }
  }
}

void selection_sort(int* array, int size) {
  for (int i = 0; i < size; ++i) {
    int smallest = i;
    for (int j = i + 1; j <= size; ++j) {
      if (array[j] < array[smallest]) smallest = j;
    }
    swap(&(array[i]), &(array[smallest]));
  }
}

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
