#include <stdio.h>
#include <ctype.h>

int is_valid_string(char *str);

int main(void) {
    char str[9];
    printf("Enter a string: ");
    scanf("%8s", str);
    if (is_valid_string(str)) {
        printf("String is valid.\n");
    } else {
        printf("String is not valid.\n");
    }
    return 0;
}

int is_valid_string(char *str) {
    int length = 0;
    int has_lowercase = 0;
    int has_uppercase = 0;
    int has_number = 0;
    int has_special = 0;
    char *p = str;
    while (*p != '\0') {
        if (++length > 8) {
            return 0;  // Too long.
        }
        if (islower(*p)) {
            has_lowercase = 1;
        } else if (isupper(*p)) {
            has_uppercase = 1;
        } else if (isdigit(*p)) {
            has_number = 1;
        } else if (!isalnum(*p)) {
            has_special = 1;
        }
        p++;
    }
    if (length != 8 || !has_lowercase || !has_uppercase || !has_number || !has_special) {
        return 0;  // Invalid.
    }
    return 1;  // Valid.
}
