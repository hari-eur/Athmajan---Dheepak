#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 100

int main() {
    char str[MAX_STRING_LENGTH];
    int len, lowercase = 0, uppercase = 0, number = 0, specialchar = 0;
    int i;

    // Get string input from user
    printf("Enter a string: ");
    fgets(str, MAX_STRING_LENGTH, stdin);
    len = strlen(str);

    // Check length of string
    if (len != 9) {
        printf("Error: String must be exactly 8 characters long.\n");
        return 0;
    }

    // Check if string contains required characters
    for (i = 0; i < len; i++) {
        if (islower(str[i])) {
            lowercase = 1;
        }
        else if (isupper(str[i])) {
            uppercase = 1;
        }
        else if (isdigit(str[i])) {
            number = 1;
        }
        else if (ispunct(str[i])) {
            specialchar = 1;
        }
    }

    if (lowercase == 0 || uppercase == 0 || number == 0 || specialchar == 0) {
        printf("Error: String must contain atleast one lowercase letter, one uppercase letter, one number, and one special character.\n");
        return 0;
    }

    printf("String meets the requirements.\n");

    return 0;
}
