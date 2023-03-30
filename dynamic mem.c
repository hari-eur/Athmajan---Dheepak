#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size, i, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    arr = (int *) malloc(size * sizeof(int));

    // Populate the array with user input
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of all the values in the array
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("The sum of all the values in the array is %d\n", sum);

    // Deallocate the memory used by the array
    free(arr);

    return 0;
