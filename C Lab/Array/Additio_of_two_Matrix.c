#include <stdio.h>

int main() {
  int m, n, i, j;
  printf("Enter the order of the matrices: ");
  scanf("%d %d", &m, &n);

  int a[m][n], b[m][n], c[m][n];

  printf("Enter the elements of the first matrix:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter the elements of the second matrix:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  // Addition of matrices
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }

  // Displaying the result
  printf("Resultant matrix after addition:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}
