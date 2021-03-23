#include <stdio.h>
#include <string.h>

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

  printf("Input converted to string is %s.\n", itoa(inp));
}
