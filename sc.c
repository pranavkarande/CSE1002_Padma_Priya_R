#include <stdio.h>

int power(int a, int b) {
  int k = 1;
  for (int i = 0; i < b; i++) {
    k *= a;
  }
  return k;
}

int arr_to_int(int x[5]) {
  int ret = 0;
  int i;
  for (i = 0; i < 5; ++i) {
    ret += x[i] * power(10, 4 - i);
  }
  return ret;
}

int dec_to_bin(int dec) {
  int dec1 = dec;
  int bin = 0;
  for (int i = 0; i <= 15; i++) {
    bin += (dec % 2) * power(10, i);
    dec = dec / 2;
  }

  return bin;
}

int bin_to_dec(int binary) {
  int n = binary;
  int i = 0, sum = 0;
  while (n > 0) {
    n = n / 10;
    i++;
  }

  for (int j = 0; j < i; j++) {
    sum += (binary % 10) * power(2, j);
    binary = binary / 10;
  }

  return sum;
}

void arr_cpy(int x[5], int y[5]) {
  int i;
  for (i = 0; i < 5; ++i) {
    x[i] = y[i];
  }
}

int main(void) {
  int divident_inp[9] = {1, 0, 1, 0, 0, 1, 1, 1, 1};
  /* int i; */
  /* for (i = 0; i < 9; ++i) { */
  /*   scanf("%d", &divident_inp[i]); */
  /*   getchar(); */
  /* } */

  int divisor[5] = {1, 0, 1, 1, 1};
  /* int j; */
  /* for (j = 0; j < 5; ++j) { */
  /*   scanf("%d", &divisor[j]); */
  /*   getchar(); */
  /* } */

  int carry = 5;
  int divident[5] = {divident_inp[0], divident_inp[1], divident_inp[2], divident_inp[3], divident_inp[4]};
  while (1) {
    int xor_down[5];
    int xor_up[5];
    arr_cpy(xor_up, divident);
    if(divident[0] == 1) {
      arr_cpy(xor_down, divisor);
    } else {
      int temp[5] = {0, 0, 0, 0, 0};
      arr_cpy(xor_down, temp);
    }

    int result[5]; // xor of up and down
    int u;
    for (u = 0; u < 5; ++u) {
      if(xor_down[u] == xor_up[u]) {
        result[u] = 0;
      } else {
        result[u] = 1;
      }
    }

    if (carry != 9) {
      result[0] = result[1];
      result[1] = result[2];
      result[2] = result[3];
      result[3] = result[4];
      result[4] = divident_inp[carry++];
    } else {carry++;}

    arr_cpy(divident, result);

    if (carry == 10) {
      break;
    }
  }
  int q;
  for (q = 0; q < 5; ++q) {
    printf("%d\n", divident[q]);
  }
}
