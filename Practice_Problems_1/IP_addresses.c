#include <stdio.h>
#include <string.h>

struct computer {
  char IP[20];
  char name[50];
  char IP_split[4][4];
};

int main(void) {
  int n;
  scanf("%d", &n);
  getchar();

  struct computer inp[n];

  int i;
  for (i = 0; i < n; ++i) {
    scanf("%s", inp[i].IP);
    getchar();

    scanf("%[^\n]s", inp[i].name);
    getchar();
  }

  int k;
  for (k = 0; k < n; ++k) {
    char *ptr = strtok(inp[k].IP, ".");

    int j;
    for (j = 0; ptr != NULL; ++j) {
      strcpy(inp[k].IP_split[j], ptr);
      ptr = strtok(NULL, ".");
    }
  }

  int p;
  for (p = 0; p < n; ++p) {
    int q;
    for (q = p + 1; q < n; ++q) {
      if (!strcmp(inp[p].IP_split[0], inp[q].IP_split[0]) &&
          !strcmp(inp[p].IP_split[1], inp[q].IP_split[1])) {
        printf("Machines %s and %s are on the same local network\n",
               inp[p].name, inp[q].name);
        break;
      }
    }
  }
}
