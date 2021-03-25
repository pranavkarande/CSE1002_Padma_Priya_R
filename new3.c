#include <stdio.h>
#include <string.h>

int main(void) {
  int T;
  scanf("%d", &T);
  getchar();

  char s[T][100];

  int i;
  for (i = 0; i < T; ++i) {
    scanf("%s", s[i]);
    getchar();
  }

  int possible[T];
  int len;

  int j;
  for (j = 0; j < T; ++j) {
    len = strlen(s[j]);
    possible[j] = 1;

    if (s[j][0] != 'C') {
      possible[j] = 0;
      break;
    }

    if (s[j][len - 1] != 'S') {
      possible[j] = 0;
      break;
    }

    int k;
    for (k = 0; k < len - 1; ++k) {
      if (s[j][k] == 'C' && s[j][k + 1] == 'S') {
        possible[j] = 0;
      } else if (s[j][k] == 'E' && s[j][k + 1] == 'C') {
        possible[j] = 0;
      } else if (s[j][k] == 'S' && s[j][k + 1] != 'S') {
        possible[j] = 0;
      }
    }
  }
  int l;
  for (l = 0; l < T; ++l) {
    if (possible[l] == 1) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }
}
