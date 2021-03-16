#include <stdio.h>

int n;

int check_in(int a, int *arr) {
  int ret_val = 0;
  int i;
  for(i = 0; i < n; ++i) {
    if(a == *(arr + i)) {
      ret_val = 1;
      break;
    }
  }
  return ret_val;
}

int main(void) {
  printf("Enter number of elements: ");
  scanf("%d", &n);
  getchar();

  int input[n];

  int i;
  for(i = 0; i < n; ++i) {
    scanf("%d", &input[i]);
    getchar();
  }

  int checked[n];
  int checked_count = 0;

  int j;
  for(j = 0; j < n; ++j) {
    int curr_int = input[j];
    int curr_freq = 0;
    if(check_in(curr_int, checked) == 1) {
      continue;
    }
    else {
      int k;
      for(k = 0; k < n; ++k) {
        if(input[k] == curr_int) {
          curr_freq++;
        }
      }
    }
    checked[checked_count++] = curr_int;
    printf("%d %d\n", curr_int, curr_freq);
  }
}
