#include <stdio.h>
#include "../lib/shared/dsa.h"

int main(int argc, char** argv) {
  int size = 6;
  int array[] = {3, 6, 1, 4, 5, 2};
  int bs[size];
  int is[size];
  int ss[size];
  for (int i = 0; i < size; ++i) {
    bs[i] = array[i];
    is[i] = array[i];
    ss[i] = array[i];
  }
  print_array(array, size, "array");
  printf("\n");

  bubble_sort(bs, size);
  print_array(bs, size, "bs");

  selection_sort(ss, size);
  print_array(ss, size, "ss");

  insertion_sort(is, size);
  print_array(is, size, "is");
  return 0;
}
