#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  getchar();

  scanf("%d", &n);
  getchar();

  char inp[n][n];

  int i;
  for (i = 0; i < n; ++i) {
    int j;
    for (j = 0; j < n; ++j) {
      scanf("%c", &inp[i][j]);
      getchar();
    }
  }

  int cond = 0;

  int p;
  for (p = 1; p < n; ++p) {
    int q;
    for (q = 0; q < n - 1; ++q) {
      if (inp[p][q] == inp[p - 1][q] &&
          inp[p - 1][q] == inp[p][q + 1]) {
        int ver_len = 0, hor_len = 0;
        int r;
        for (r = q; r < n - 1; ++r) {
          if (inp[i][r] == inp[p][q]) {
            hor_len++;
          } else {
            break;
          }
        }
        int s;
        for (s = p; s > 0; --s) {
          if (inp[s][q] == inp[p][q]) {
            ver_len++;
          } else {
            break;
          }
        }
        if (ver_len == hor_len) {
          cond = 1;
          p = q = n;
        }
      }
    }
  }
  if (cond) {
    printf("Yes\n");
  } else {
    printf("No");
  }
}
