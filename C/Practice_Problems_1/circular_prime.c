#include <stdio.h>

int power(int base, int exp) {
  int ans = base;
  int j;
  for (j = 0; j < exp - 1; ++j) {
    ans *= base;
  }
  return ans;
}

int check_prime(int n) {
  int i;
  for (i = 2; i < n/2 + 1; ++i) {
    if(n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(void) {
  int p;
  scanf("%d", &p);
  getchar();

  int c_prime = 1;

  int p_cp = p;
  int len = 0;
  while(p_cp > 0) {
    p_cp/=10;
    len++;
  }

  int j;
  for (j = 0; j < len; ++j) {
    if (check_prime(p) == 0) {
      c_prime = 0;
      break;
    }
    p = p / 10 + (p % 10) * power(10, len - 1);
  }
  if (c_prime == 1) {
    printf("Circular prime\n");
  } else {
    printf("Not circular prime\n");
  }
}
