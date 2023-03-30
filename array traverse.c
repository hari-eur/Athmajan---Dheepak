#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
    int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    int *ptr;

    // Print the elements of the array using a pointer
    printf("Array elements: ");
    for (ptr = arr; ptr < arr + ARRAY_SIZE; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    return 0;
}
