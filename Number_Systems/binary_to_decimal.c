#include <stdio.h>
#include <string.h>

// Function to return base ** exp
int power(int base, int exp) {
  if (exp == 0) {
    return 1;
  }
  int ans = base;
  int j;
  for (j = 0; j < exp - 1; ++j) {
    ans *= base;
  }
  return ans;
}

int main(void) {
  char inp[100];
  printf("Enter binary number to convert to decimal: ");
  scanf("%s", inp);
  getchar();

  int out = 0;
  int len = strlen(inp);
  int rank = 0;

  int i;
  for (i = len-1; i > -1; --i) {
    if(inp[i] == '1') {
      out+=power(2, rank);
    }
    rank++;
  }

  printf("Number converted to decimal is %d.\n", out);
}
