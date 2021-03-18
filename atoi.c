#include <stdio.h>
#include <string.h>

int power(int base, int exp) {
  int ans = base;
  int j;
  for (j = 0; j < exp; ++j) {
    ans *= base;
  }

  return ans;
}

int atoi(char *str) {
  int ret;
  int len = strlen(str);

  int i;
  for(i = 0; i < len; ++i) {
    ret += ((int)str[i] - 48) * power(10, len - i - 1);
  }
  return ret/10;
}

int main(void) {
  char inp[50];
  printf("Enter string to convert: ");
  scanf("%s", inp);
  getchar();

  printf("You entered %d.\n", atoi(inp));
}
