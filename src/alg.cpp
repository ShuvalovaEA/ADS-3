// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int low, count = 0, high = size - 1;
  while (low < high){
      int middle = (low + high) / 2;
      if (arr[middle] < value) {
          low = middle + 1;
      } else if (arr[middle] >= value) {
          high = middle - 1;
      } else {
          return middle;
      }
  }
  return 0;
}
