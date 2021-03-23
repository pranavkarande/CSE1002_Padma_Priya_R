#include <stdio.h>
#include <string.h>

int main(void) {
  // Taking int as input
  int inp;
  printf("Enter decimal number to be converted to binary: ");
  scanf("%d", &inp);

  // Creating array for output and in for len of that array
  char out[100];
  int len = 0;

  // Adding binary digits to out
  while(inp>0) {
    out[len] = (char)(inp % 2 + 48);
    inp/=2;
    len++;
  }

  // Printing out in reverse order
  int i;
  for (i = strlen(out) - 1; i > -1; --i) {
    printf("%c", out[i]);
  }
  printf("\n");
}
