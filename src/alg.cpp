// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
  int r = 0, l = size - 1, k = 0;
  while (r < l) {
    int mid = (r + l) / 2;
    if (arr[mid] < value)
r = mid + 1;
    else
l = mid;
    }
  if (arr[r] == value) {
    while (arr[r] == value) {
k++;
r++;
      }
    }
  if (k != 0)
    return k;
  else
    return 0;
}
