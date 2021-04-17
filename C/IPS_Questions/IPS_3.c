#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Enter first number: ");
  scanf("%d", &a);
  getchar();

  printf("Enter second number: ");
  scanf("%d", &b);
  getchar();

  printf("Enter third number: ");
  scanf("%d", &c);
  getchar();

  if(a + b == c) {
    printf("Yes");
    printf("%d + %d = %d\n", a, b, c);
  }
  else if (b + c == a) {
    printf("Yes");
    printf("%d + %d = %d\n", b, c, a);
  }
  else if (a + c == b) {
    printf("Yes");
    printf("%d + %d = %d\n", a, c, b);
  }
  else {
    printf("No relation found.\n");
  }
}
