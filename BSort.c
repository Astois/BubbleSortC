#include <stdbool.h>
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void printArr(int a[], int *b) {
  for (int i = 0; i < *b; i++) {
    printf("%d", a[i]);
  }
}
int main() {
  int numlist[] = {45, 56, 3, 34, 9, 55, 1};
  int itemnum;
  itemnum = sizeof(numlist) / sizeof(numlist[0]);
  bool islistsorted = false;

  while (islistsorted == false) {
    for (int i = 0; i < itemnum; i++) {
      int tick = 0;
      if (numlist[i] > numlist[i + 1]) {
        swap(&numlist[i], &numlist[i + 1]);

      } else {
        tick = tick + 1;
      }
      if (tick == itemnum) {
        islistsorted = true;
      }
    }
  }
  printf("%d", numlist[0]);
  printArr(numlist, &itemnum);
  return 0;
}
