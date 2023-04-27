#include <stdio.h>

int main()
{
    // Get the size of the array from the user
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Initialize the array with user input
    int my_array[size];
    printf("Enter %d integers to fill the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &my_array[i]);
    }

    // Get the location of the element to delete from the user
    int location;
    printf("Enter the location of the element to delete: ");
    scanf("%d", &location);

    // Delete the element at the specified location
    for (int i = location; i < size - 1; i++)
    {
        my_array[i] = my_array[i + 1];
    }

    // Print the updated array
    printf("Array after deletion:\n");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    return 0;
}
