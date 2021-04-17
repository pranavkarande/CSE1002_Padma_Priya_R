#include <stdio.h>
#include <string.h>

int main(void) {
  char input[50];
  printf("Enter String: ");
  scanf("%s", input);
  getchar();

  int sz = strlen(input);
  int no_vowels = 0;

  for (int j = 0; j < sz; ++j) {
    char arr[] = "aeiouAEIOU";
    for (int i = 0; i < 10; ++i) {
      if (*(arr + i) == *(input + j)) {
        no_vowels++;
        break;
      }
    }
  }

  printf("No. of vowels is %d.\n", no_vowels);
  printf("No. of consonants is %d.\n", sz - no_vowels);
}
