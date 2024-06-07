#include <stdbool.h>
#include <stdio.h>

// swap function that takes item a and stores it in a temp variable
//  it makes item a item b, and makes the value of b the value of temp
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// takes the list and the amount of items in the list
// it then iterates through the numlist and prints each element
void printArr(int a[], int b) {
  for (int i = 0; i < b; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
int main() {
  int numlist[] = {45, 56, 3, 34, 9, 55, 1};
  int itemnum;
  itemnum = sizeof(numlist) / sizeof(numlist[0]);
  bool islistsorted = false;

  // this while loop makes sure that the list is sorted
  // if no swaps are made it listsorted is true
  //  if it does make a swap then list sorted stays false and iterates through
  //  the numlist swaping elements
  // it checks if item 1 is bigger than 2 if it is then it swaps
  // after one full iteration of the list, the list will be seen as sorted
  // untill it goes back to position 0 and finds anymore swaps if no more swaps
  // are found then islistsorted stays true meaning the loop ends and the list
  // prints
  while (islistsorted == false) {
    islistsorted = true;
    for (int i = 0; i < itemnum - 1; i++) {
      int tick = 0;
      if (numlist[i] > numlist[i + 1]) {
        swap(&numlist[i], &numlist[i + 1]);
        islistsorted = false;
      }
    }
  }
  printArr(numlist, itemnum);
  return 0;
}
