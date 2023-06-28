#include <stdio.h>
int main() {
  // Define the size of the matrices.
  int row , col , p ,q ;
  


  printf("\n Enter the size of the row :");
  scanf("%d", &row);

   printf("Enter the size of the column :");
  scanf("%d", &col);


  // Define the matrices.
  int A[row][col];
  int B[row][col];
  int C[row][col];


  printf("Enter the matrix A of %d* %d :",row,col);
  // Initialize the matrices.
  for (int i = 0; i < row; i++) { 
    for (int j = 0; j < col; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  


  printf("\n Enter the size of the row  for matrix B: \n");
  scanf("%d", &p);

   printf("Enter the size of the column for matrix B: ");
  scanf("%d", &q);

    printf("Enter the matrix B of %d * %d :\n",p,q);
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < q; j++) {
      scanf(" %d ", &B[i][j]);
    }
  }
  // Multiply the matrices.
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < q; j++) {
      C[i][j] = 0;
      for (int k = 0; k < p; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }



  // Print the results.
  printf("Product of the matrix A X B :\n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < q; j++) {
      printf(" %d ", C[i][j]);
    }
    printf("\n");
  }
  return 0;
}