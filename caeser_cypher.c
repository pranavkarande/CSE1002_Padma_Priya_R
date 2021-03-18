#include <stdio.h>
#include <string.h>

int main(void) {
  char str[50];
  printf("Enter message to be encrypted: ");
  scanf("%s", str);
  getchar();

  int len = strlen(str);

  int i;
  for (i = 0; i < len; ++i) {
    if (65 <= str[i] && str[i] <= 90) {
      str[i] += 32;
    }
    if (97 <= str[i] && str[i] <= 119) {
      str[i] += 3;
    } else if (str[i] == 'x') {
      str[i] = 'a';
    } else if (str[i] == 'y') {
      str[i] = 'b';
    } else if (str[i] == 'z') {
      str[i] = 'c';
    }
  }

  printf("Encrypted message is: %s\n", str);
}
