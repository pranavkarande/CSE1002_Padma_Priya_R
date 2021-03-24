#include <stdio.h>

int main(void) {
  float P, A, i;
  printf("Enter P: ");
  scanf("%f", &P);
  getchar();

  printf("Enter A: ");
  scanf("%f", &A);
  getchar();

  printf("Enter i: ");
  scanf("%f", &i);
  getchar();
  printf("\n");

  int month = 1;
  float amm_each_month[100];
  float amm_cumm;
  float interest[100];

  while (P > A) {
    interest[month] = i * P / 100;
    printf("Interest paid in month %d is %g.\n", month, interest[month]);

    amm_each_month[month] = A + interest[month];
    printf("Amount paid in month %d is %g.\n", month, amm_each_month[month]);

    amm_cumm += amm_each_month[month];
    printf("Cumulative amount paid after %d months is %g.\n", month, amm_cumm);

    P -= amm_each_month[month];
    printf("Amount of loan still unpaid is %g.\n", P);
    printf("\n");
    month++;
  }
  printf("Number of monthly payments that were required is %d.\n", month);
  printf("Amount paid in last month was %g.\n", P + i * P / 100);
}
