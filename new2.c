#include <stdio.h>
#include <string.h>

struct laptop {
  char vendorName[50];
  char custCategory[50];
  char itemName[50];
  int itemID;
  float itemPrice;
  int RAM;
  float CPU;
  float storageCapacity;
};

int power(int base, int exp) {
  int ans = base;
  int j;
  for (j = 0; j < exp; ++j) {
    ans *= base;
  }
  return ans;
}

int isarmstrong(int a) {
  int sum = 0;
  while (a > 0) {
    sum += power(a % 10, 3);
    a/=10;
  }

  if (sum == a) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  int n;
  scanf("%d", &n);
  getchar();

  struct laptop laptops[n];

  int i;
  for (i = 0; i < n; ++i) {
    scanf("%[^\n]s", laptops[i].vendorName);
    getchar();
    scanf("%[^\n]s", laptops[i].custCategory);
    getchar();
    scanf("%[^\n]s", laptops[i].itemName);
    getchar();
    scanf("%d", &laptops[i].itemID);
    getchar();
    scanf("%f", &laptops[i].itemPrice);
    getchar();
    scanf("%d", &laptops[i].RAM);
    getchar();
    scanf("%f", &laptops[i].CPU);
    getchar();
    scanf("%f", &laptops[i].storageCapacity);
    getchar();
  }

  int j;
  for (j = 0; j < n; ++j) {
    if (laptops[j].RAM == 16 && isarmstrong(laptops[j].itemID) &&
        laptops[j].itemName[1] != 'a' && laptops[j].itemPrice > 61000) {
      laptops[j].itemPrice -= 7 * laptops[j].itemPrice / 100;
    }
    printf("%g\n", laptops[j].itemPrice);
  }
}
