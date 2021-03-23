#include <stdio.h>
#include <string.h>

int main(void) {
  // Taking int as input
  int inp;
  printf("Enter decimal number to be converted to hexadecimal: ");
  scanf("%d", &inp);

  // Creating array for output and in for len of that array
  char out[100];
  int len = 0;
  int temp;
  // Adding hex digits to out
  while (inp > 0) {
    temp = inp % 16;
    if(temp < 10) {
      out[len] = (char)(temp + 48);
    } else {
      out[len] = (char)(temp + 55);
    }
    inp /= 16;
    len++;
  }

  // Printing out in reverse order
  printf("Decimal converted to hexadecimal is: ");
  int i;
  for (i = strlen(out) - 1; i > -1; --i) {
    printf("%c", out[i]);
  }
  printf("\n");
}
