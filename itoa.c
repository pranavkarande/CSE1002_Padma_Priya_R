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

char *itoa(int val) {
  char temp[50];
  char ret[50];
  int no_of_dig = 0;

  while (val > 0) {
    temp[no_of_dig] = val%10;
    no_of_dig++;
    val/=10;
  }

  int i;
  for(i = 0; i < no_of_dig; ++i) {
    ret[i] = (char)(temp[no_of_dig - i - 1] + 48);
  }

  char *ptr;
  ptr = ret;
  return ptr;

}

int main(void) {
  int inp;
  printf("Enter int to convert: ");
  scanf("%d", &inp);
  getchar();

  printf("You entered %s.\n", itoa(inp));
}
