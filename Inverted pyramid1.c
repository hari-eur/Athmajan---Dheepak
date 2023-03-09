#include <stdio.h>

int main() {
    int rows = 7;
    int i, j, k;

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}