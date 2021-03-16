#include <stdio.h>

int n;

int max_int(int *arr) {
  int max_ele = *arr;
  int k;
  for (k = 1; k < n; ++k) {
    if(*(arr + k) > max_ele) {
      max_ele = *(arr + k);
    }
  }
  return max_ele;
}

int main(void) {
  printf("Enter number of elements: ");
  scanf("%d", &n);
  getchar();
  printf("\n");

  int input[n];

  int i;
  for (i = 0; i < n; ++i) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &input[i]);
    getchar();
  }
  printf("\n");

  printf("Largest element is %d.\n" , max_int(input));
}
