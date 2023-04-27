#include <stdio.h>

int main() {
    // Initialize the 2-D array
    int my_array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Access an element in the array
    int row = 1;
    int col = 2;
    int element = my_array[row][col];
    printf("Element at row %d, column %d is %d\n", row, col, element);

    return 0;
}
