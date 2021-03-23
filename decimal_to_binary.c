#include <stdio.h>
#include <string.h>

int main(void) {
  int inp;

  printf("Enter decimal number to be converted to binary: ");
  scanf("%d", &inp);

  char out[100];
  int len = 0;

  while(inp>0) {
    out[len] = (char)(inp % 2 + 48);
    inp/=2;
    len++;
  }

  int i;
  for (i = strlen(out) - 1; i > -1; --i) {
    printf("%c", out[i]);
  }
  printf("\n");
}
