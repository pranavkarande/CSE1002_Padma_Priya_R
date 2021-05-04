#include <iostream>
using namespace std;

int main(void) {
  int rows_a, columns_a, rows_b, columns_b;

  cin >> rows_a >> columns_a >> rows_b >> columns_b;

  if (!((rows_a == columns_a) && (rows_b == columns_b) && (rows_a == rows_b))) {
    cout << "Multiplication Not Applicable" << endl;
  } else {
    int A[rows_a][columns_a], B[rows_b][columns_b];

    int i, j;
    for (i = 0; i < rows_a; ++i) {
      for (j = 0; j < columns_a; ++j) {
        cin >> A[i][j];
      }
    }
    for (i = 0; i < rows_b; ++i) {
      for (j = 0; j < columns_b; ++j) {
        cin >> B[i][j];
      }
    }

    int C[rows_a][columns_b];
    for (i = 0; i < rows_a; ++i) {
      for (j = 0; j < columns_b; ++j) {
        int product = 0;
        int k;
        for (k = 0; k < columns_a; ++k) {
          product += A[i][k] * B[k][j];
        }
        C[i][j] = product;
      }
    }

    for (i = 0; i < rows_a - 1; ++i) {
      for (j = 0; j < columns_b - 1; ++j) {
        cout << C[i][j] << "      ";
      }
      cout << C[i][columns_b - 1] << endl;
    }

    for (j = 0; j < columns_b - 1; ++j) {
      cout << C[rows_a - 1][j] << "      ";
    }
    cout << C[rows_a - 1][columns_b - 1];
  }
}
